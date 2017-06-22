#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Warzywo {
    public:
        string nazwa;
        bool jadalne;
        float waga;     // Powiedzmy, że są to kilogramy.
        int poziom;
        
        Warzywo(string a, bool b, float c, int d) {nazwa=a;    jadalne=b;    waga=c;    poziom=d;}
        Warzywo() {nazwa="Grzyboroid nieegzystujacy";    jadalne=false;    waga=-1.5;    poziom=655365336;}
        
        
        bool Atakuj(Warzywo& cel) {
            int a = poziom - cel.poziom;
            
            if (a>0) {
                poziom += cel.poziom;
                
                int poziom_zewn = poziom != 0 ? cel.poziom - poziom/2 : cel.poziom - poziom;
                cel.poziom = poziom_zewn;
                return true;
            }
            
            else {
                poziom = cel.poziom != 0 ? poziom - cel.poziom/2 : poziom - cel.poziom;
                return false;
            }
        }
};

int main()
{
    bool wynik;
    Warzywo karakan;                                   // Karakan jest typowo zaiebatsu.
    Warzywo szczur("Szczur z Waldka kibla", true, 0.28, 28);     // Szczur ma być słaby, by w kiblu nie grasował.
    Sleep(1000);
    cout << "Dzisiaj walczyc beda dwa Warzywa:\n";
    Sleep(2000);
    cout << szczur.nazwa;
    Sleep(1000);
    cout << " oraz ";
    Sleep(2000);
    cout << karakan.nazwa << "!!!!\n";
    Sleep(1000);
    cout << "Szczur ma poziom " << szczur.poziom;
    Sleep(500);
    cout << ", a nasz karakan " << karakan.poziom;
    for (int i=0; i<12; i++) {
        cout << "!";
        Sleep(200);
    }
    Sleep(1000);
    cout << "\n";
    Sleep(500);
    cout << "GRZYBOID ATAKUJE!!!\n";
    
    wynik = karakan.Atakuj(szczur);
    Sleep(2000);
    
    if (wynik == true) {
        cout << "Grzyboid ROZKURWIL szczura z kibla na strzepy!!!\n";
    }
    else {
        cout << "CUD NAD WISLA! CUD! SZCZUR WYGRAUUU!!!!!\n";
    };
    Sleep(800);
    cout << "Poziom szczura: " << szczur.poziom << "\n";
    Sleep(1200);
    cout << "Poziom karakana: " << karakan.poziom << "\n";
    string nicNieznaczacaZmiennaUzywanaJakoPauzaNaKoncuProgramu_xd;
    cin >> nicNieznaczacaZmiennaUzywanaJakoPauzaNaKoncuProgramu_xd;
};
