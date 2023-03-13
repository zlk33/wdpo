#include <iostream>
#include <math.h>

using namespace std;
//Zadanie 1,2
class Telewizor {
private:
    int jasnosc;
    int kontrast;
    int glosnosc;
public:
    int getJasnosc() {
        return jasnosc;
    }
    int getKontrast() {
        return kontrast;
    }
    int getGlosnosc() {
        return glosnosc;
    }
    void setJasnosc(int x) {
        if(x>=0 && x<=100) {
           jasnosc=x;
        } else {
        cout<<"Wartosc dla jasnosci jest poza przedzialem <0,100>!"<<endl;
        }

    }
    void setKontrast(int x) {
        if(x>=0 && x<=100) {
           kontrast=x;
        } else {
        cout<<"Wartosc dla kontrastu jest poza przedzialem <0,100>!"<<endl;
        }

    }
    void setGlosnosc(int x) {
        if(x>=0 && x<=30) {
           glosnosc=x;
        } else {
        cout<<"Wartosc dla glosnosci jest poza przedzialem <0,30>!"<<endl;
        }

    }
    void wypisz() {
        cout<<"Telewizor o jasnosci "<<jasnosc<<", kontrascie "<<kontrast<<" i glosnosci "<<glosnosc<<endl;
    }
};
//Zadanie 3
class punktzparzystejcwiartki {
private:
    int x;
    int y;
public:
    void setXY(int xv,int yv) {
        if((xv<0 && yv>0) || (xv>0&&yv<0)) {
            x = xv;
            y = yv;
        } else {
            cout<<"Podany punkt nie lezy ani w 2 ani w 4 cwiartce"<<endl;
        }
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    void wypisz() {
        if(x>0 && y<0) {
            cout<<"Punkt o wspolrzednych ("<<x<<","<<y<<") z 4 cwiartki"<<endl;
        } else if(x<0 && y>0) {
            cout<<"Punkt o wspolrzednych ("<<x<<","<<y<<") z 2 cwiartki"<<endl;
        }
    }
};
class punkt {
public:
    int x;
    int y;
    void wypisz() {
    cout<<"("<<x<<","<<y<<")"<<endl;
    }
    double odl(punkt p1) {
        double odl=sqrt((p1.x-x)*(p1.x-x)+(p1.y-y)*(p1.y-y));
        return odl;
    }
};
//Zadanie 4
class Tri {
private:
    punkt A;
    punkt B;
    punkt C;
public:
    //Zadanie 5
    void setABC(int AX,int AY,int BX,int BY,int CX,int CY) {
        A.x=AX;
        A.y=AY;
        B.x=BX;
        B.y=BY;
        C.x=CX;
        C.y=CY;
        if(A.odl(getC())>0 && A.odl(getB())>0 && B.odl(getC())>0) {
            if(!(A.odl(getC()) + A.odl(getB()) > B.odl(getC()) && A.odl(getC()) + B.odl(getC()) > A.odl(getB()) && A.odl(getB()) + B.odl(getC()) > A.odl(getC()))) {
                cout<<"Podane boki nie spelniaja warunku nierownosci trojkata!"<<endl;
            }
        } else {
            cout<<"Boki musza byc dluzsze od 0!"<<endl;
        }
    }
    punkt getA() {
        return A;
    }
    punkt getB() {
        return B;
    }
    punkt getC() {
        return C;
    }
    double permimeter() {
        double AB=A.odl(getB());
        double AC=A.odl(getC());
        double BC=B.odl(getC());
        return AB+AC+BC;
    }
};

int main()
{
    //Zadanie 1
    cout<<"Zadanie 1"<<endl;
    Telewizor tv;
    tv.setGlosnosc(20);
    tv.setJasnosc(35);
    tv.setKontrast(100);
    tv.wypisz();
    //Zadanie 4
    cout<<"Zadanie 4"<<endl;
    punktzparzystejcwiartki punkt1;
    punkt1.setXY(-2,5);
    punkt1.wypisz();

    punktzparzystejcwiartki punkt2;
    punkt2.setXY(2,-1);
    punkt2.wypisz();
    //Zadanie 5
    cout<<"Zadanie 5"<<endl;
    Tri trujkont;
    trujkont.setABC(2,7,2,3,7,6);
    cout<<"Trojkat"<<endl<<"A=";trujkont.getA().wypisz();cout<<"B=";trujkont.getB().wypisz();cout<<"C=";trujkont.getC().wypisz();
    cout<<"OBW trojkata to: "<<trujkont.permimeter()<<endl;
}
