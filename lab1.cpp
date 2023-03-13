#include <iostream>
#include <math.h>
using namespace std;

//Zadanie 2
int liczSumuj() {
    int suma;
    for(int i=1;i<101;i++) {
        cout<< i << endl;
        suma+=i;
    }
    cout<< "suma to: " << suma << endl;
}
//Zadanie 6
typedef struct punkt1 {
    int x,y;
};

class Dog {
public:
    int nogi;
    int rasa;
};
//Zadanie 5
class Punkt {
public:
    int x,y;
    //Zadanie 9
    double odleglosc() {
        double odl=sqrt(x*x+y*y);
        return odl;
    }
    //Zadanie 10
    double odl2(Punkt p2) {
        double odl2=sqrt((p2.x-x)*(p2.x-x)+(p2.y-y)*(p2.y-y));
        return odl2;
    }
    //Zadanie 11
    double odl3(Punkt *p2) {
        double odl3=sqrt((p2->x-x)*(p2->x-x)+(p2->y-y)*(p2->y-y));
        return odl3;
    }
    //Zadanie 8
    void wypisz() {
        cout<<"Punkt ("<<x<<","<<y<<")"<<endl;
    }

};



int main()
{
    //Zadanie 1
    cout<<"Zadanie 1"<<endl;
    int j = 13;
    cout<<"Wartosc zmiennej j to: "<<j<<endl;
    printf("Wartosc zmiennej j to: %d\n",j);
    //Zadanie 2
    cout<<"Zadanie 2"<<endl;
    liczSumuj();
    //Zadanie 3
    cout<<"Zadanie 3"<<endl;
    cout<<"Adres zmiennej j to: "<<&j<<endl;
    //Zadanie 4
    cout<<"Zadanie 4"<<endl;
    int* zmienna;
    zmienna = new int;
    *zmienna = 4;
    cout<<"Wartosc zmiennej to: "<<*zmienna<<" a jej adres to: "<<zmienna<<endl;
    *zmienna +=1;
    cout<<"Wartosc zmiennej po dodaniu 1 to: "<<*zmienna<<" a jej adres to: "<<zmienna<<endl;
    delete zmienna;
    //Zadanie 5
    cout<<"Zadanie 5"<<endl;
    Punkt z5;
    z5.x=-11;
    z5.y=13;
    cout<<"X="<<z5.x<<" Y="<<z5.y<<endl;
    z5.wypisz();
    //Zadanie 14
    cout<<"Zadanie 14"<<endl;
    Punkt punkty[5];
    punkty[0].x=0; punkty[0].y=4;
    punkty[1].x=1; punkty[1].y=3;
    punkty[2].x=2; punkty[2].y=2;
    punkty[3].x=3; punkty[3].y=1;
    punkty[4].x=4; punkty[4].y=0;
    for(int i=0;i<5;i++) {
        cout << "Punkt (" << punkty[i].x << "," << punkty[i].y << ")" << endl;
        for(int k=0;k<5;k++) {
            if(punkty[i].x!=punkty[k].x && punkty[i].y!=punkty[k].y) {
                cout << "\t Odleglosc od punktu: ("<< punkty[k].x << "," << punkty[k].y <<") = "<< punkty[k].odl2(punkty[i]) <<endl;
            }
        }
    }
    cout<<endl<<endl<<endl<<"Na wkaznikach:" <<endl;
    for(int i=0;i<5;i++) {
        cout << "Punkt (" << punkty[i].x << "," << punkty[i].y << ")" << endl;
        for(int k=0;k<5;k++) {
            if(punkty[i].x!=punkty[k].x && punkty[i].y!=punkty[k].y) {
                cout << "\t Odleglosc od punktu: ("<< punkty[k].x << "," << punkty[k].y <<") = "<< punkty[k].odl3(&punkty[i]) <<endl;
            }
        }
    }
    //Zadanie 13
    cout<<"Zadanie 13"<<endl;
    int n;
    cout<<"Podaj n: "<<endl;
    cin>>n;
    int* tab_d;
    tab_d = new int[n];
    for(int i=0;i<n;i++) {
        *(tab_d+i)=i;
        cout<< *(tab_d+i) << endl;
    }
    delete [] tab_d;


    int tab[30];
    Dog * d_wsk;
    int* tab_wsk;
    tab_wsk = new int[30];

    for(int k=0;k<30;k++) {
        *(tab_wsk+k) = k+2;
     //   cout << *(tab_wsk+k)<<endl;
    }


    d_wsk = new Dog;
    d_wsk->nogi=3;
    d_wsk->rasa=4;
    punkt1 p2;
    p2.x=-20;
    p2.y=20;
    Dog d1;
    d1.nogi=4;
    d1.rasa=1;
    Punkt p1;
    p1.x=3;
    p1.y=-5;
    Punkt p3;
    p3.x=10;
    p3.y=3;

    cout<<"punkt1: " << endl;
    cout << "x=" << p1.x << " y=" << p1.y << " odl od 0,0: " << p1.odleglosc() << " odl od p3: " << p1.odl2(p3) << endl;



    cout<< "punkt2: " << endl;
    cout << "x=" << p2.x <<" y=" << p2.y << endl;
    cout<< "punkt3: " << endl;
    cout << "x=" << p3.x <<" y=" << p3.y << endl;
   // cout << "nogi: " << d1.nogi << " rasa:" << d1.rasa << endl;
    int k;
    k=25;
    int* wynik1;
    wynik1 = new int;
    *wynik1=18;
    //printf("%d \n",k);
    // cout << k << endl;
   // liczsuma();
   // cout<<&k<<endl;
    //cout<<wynik1<<endl;
   // cout<<*wynik1<<endl;
    for(int i=0;i<30;i++) {
        tab[i]=i;
        cout<< tab[i] << endl;
    }
    delete wynik1;
    delete d_wsk;
    int tab1[10];
    cout<< endl;
    //Zadanie 12
    int suma2=0;
    for(int i=0;i<10;i++) {
        tab1[i]= rand() % 10;
        suma2+=tab1[i];
        cout<<tab1[i]<<endl;
    }
    cout<< "suma2 to: " << suma2 << endl;
    return 0;
}
