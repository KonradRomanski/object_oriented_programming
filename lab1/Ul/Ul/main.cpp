#include <iostream>
using namespace std;

class Ul
{

private:
    int liczba_pszczol;
    double N;
    double W;
    double wskaznik; //sredni roczny wskaznik ilosci produkowanego miodu
    string nazwa_pasieki;
    int ilosc_uli;

public:
    Ul(int startowa_liczba_pszczol)
    {
        this->liczba_pszczol = startowa_liczba_pszczol;
        this->N = 0;
        this->W = 0;
        this->wskaznik = 0;
        this->nazwa_pasieki = "Nowa pasieka";
        this->ilosc_uli = 0;
    }

    bool zmiana_liczby_pszczol(int liczba)
    {
        if (liczba >= -100 && liczba <= 100 && this->liczba_pszczol + liczba >= 0)
        {
            this->liczba_pszczol += liczba;
            return true;
        }
        return false;
    }
    int odczyt_liczby_pszczol()
    {
        return this->liczba_pszczol;
    }

    bool zmiana_polozenia_ula(double a, double b)
    {
        if (a >= -90 && a <= 90 && b >= -180 && b <= 180)
        {
            this->N = a;
            this->W = b;
            return true;
        }
        return false;
    }

    int* odczyt_polozenia_ula()
    {
        static int result[2];
        result[0] = this->N;
        result[1] = this->W;
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


int main() {

    Ul ul(100);
    cout << "Liczba pszczol: " << ul.odczyt_liczby_pszczol() << endl;

    if (ul.zmiana_liczby_pszczol(10)) cout << "Nowa liczba pszczol: " << ul.odczyt_liczby_pszczol() << endl;
    else cout << "zla wartosc\n";
    cout << endl;

    if (ul.zmiana_polozenia_ula(5, 15)) cout << "Nowe polozenie ula: " << ul.odczyt_polozenia_ula()[0] << "," << ul.odczyt_polozenia_ula()[1] << endl;
    else cout << "zla wartosc\n";
    cout << endl;

    cout << "Wskaznik: " << ul.odczyt_wskaznika() << endl;
    ul.zmiana_wskaznika(5.67);
    cout << "Nowy wskaznik: " << ul.odczyt_wskaznika() << endl << endl;

    cout << "Nazwa ula: " << ul.odczyt_nazwy() << endl;
    if (ul.zmiana_nazwy("Ulek")) cout << "Nowa nazwa ula: " << ul.odczyt_nazwy() << endl;
    else cout << "zla wartosc\n";
    cout << endl;

    cout << "Ilosc uli: " << ul.odczyt_ilosci() << endl;
    if (ul.zmiana_ilosci_uli(3)) cout << "Nowa ilosc uli: " << ul.odczyt_ilosci() << endl;
    else cout << "zla wartosc\n";
    cout << endl;
}