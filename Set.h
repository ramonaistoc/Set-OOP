#ifndef SET_H
#define SET_H
#include <iostream>
using namespace std;

 template <class T> class Set
{
    public:
        Set();
        Set(int m, int maxi);
        ~Set();
        Set( Set<T> & a);

        int cautare_binara_0( T x, int st, int dr);

        int verific(T x);

        void inserare(T x);

        void stergere (T x);

        int cautare (T x);

        T suma_elementelor();

        int nr_elem();

        Set<T> Par();

        Set<T> Impar();

        T operator [](int i);

        Set<T> operator + (Set<T> & a);

        int operator < (Set<T> & a);

        const Set & operator =( const Set<T> & b);

        int operator >(Set<T> & a);

        Set<T> & operator * (int s);

        template <class Tip> friend istream & operator >>(istream &in, const Set<Tip> &s);

        template <class Tip> friend ostream & operator <<(ostream &out, const Set<Tip> &s);

private:
        T *v;
        int n, n_max;

};


template <class T> Set<T>::Set()          //const fara parametrii
{
    n=0;
    n_max=8;
    v=new T[n_max];
    //ctor
}

template <class T> Set<T>::Set( int m, int maxi)    //const cu parametrii
{
    n=m;
    n_max=maxi;
    v=new T[n_max];
}

template <class T> Set<T>::Set( Set<T> & a)      //Set de tip t pt param
{
    int i, n;
    n=n_max=a.nr_elem();
    v=new T[n_max];

    for(i=0;i<n;i++)
      v[i]=a[i];
}

 template <class T> int Set <T>::cautare_binara_0(T x, int st, int dr)   //folosesc functia pentru a verifica daca
{                                                   //un element este in vector

    if(st>dr) return -1;

    else
        {
            int m;
            m =(st+dr)/2;
            if (x==v[m])
                return m;
            if (x<v[m])
                return cautare_binara_0(x,st,m-1);
            else
                return cautare_binara_0(x,m+1,dr);
        }

}

 template <class T> int Set<T>::verific(T x)                //daca rezultatul returnat de functia cautare binara e -1
{                                      // elementul nu se gaseste in vector
    return cautare_binara_0( x, 0, n);
}

 template <class T> int Set <T>::cautare(T x)                   //functia returneaza pozitia pe care se afla elementul x sau -1
{                                         //daca elementul nu se gaseste in vector
    return cautare_binara_0( x, 0, n);
}

 template <class T> void Set<T>::inserare(T x)
{
    int i;

    if(n >= n_max)
    {
        //copiez totul intr-un vector auxiliar
        T* m = new T[n_max+4];
        n_max += 4;
        for ( i = 0; i < n; i++)
            m[i] = v[i];
        delete[]v;
        v = m;
    }


    else if(cautare_binara_0( x, 0, n)==-1)             //daca elementul nu se gaseste in vector
    {                                                  //in inserez pe pozitia pe care ar trebui sa o
         i=n-1;
         while(x<v[i] && i>=0)
              {
               v[i+1]=v[i];
                i--;
              }
           v[i+1]=x;
           n++;
    }
}

 template <class T> void Set <T>::stergere(T x)
    {
        int i;

        for(i=cautare_binara_0( x, 0, n);i<n;i++)
            v[i]=v[i+1];
        n--;

    }

template <class T>int Set<T>::nr_elem()
    {
        return n;
    }

template <class T> T Set<T>::suma_elementelor()
{
    int i;
    T sum=0;
    for(i=0;i<n;i++)
            sum=sum+v[i];

    return sum;
}

template <class T> Set<T>  Set <T>::Par()
{
    Set<T> par;
    int i;
    for(i=0;i<n;i++)
        if(v[i]%2==0)
         par.inserare(v[i]);
    return par;
}

template <class T> Set<T> Set<T>::Impar()
{
    Set<T> impar;

    int i;
    for(i=0;i<n;i++)
        if(v[i]%2==1)
         impar.inserare(v[i]);
    return impar;
}

template <class T> T  Set<T>  ::operator [](int i)
{
    return v[i];
}

template <class T>
const Set<T> & Set<T>::operator=(const Set<T> & b)
{
    (*this).n=b.n;
    for(int i=0;i<n;i++)
        (*this).v[i]=b.v[i];

    return *this;
}

template <class T> Set<T> Set<T>::operator + (Set<T> & a)
{
    Set c;
    int i=0, j=0;

    while (i<a.nr_elem() && j<this->nr_elem())
    {
        if(a[i]<(*this)[j]) {
                         c.inserare(a[i]);
                         i++;
                            }
        else if (a[i]>(*this)[j]) {
                              c.inserare((*this)[j]);
                              j++;
                               }
         else {
                c.inserare(a[i]);
                i++;
                j++;
                 }

    }

        while (i<a.nr_elem())
        {
            c.inserare(a[i]);
            i++;
        }

         while (j<this->nr_elem())
         {
             c.inserare((*this)[j]);
             j++;
         }

    return c;
}

template <class T> int Set<T>::operator >(Set<T> & a)
{
  if(this->nr_elem()>a.nr_elem())
        return 1;

    return 0;
}

template <class T> int Set<T>::operator<(Set<T> & a)
{
   if(this->nr_elem()<a.nr_elem())
        return 1;

    return 0;
}

template <class T> Set <T>& Set<T>::operator * (int s)
{
    int i;

    for(i=0;i<n;i++)
    {
        v[i]=v[i]*s;
    }
    return *this;
}

template <class T> ostream & operator <<(ostream & out, const Set<T> & s)
{
    int i;

    for(i=0;i<s.n;i++)
      out<<s.v[i]<<" ";

    return out;
}

template <class T> istream & operator >>(istream & in, const Set<T> & s)
{
  int i;

  for(i=0;i<s.n;i++)
        in>>s.v[i];

  return in;
}


template <class T> Set<T>::~Set()
    {
        delete [] v;
        //dtor
    }

#endif // SET_H
