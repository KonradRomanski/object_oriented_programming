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
        Samochod()
        {
            pojemnosc_baku = 60.0;
            poziom_paliwa = 43.0;
            liczba_kilometrow = 71000;
            model = "Mazda"; 
        }
        Samochod(string mod, float pojemnosc)
        {
            pojemnosc_baku = pojemnosc;
            poziom_paliwa = 43.0;
            liczba_kilometrow = 10000;
            model = mod;
        }

        void Pokaz_opis()
        {
            cout << "Pojemnosc baku:    " << pojemnosc_baku << endl;
            cout << "Poziom paliwa:     " << poziom_paliwa << endl;
            cout << "Liczba kilometrow: " << liczba_kilometrow << endl;
            cout << "model:             " << model << endl;
        }

        void Set_pojemnosc_baku(float new_pojemnosc_baku)
        {
            pojemnosc_baku = new_pojemnosc_baku;
        }

        float Get_pojemnosc_baku()
        {
            return pojemnosc_baku;
        }

        void Set_poziom_paliwa(float new_poziom)
        {
            poziom_paliwa = new_poziom;
        }
        float Get_poziom_paliwa() const
        {
            return poziom_paliwa;
        }

        void Set_liczba_kilometrow(unsigned int new_liczba_kilometrow)
        {
            liczba_kilometrow = new_liczba_kilometrow;
        }

        unsigned int Get_liczba_kilometrow()
        {
            return liczba_kilometrow;
        }

        void Set_model(string new_model)
        {
            model = new_model;
        }

        string Get_model()
        {
            return model;
        }

        operator bool() const
        {
            if (this->pojemnosc_baku > 0 && this->model.length())
                return true;
            return false;
        }

        bool operator !() const
        {
            if (*this)
                return false;
            return true;
        }
        //  Friend sprawia, ze mozna dostac sie do zmiennej prywatnej uzytej jako argument (ponizej)
        friend ostream &  operator << (ostream &os, const Samochod & samochod)
        {
            os << samochod.model << " " << samochod.poziom_paliwa;
            return os;
        }

        // const uzyte w celu zablokowania zmian zmiennych
        bool operator < (const Samochod &samochod) const
        {
            return this-> model < samochod.model;
        }

        //Prefixowy
        Samochod & operator++()
        {
            this->Set_poziom_paliwa(this->Get_poziom_paliwa() + 2);
            return *this;
        }

        //Postfixowy
        Samochod operator++(int)
        {
            Samochod copy = *this;
            this->Set_poziom_paliwa(this->Get_poziom_paliwa() + 2);
            return copy;
        }

        void operator,(Samochod & a)
        {
            float tmp = this->Get_poziom_paliwa();
            this->Set_poziom_paliwa(a.Get_poziom_paliwa());
            a.Set_poziom_paliwa(tmp);
        }

        Samochod operator|=(int a)
        {
            this->Set_poziom_paliwa(a);
            return *this;
        }
};