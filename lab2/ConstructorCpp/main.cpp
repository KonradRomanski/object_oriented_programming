#include "Ul.hpp"

void foo(Ul obj)
{
    obj.zmiana_liczby_pszczol(1952);
    // obj.zmiana_nazwy("Pasieka mala");
    // cout << "Pszczoly: " << obj.odczyt_liczby_pszczol() << endl;
}

int main()
{
    Ul* ul = new Ul(35);
    Ul ulek;
    ulek.zmiana_polozenia_ula(5,8);
    ulek.zmiana_ilosci_uli(25);
    ulek.zmiana_wskaznika(35.6);
    ulek.zmiana_liczby_pszczol(54);

    cout << "IT WORKS" << endl;

    // int* a = ulek.odczyt_polozenia_ula();
    // cout << "Liczba pszczol: " << ulek.odczyt_liczby_pszczol() << endl;

    ulek.odczyt();
    foo(ulek);
    foo(move(ulek));
    // ulek.odczyt_ilosci();
    foo(Ul(23));
}

// NEXT TASK -> 17
