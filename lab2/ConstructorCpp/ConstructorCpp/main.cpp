#include "Ul.hpp"
#include "Logger.hpp"

using namespace std;

void foo(Ul obj)
{
    obj.zmiana_liczby_pszczol(1952);
    // obj.zmiana_nazwy("Pasieka mala");
    // cout << "Pszczoly: " << obj.odczyt_liczby_pszczol() << endl;
}

void bar(const Ul &ul) 
{
    cout << ul.odczyt_nazwy() << endl;
}

void baz(Ul& ul) 
{
    ul.zmiana_ilosci_uli(5);
}

void qux(Ul&& ul)
{
    ul.zmiana_nazwy("Uleczek");
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
    cout << "===Odczyt ulek START===" << endl;
    ulek.odczyt();
    cout << "===Odczyt ulek END===\n" << endl;

    foo(ulek);
    foo(move(ulek));
    // ulek.odczyt_ilosci();
    foo(Ul(23));

    Ul ulek2(14);
    ulek2.zmiana_nazwy("Sloneczna pasieka");
    ulek2.zmiana_polozenia_ula(6, 9);
    ulek2.zmiana_ilosci_uli(23);
    ulek2.zmiana_wskaznika(54.6);
    ulek2.zmiana_liczby_pszczol(12);
    cout << "===Odczyt ulek2 START===" << endl;
    ulek2.odczyt();
    cout << "===Odczyt ulek2 END===\n" << endl;


    bar(ulek2);
    bar(move(ulek2));
    bar(Ul(21));
    //konstruktor kopiujacy sie nie wywolal, gdyz jest przekazywana referencja na obiekt a nie jest on kopiowany

    Ul ulek3(14);
    ulek3.zmiana_nazwy("Sloneczna pasieka");
    ulek3.zmiana_polozenia_ula(6, 9);
    ulek3.zmiana_ilosci_uli(23);
    ulek3.zmiana_wskaznika(54.6);
    ulek3.zmiana_liczby_pszczol(12);
    cout << "===Odczyt ulek3 START===" << endl;
    ulek3.odczyt();
    cout << "===Odczyt ulek3 END===\n" << endl;


    baz(ulek3);
    //baz(move(ulek3));
    //baz(Ul(111));
    //nie mzona uzywajac referencji L-value w funkcji wykonac dwoch powyzszych linijek
    //baz(ulek3) dziala poprawnie, przekazuje referencje na obiekt

    Ul ulek4(4);
    ulek4.zmiana_nazwy("Pasieka");
    ulek4.zmiana_polozenia_ula(2, 7);
    ulek4.zmiana_ilosci_uli(20);
    ulek4.zmiana_wskaznika(2.6);
    ulek4.zmiana_liczby_pszczol(13);
    cout << "===Odczyt ulek4 START===" << endl;
    ulek4.odczyt();
    cout << "===Odczyt ulek4 END===\n" << endl;


    //qux(ulek4);
    qux(move(ulek4));
    qux(Ul(77));
    //poprzez l-value nie mozna przekazac obiektu w sposob r-value (w ktory przyjmuje dane funckja)
    //pozostale 2 wywolania funkcji dzialaja poprawnie gdyz sa zgodne z semantyka przekazywnaia w sposob R-value

    Logger log;
    log.log("Czesc");

    ulek4.start();
    for(int i = 0; i < 10; i++)
    {
        ulek4.zmiana_wskaznika(3.2);
    }
    ulek4.stop();
    ulek4.show();

    //ulek4.log("Sth");
    //nie mozna uzyskac dostepu do metody log, gdyz jest ona dzidzicozna w trybie private
    //tryb private jest domyslnym trybem dzidzcizenia, jesli sie nie zdefiniuje innego
    //w trybie private mozna metod dziedziczomnych uzywac tylko w klasie potomnej wiec poza nia nie dziala
    //by dzialalo w Main nalezyu dodac slowko public
    //po dodaniu Logger wszystko komiluje si epoprawnie
    //wielokrotne dziedziczenie w cpp powoduje ze w ogólnym przypadku nie mamy do czynienia z drzewiastą hierarchią klas, tylko ze skierowanym grafem acyklicznym dziedziczenia,
    //moze powodowac, szczegolnie w razie konfilktow implementacji, niejednoznacznosc semantyczna, problemy z lancuchowym wyolywaniem konstruktorow lub oczywiscie problemy implementacyjne
    //w javie nie ma dziedziczenia wielokrotnego, jedna klasa moze dizedziczyc jedna klase ale mozna je zagniezdzac, powstaje w ten sposob porzadek i nie jest wprowadzany niepotrzebny chaos jak w cpp
    //zastepowac wielokrotne dziedziczenie mozna uzywajac interfejsow

}

