#include <iostream>

using namespace std;

class Adres
{
    public:
        string* miasto;
        int* kod_pocztowy;
        string* ulica;
        int* numer;
        Adres()
        {
            miasto = new string("");
            kod_pocztowy = new int(11111);
            ulica = new string("");
            numer = new int(1);
        }
};