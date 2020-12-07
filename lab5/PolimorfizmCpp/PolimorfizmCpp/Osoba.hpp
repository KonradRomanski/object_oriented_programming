#pragma once
#include <iostream>
#include <string>
#include "Adres.hpp"
#include "Data.hpp"

using namespace std;

class Osoba
{
    protected:
        string imie_nazwisko;
        Data data_urodzenia;
        Adres miejsce_zamieszkania;

    public:
        void Set_imie_nazwisko(string);
        string Get_imie_nazwisko();
        void Set_data_urodzenia(int, int, int);
        Data Get_data_urodzenia();
        void Set_miejsce_zamieszkania(string, int, string, int);
        Adres Get_miejsce_zamieszkania();
        virtual void przedstaw();
};