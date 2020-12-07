#include <iostream>
#include <string>

using namespace std;

class Samochod
{
    private:
        float pojemnosc_baku;
        float poziom_paliwa;
        unsigned int liczba_kilometrow;
        string model;

    public:
        Samochod();
            Samochod(string mod, float pojemnosc);

            void Pokaz_opis();
            void Set_pojemnosc_baku(float new_pojemnosc_baku);
            float Get_pojemnosc_baku();
            void Set_poziom_paliwa(float new_poziom);
            float Get_poziom_paliwa() const;
            void Set_liczba_kilometrow(unsigned int new_liczba_kilometrow);
            unsigned int Get_liczba_kilometrow();
            void Set_model(string new_model);
            string Get_model();
            operator bool() const;
            bool operator !() const;
        //  Friend sprawia, ze mozna dostac sie do zmiennej prywatnej uzytej jako argument (ponizej)
            friend ostream& operator << (ostream& os, const Samochod& samochod);
        // const uzyte w celu zablokowania zmian zmiennych
            bool operator < (const Samochod& samochod) const;
        //Prefixowy
            Samochod& operator++();
        //Postfixowy
            Samochod operator++(int);
            void operator,(Samochod& a);
            Samochod operator|=(int a);
};