#include <iostream>
#include <string>
#include "Samochod.hpp"

using namespace std;

Samochod::Samochod()
{
    pojemnosc_baku = 60.0;
    poziom_paliwa = 43.0;
    liczba_kilometrow = 71000;
    model = "Mazda";
}
Samochod::Samochod(string mod, float pojemnosc)
{
    pojemnosc_baku = pojemnosc;
    poziom_paliwa = 43.0;
    liczba_kilometrow = 10000;
    model = mod;
}


void Samochod::Pokaz_opis()
{
    cout << "Pojemnosc baku:    " << pojemnosc_baku << endl;
    cout << "Poziom paliwa:     " << poziom_paliwa << endl;
    cout << "Liczba kilometrow: " << liczba_kilometrow << endl;
    cout << "model:             " << model << endl;
}

void Samochod::Set_pojemnosc_baku(float new_pojemnosc_baku)
{
    pojemnosc_baku = new_pojemnosc_baku;
}

float Samochod::Get_pojemnosc_baku()
{
    return pojemnosc_baku;
}

void Samochod::Set_poziom_paliwa(float new_poziom)
{
    poziom_paliwa = new_poziom;
}
float Samochod::Get_poziom_paliwa() const
{
    return poziom_paliwa;
}

void Samochod::Set_liczba_kilometrow(unsigned int new_liczba_kilometrow)
{
    liczba_kilometrow = new_liczba_kilometrow;
}

unsigned int Samochod::Get_liczba_kilometrow()
{
    return liczba_kilometrow;
}

void Samochod::Set_model(string new_model)
{
    model = new_model;
}

string Samochod::Get_model()
{
    return model;
}

Samochod::operator bool() const
{
    if (this->pojemnosc_baku > 0 && this->model.length())
        return true;
    return false;
}

bool Samochod::operator !() const
{
    if (*this)
        return false;
    return true;
}
//  Friend sprawia, ze mozna dostac sie do zmiennej prywatnej uzytej jako argument (ponizej)
ostream& operator << (ostream& os, const Samochod& samochod)
{
    os << samochod.model << " " << samochod.poziom_paliwa;
    return os;
}

// const uzyte w celu zablokowania zmian zmiennych
bool Samochod::operator < (const Samochod& samochod) const
{
    return this->model < samochod.model;
}

//Prefixowy
Samochod& Samochod::operator++()
{
    this->Set_poziom_paliwa(this->Get_poziom_paliwa() + 2);
    return *this;
}

//Postfixowy
Samochod Samochod::operator++(int)
{
    Samochod copy = *this;
    this->Set_poziom_paliwa(this->Get_poziom_paliwa() + 2);
    return copy;
}

void Samochod::operator,(Samochod& a)
{
    float tmp = this->Get_poziom_paliwa();
    this->Set_poziom_paliwa(a.Get_poziom_paliwa());
    a.Set_poziom_paliwa(tmp);
}

Samochod Samochod::operator|=(int a)
{
    this->Set_poziom_paliwa(a);
    return *this;
}
