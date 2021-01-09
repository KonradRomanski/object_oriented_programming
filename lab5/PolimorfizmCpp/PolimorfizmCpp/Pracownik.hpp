#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Osoba.hpp"

using namespace std;

class Pracownik : public Osoba
{
    vector<string>* przedmioty = nullptr;

    public:
        Pracownik();
        Pracownik(vector<string> imie);
        ~Pracownik();
        Pracownik(const Pracownik&);
        Pracownik(Pracownik&&);
        bool Add_przedmiot(string new_przedmiot);
        bool Delete_przedmiot(string);
        bool Check_przedmiot(string);
        void przedstaw();
};