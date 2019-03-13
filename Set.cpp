/*#include "Set.h"
#include <cstdlib>
#include <iostream>

using namespace std;

template <class T>  Set<T>::Set()          //const fara parametrii
{
    n=0;
    v=new T[n];
    //ctor
}

template <class T> Set<T> Set<T>::Set( int m)    //const cu parametrii
{
    n=m;
    v=new T[n];
}

template <class T> Set<T> Set<T>::Set( Set<T> & a)      //Set de tip t pt param
{
    int i, n;
    n=a.nr_elem();

    v=new T[n];

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

    if(v==NULL)
    {
        v=new T[1];
        v[n]=x;
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

template <class T>int Set<T>::suma_elementelor()
{
    int i, sum=0;
    for(i=0;i<n;i++)
            sum=sum+v[i];

    return sum;
}

template <class T> Set <T>::Par()
{
    Set par;
    int i;
    for(i=0;i<n;i++)
        if(v[i]%2==0 || v[i]==0)
         par.inserare(v[i]);
    return par;
}

template <class T> Set<T>::Impar()
{
    Set impar;

    int i;
    for(i=0;i<n;i++)
        if(v[i]%2==1)
         impar.inserare(v[i]);
    return impar;
}

template <class T> int & Set<T>::operator [](int i)
{
    return v[i];
}

template <class T> & Set<T>::operator=(Set<T> & b)
{
    (*this).n=b.n;
    for(int i=0;i<n;i++)
        (*this).v[i]=b.v[i];

    return *this;
}

template <class T> Set<T>::operator + (Set<T> & a)
{
    Set c;
    int i=0, j=0, k=0;

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

    if(i<a.nr_elem())
    {
        while (i<=a.nr_elem())
        {
            c.inserare(a[i]);
            i++;
        }
    }

     if(j<this->nr_elem())
     {
         while (j<=this->nr_elem())
         {
             c.inserare((*this)[j]);
             j++;
         }

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

template <class T> & Set<T>::operator * (int s)
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

template <class T>istream & operator >>(istream & in, const Set<T> & s)
{
  int i;

  for(i=0;i<s.n;i++)
        in>>s.v[i];

  return in;
}


template <class T> Set::~Set()
    {
        delete [] v;
        //dtor
    }
*/
