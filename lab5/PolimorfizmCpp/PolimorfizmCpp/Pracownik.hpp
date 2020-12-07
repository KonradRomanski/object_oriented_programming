#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Osoba.hpp"

using namespace std;

class Pracownik : public Osoba
{
    vector<string> przedmioty;

    public:
        bool Add_przedmiot(string new_przedmiot);
        bool Delete_przedmiot(string);
        bool Check_przedmiot(string);
        void przedstaw();
};