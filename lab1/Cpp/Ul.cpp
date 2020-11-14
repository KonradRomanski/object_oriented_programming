#include <iostream>
using namespace std;

class Ul
{
    
    private:
        int liczba_przczol;
        int x;
        int y;
        double wskaznik; //sredni roczny wskaznik ilosci produkowanego miodu
        string nazwa_pasieki;
        int ilosc_uli;

    public:
        Ul(int startowa_liczba_przczol)
        {
            this->liczba_przczol = startowa_liczba_przczol;
            this->x = 0;
            this->y = 0;
            this->wskaznik = 0;
            this->nazwa_pasieki = "Nowa pasieka";
            this->ilosc_uli = 0;
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
        int odczyt_liczby_przczol()
        {
            return this->liczba_przczol;
        }

        bool zmiana_polozenia_ula(int a, int b)
        {
            if (a >= 0 && b >= 0)
            {
                this->x = a;
                this->y = b;
                return true;
            }
            return false;
        }

        int* odczyt_polozenia_ula()
        {
            static int result[2];
            result[0] = this->x;
            result[1] = this->y;
            return result;
        }

        void zmiana_wskaznika(double nowy_wskaznik)
        {
            this->wskaznik = nowy_wskaznik;
        }

        double odczyt_wskaznika()
        {
            return this->wskaznik;
        } 

        bool zmiana_nazwy(string nowa_nazwa)
        {
            if (isupper(nowa_nazwa[0]))
            {
                this->nazwa_pasieki = nowa_nazwa;
                return true;
            }
            return false;
        }

        string odczyt_nazwy()
        {
            return this->nazwa_pasieki;
        }

        bool zmiana_ilosci_uli(int nowa_ilosc)
        {
            if (nowa_ilosc >= 0)
            {
                this->ilosc_uli = nowa_ilosc;
                return true;
            }
            return false;
        }

        int odczyt_ilosci()
        {
            return this->ilosc_uli;
        }

};


int main(){

    Ul ul(100);
    cout << "Liczba przczol: " << ul.odczyt_liczby_przczol() << endl;

    if(ul.zmiana_liczby_przczol(10)) cout << "Nowa liczba przczol: " << ul.odczyt_liczby_przczol() << endl;
    else cout << "zla wartosc\n";
    cout << endl;

    if(ul.zmiana_polozenia_ula(5, 15)) cout << "Nowe polozenie ula: " << ul.odczyt_polozenia_ula()[0] << "," << ul.odczyt_polozenia_ula()[1] << endl;
    else cout << "zla wartosc\n";
    cout << endl;

    cout << "Wskaznik: " << ul.odczyt_wskaznika() << endl;
    ul.zmiana_wskaznika(5.67);
    cout << "Nowy wskaznik: " << ul.odczyt_wskaznika() << endl << endl;

    cout << "Nazwa ula: " << ul.odczyt_nazwy() << endl;
    if(ul.zmiana_nazwy("Ulek")) cout << "Nowa nazwa ula: " << ul.odczyt_nazwy() << endl;
    else cout << "zla wartosc\n";
    cout << endl;

    cout << "Ilosc uli: " << ul.odczyt_ilosci() << endl;
    if(ul.zmiana_ilosci_uli(3)) cout << "Nowa ilosc uli: " << ul.odczyt_ilosci() << endl;
    else cout << "zla wartosc\n";
    cout << endl;
}