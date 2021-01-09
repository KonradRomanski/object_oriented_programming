#include <iostream>
#include "Logger.hpp"
#include "Stopper.hpp"
using namespace std;

class Ul : /*public*/ Logger, public Stopper
{
    
    private:
        int* liczba_pszczol;
        double* N;
        double* W;
        double* wskaznik; //sredni roczny wskaznik ilosci produkowanego miodu
        string* nazwa_pasieki;
        int* ilosc_uli;

    public:

        Ul();
        ~Ul();
        Ul(int);
        Ul(const Ul&);
        Ul(Ul&&);

        bool zmiana_liczby_pszczol(int);
        int odczyt_liczby_pszczol();
        bool zmiana_polozenia_ula(double, double);
        int* odczyt_polozenia_ula();
        void zmiana_wskaznika(double);
        double odczyt_wskaznika();
        bool zmiana_nazwy(string);
        string odczyt_nazwy() const ;
        bool zmiana_ilosci_uli(int);
        int odczyt_ilosci();
        void odczyt();
};