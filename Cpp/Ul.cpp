#include <iostream>
using namespace std;

class Ul
{
    public:
        Ul(int startowa_liczba_przczol)
        {
            this->liczba_przczol = startowa_liczba_przczol;
        }
        bool zmiana_liczby_przczol(int liczba)
        {
            if(liczba >= -100 && liczba <= 100 && this->liczba_przczol + liczba >= 0)
            {
                this->liczba_przczol += liczba;
                return true;
            }
            return false;
        }
        int get_liczba_przczol()
        {
            return this->liczba_przczol;
        }

    private:
        int liczba_przczol;
        int x;
        int y;
        int sredni_roczny_wskaznik_ilosci_produkowanego_miodu;
        string nazwa_pasieki;

};


int main(){
    Ul ul1(123);
    cout<<ul1.get_liczba_przczol();
    if(ul1.zmiana_liczby_przczol(10))
    {
        cout<<ul1.get_liczba_przczol()<<endl;
    }
    else
    {
        cout<<"zla wartosc\n";
    }
}