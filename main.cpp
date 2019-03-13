#include <iostream>
#include "Set.h"
#include <iostream>
using namespace std;

int main()
{
    cout<<"Pentru int tastati 1, pentru float tastati 2, pentru double tastati 3, pentru char tastati 4"<<endl;
    int tastez, ok=1;

    do
    {

        cout<<"Optiunea este: ";
        cin>>tastez;

        switch(tastez)
        {

        case 1:
        {
            Set <int>a;
            int w;
            cout<<"Elementele pe care vreau sa le inserez in vectorul a sunt: ";
            cin>>w;
            do
            {
                a.inserare(w);
                cin>>w;
            }
            while(w!=-1);

            cout<<"Numarul de elemente din vectorul a este: ";
            cout<<a.nr_elem()<<endl;
            cout<<"Vectorul a este: ";
            cout<<a;
            cout<<endl;

            Set <int>b;
            cout<<"Elementele pe care vreau sa le inserez in vectorul b sunt: ";
            cin>>w;
            do
            {
                b.inserare(w);
                cin>>w;
            }
            while(w!=-1);

            cout<<"Elementele din vectorul b sunt: ";
            cout<<b<<endl;
            cout<<"Folosind operatorul + obtinem reuniunea: ";
            Set<int>r;
            r=a+b;
            cout<<r;
            cout<<endl;

            cout<<"Elementele impare din vectorul a sunt: ";
            cout<<a.Impar()<<endl;
            cout<<"Elementele pare din vectorul a sunt: ";
            cout<<a.Par()<<endl;
            cout<<"Elementul pe care vreau sa il sterg din vectorul a este: ";
            int x;
            cin>>x;
            a.stergere(x);
            cout<<"Vectorul a fara elementul "<<x<<" este: ";
            cout<<a;
            cout<<endl;

            cout<<"Suma elementelor din vectorul b este: ";
            int z;
            z=b.suma_elementelor();
            cout<<z<<endl;
            cout<<"Elementul pentru care doresc sa aflu pozitia in vectorul b este : ";
            int y;
            cin>>y;
            cout<<"Pozitia elementului "<<y<<" in vectorul b este ";
            cout<<b.cautare(y)<<endl;
            int c;
            cout<<"Verific daca un element se gaseste in vectorul b, elementul pe care vreau sa il verific este: ";
            cin>>c;
            if( b.verific(c)==-1)
                cout<<"Elementul nu e in vector"<<endl;
            else cout<<"Elementul este in vector"<<endl;

            if(a>b)
                cout<<"Vectorul a are mai multe elemente"<<endl;
            else if(a<b)
                cout<<"Vectorul b are mai multe elemente"<<endl;

            int scalar;
            cout<<"Inmultesc vectorul a cu scalarul: ";
            cin>>scalar;
            a=a*scalar;
            cout<<a<<endl;
            break;
        }

        case 2:
        {
            Set <float>a;
            float w;
            cout<<"Elementele pe care vreau sa le inserez in vectorul a sunt: ";
            cin>>w;
            do
            {
                a.inserare(w);
                cin>>w;
            }
            while(w!=-1);

            cout<<"Numarul de elemente din vectorul a este: ";
            cout<<a.nr_elem()<<endl;
            cout<<"Elementele din vectorul a sunt: ";
            cout<<a;
            cout<<endl;

            Set <float>b;
            cout<<"Elementele pe care vreau sa le inserez in vectorul b sunt: ";
            cin>>w;
            do
            {
                b.inserare(w);
                cin>>w;
            }
            while(w!=-1);

            cout<<"Elementele din vectorul b sunt: ";
            cout<<b<<endl;

            cout<<"Folosind operatorul + obtinem reuniunea: ";
            Set<float>r;
            r=a+b;
            cout<<r;
            cout<<endl;

            cout<<"Elementul pe care vreau sa il sterg din vectorul a este: ";
            float x;
            cin>>x;
            a.stergere(x);
            cout<<"Vectorul a fara elementul "<<x<<" este: ";
            cout<<a;
            cout<<endl;

            cout<<"Suma elementelor din vectorul b este: ";
            float z;
            z=b.suma_elementelor();
            cout<<z<<endl;
            cout<<"Elementul pentru care doresc sa aflu pozitia in vectorul b este: ";
            float y;
            cin>>y;
            cout<<"Pozitia elementului este: ";
            cout<<b.cautare(y)<<endl;
            float c;
            cout<<"Verific daca un element se gaseste in vectorul b, elementul pe care vreau sa il verific este: ";
            cin>>c;
            if(b.verific(c)==-1)
                cout<<"Elementul nu e in vector"<<endl;
            else cout<<"Elementul este in vector"<<endl;

            if(a>b)
                cout<<"Vectorul a are mai multe elemente"<<endl;
            else if(a<b)
                cout<<"Vectorul b are mai multe elemente"<<endl;

            int scalar;
            cout<<"Inmultesc vectorul cu scalarul: ";
            cin>>scalar;
            a=a*scalar;
            cout<<a<<endl;
            break;
        }

        case 3:
        {
            Set <double>a;
            double w;
            cout<<"Elementele pe care vreau sa le inserez in vectorul a sunt: ";
            cin>>w;
            do
            {
                a.inserare(w);
                cin>>w;
            }
            while(w!=-1);

            cout<<"Numarul de elemente din vector este: ";
            cout<<a.nr_elem()<<endl;
            cout<<"Vectorul este: ";
            cout<<a;
            cout<<endl;

            Set <double>b;
            cout<<"Elementele pe care vreau sa le inserez in vectorul b sunt: ";
            cin>>w;
            do
            {
                b.inserare(w);
                cin>>w;
            }
            while(w!=-1);

            cout<<"Elementele din vectorul b sunt: ";
            cout<<b<<endl;

            cout<<"Folosind operatorul + obtinem reuniunea: ";
            Set<double>r;
            r=a+b;
            cout<<r;
            cout<<endl;

            cout<<"Elementul pe care vreau sa il sterg din vectorul a este: ";
            double x;
            cin>>x;
            a.stergere(x);
            cout<<"Vectorul a fara elementul "<<x<<" este: ";
            cout<<a;
            cout<<endl;

            cout<<"Suma elementelor din vectorul b este: ";
            double z;
            z=b.suma_elementelor();
            cout<<z<<endl;
            cout<<"Elementul a carui pozitie vreau sa o aflu in vectorul b este: ";
            double y;
            cin>>y;
            cout<<"Pozitia elementului este: ";
            cout<<b.cautare(y)<<endl;
            double c;
            cout<<"Verific daca un element se gaseste in vectorul b, elementul pe care vreau sa il verific este: ";
            cin>>c;
            if(b.verific(c)==-1)
                cout<<"Elementul nu e in vector"<<endl;
            else cout<<"Elementul e in vector"<<endl;

            if(a>b)
                cout<<"Vectorul a are mai multe elemente"<<endl;
            else if(a<b)
                cout<<"Vectorul b are mai multe elemente"<<endl;

            int scalar;
            cout<<"Inmultesc vectorul cu scalarul: ";
            cin>>scalar;
            a=a*scalar;
            cout<<a;
            cout<<endl;
            break;
        }

        case 4:
        {
            Set <char>a;

            char w;
            cout<<"Elementele pe care vreau sa le inserez in vectorul a sunt: ";
            cin>>w;
            do
            {
                a.inserare(w);
                cin>>w;
            }
            while(w!='/');

            cout<<"Numarul de elemente din vector este: ";
            cout<<a.nr_elem()<<endl;
            cout<<"Vectorul este: ";
            cout<<a;
            cout<<endl;

            Set <char>b;
            cout<<"Elementele pe care vreau sa le inserez in vectorul b sunt: ";
            cin>>w;
            do
            {
                b.inserare(w);
                cin>>w;
            }
            while(w!='/');

            cout<<"Elementele din vectorul b sunt: ";
            cout<<b<<endl;

            cout<<"Folosind operatorul + obtinem reuniunea: ";
            Set<char>r;
            r=a+b;
            cout<<r;
            cout<<endl;

            cout<<"Elementul pe care vreau sa il sterg din vectorul a este: ";
            char x;
            cin>>x;
            a.stergere(x);
            cout<<"Vectorul a fara elementul "<<x<<" este: ";
            cout<<a;
            cout<<endl;

            cout<<"Suma elementelor din vectorul b este: ";
            int z;
            z=b.suma_elementelor();
            cout<<z<<endl;
            cout<<"Elementul a carui pozitie in vectorul b vreau sa o aflu este: ";
            char y;
            cin>>y;
            cout<<"Pozitia elementului este: ";
            cout<<b.cautare(y)<<endl;
            char c;
            cout<<"Verific daca un element se gaseste in vectorul b, elementul pe care vreau sa il verific este: ";
            cin>>c;
            if(b.verific(c)==-1)
                cout<<"Elementul nu e in vector"<<endl;
            else cout<<"Elementul este in vector"<<endl;

            if(a>b)
                cout<<"Vectorul a are mai multe elemente"<<endl;
            else if(a<b)
                cout<<"Vectorul b are mai multe elemente"<<endl;
            break;
        }

        }

        cout<<"Pentru a afisa pentru alt tip de variabila - 1, 0 altfel";
        cin>>ok;
    }
    while(ok==1);

    return 0;
}
