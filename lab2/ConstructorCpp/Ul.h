#include <iostream>
using namespace std;

class Ul
{
    
    private:
        int* liczba_przczol;
        int* x;
        int* y;
        double* wskaznik; //sredni roczny wskaznik ilosci produkowanego miodu
        string* nazwa_pasieki;
        int* ilosc_uli;

    public:

        Ul(): liczba_przczol(nullptr), x(nullptr), y(nullptr), wskaznik(nullptr), nazwa_pasieki(nullptr), ilosc_uli(nullptr){}

        Ul(int startowa_liczba_przczol)
        {
            this->liczba_przczol = new int (startowa_liczba_przczol);
            this->x = new int (0);
            this->y = new int (0);
            this->wskaznik = new double (0);
            this->nazwa_pasieki = new string ("Nowa pasieka");
            this->ilosc_uli = new int(0);
        }

        bool zmiana_liczby_przczol(int liczba)
        {
            if(liczba >= -100 && liczba <= 100 && *(this->liczba_przczol) + liczba >= 0)
            {
                *(this->liczba_przczol) += liczba;
                return true;
            }
            return false;
        }
        int odczyt_liczby_przczol()
        {
            return *(this->liczba_przczol);
        }

        void zmiana_polozenia_ula(int a, int b)
        {
            this->x = new int(a);
            this->y = new int(b);
            // cout << *x << " " << *y << endl;
            // return true;
            // if (a == int(a) && b == int(b))
            // {
            // }
            // return false;
        }

        int** odczyt_polozenia_ula()
        {
            int* result[2];
            // int* temp = result;
            result[0] = this->x;
            result[1] = this->y;
            
            cout << "$$" << result[0] << " " << result[1] << endl;
            
            return result;
        }

        void zmiana_wskaznika(double nowy_wskaznik)
        {
            *(this->wskaznik) = nowy_wskaznik;
        }

        double odczyt_wskaznika()
        {
            return *(this->wskaznik);
        } 

        bool zmiana_nazwy(string nowa_nazwa)
        {
            if (isupper(nowa_nazwa[0]))
            {
                *(this->nazwa_pasieki) = nowa_nazwa;
                return true;
            }
            return false;
        }

        string odczyt_nazwy()
        {
            return *(this->nazwa_pasieki);
        }

        bool zmiana_ilosci_uli(int nowa_ilosc)
        {
            if (nowa_ilosc >= 0)
            {
                *(this->ilosc_uli) = nowa_ilosc;
                return true;
            }
            return false;
        }

        int odczyt_ilosci()
        {
            return *(this->ilosc_uli);
        }

};