#include <iostream>
using namespace std;

class Ul
{
    
    private:
        int* liczba_pszczol;
        double* N;
        double* W;
        double* wskaznik; //sredni roczny wskaznik ilosci produkowanego miodu
        string* nazwa_pasieki;
        int* ilosc_uli;

    public:

        Ul(): liczba_pszczol(nullptr), N(nullptr), W(nullptr), wskaznik(nullptr), nazwa_pasieki(new string ("Nowa pasieka")), ilosc_uli(nullptr){}
        
        ~Ul()
        {
            delete liczba_pszczol;
            delete N;
            delete W;
            delete wskaznik;
            delete nazwa_pasieki;
            delete ilosc_uli;
        }

        Ul(int startowa_liczba_pszczol)
        {
            this->liczba_pszczol = new int (startowa_liczba_pszczol);
            this->nazwa_pasieki = new string ("Nowa pasieka");
            this->N = nullptr;
            this->W = nullptr;
            this->wskaznik = nullptr;
            this->ilosc_uli = nullptr;
        }

        Ul(const Ul& ulek)
        {
            this->liczba_pszczol = new int (*(ulek.liczba_pszczol));
            this->nazwa_pasieki = new string (*(ulek.nazwa_pasieki));
            this->N = new double (*(ulek.N));
            this->W = new double (*(ulek.W));
            this->wskaznik = new double (*(ulek.wskaznik));
            this->ilosc_uli = new int (*(ulek.ilosc_uli));
        }

        Ul(Ul &&ulek) : liczba_pszczol(ulek.liczba_pszczol), N(ulek.N), W(ulek.W), wskaznik(ulek.wskaznik), nazwa_pasieki(ulek.nazwa_pasieki), ilosc_uli(ulek.ilosc_uli)
        {
            ulek.liczba_pszczol = nullptr;
            ulek.N = nullptr;
            ulek.W = nullptr;
            ulek.wskaznik = nullptr;
            ulek.nazwa_pasieki = nullptr;
            ulek.ilosc_uli = nullptr;
        }


        bool zmiana_liczby_pszczol(int liczba)
        {
            if (this->liczba_pszczol == nullptr)
                this->liczba_pszczol = new int(0);

            if(liczba >= -100 && liczba <= 100 && *(this->liczba_pszczol) + liczba >= 0)
            {
                *(this->liczba_pszczol) += liczba;
                return true;
            }
            return false;
        }
        int odczyt_liczby_pszczol()
        {
            // cout << this->liczba_pszczol << endl;
            return *(this->liczba_pszczol);
        }

        bool zmiana_polozenia_ula(double a, double b)
        {

            if (a >= -90 && a <= 90 && b >= -180 && b <= 180)
            {
                this->N = new double(a);
                this->W = new double(b);
                return true;
            }
            return false;

        }

        int* odczyt_polozenia_ula()
        {
            static int result[2];
            // int* temp = result;
            result[0] = *(this->N);
            result[1] = *(this->W);
            
            // cout << "$$" << result[0] << " " << result[1] << endl;
            
            return result;
        }

        void zmiana_wskaznika(double nowy_wskaznik)
        {
            this->wskaznik = new double(nowy_wskaznik);
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
                this->ilosc_uli = new int(nowa_ilosc);
                return true;
            }
            return false;
        }

        int odczyt_ilosci()
        {
            return *(this->ilosc_uli);
        }

        void odczyt()
        {
            cout << "Polozenie:      " << *this->N << " " << *this->W << endl;
            cout << "Nazwa:          " << this->odczyt_nazwy() << endl;
            cout << "Ilosc:          " << this->odczyt_ilosci() << endl;
            cout << "Liczba pszczol: " << this->odczyt_liczby_pszczol() << endl;
            cout << "Wskaznik:       " << this->odczyt_wskaznika() << endl;
        }

};