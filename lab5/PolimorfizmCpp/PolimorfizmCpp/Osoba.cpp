#include "Osoba.hpp"

Osoba::Osoba() : imie_nazwisko(new string("")), data_urodzenia(new Data()), miejsce_zamieszkania(new Adres()) {}

Osoba::Osoba(string imie)
    :
    data_urodzenia(nullptr),
    miejsce_zamieszkania(nullptr)
{
    this->imie_nazwisko = new string(imie);
}

Osoba::~Osoba()
{
    if (this->imie_nazwisko) delete imie_nazwisko;
    if (this->data_urodzenia) delete data_urodzenia;
    if (this->miejsce_zamieszkania) delete miejsce_zamieszkania;
}

Osoba::Osoba(const Osoba& os)
{
    this->imie_nazwisko = new string(*(os.imie_nazwisko));
    this->data_urodzenia = new Data(*(os.data_urodzenia));
    this->miejsce_zamieszkania = new Adres(*(os.miejsce_zamieszkania));
}

Osoba::Osoba(Osoba&& os)
    :
    imie_nazwisko(os.imie_nazwisko),
    data_urodzenia(os.data_urodzenia),
    miejsce_zamieszkania(os.miejsce_zamieszkania)
{
    os.imie_nazwisko = nullptr;
    os.data_urodzenia = nullptr;
    os.miejsce_zamieszkania = nullptr;
}

void Osoba::Set_imie_nazwisko(string new_imie_nazwisko)
{
    this->imie_nazwisko = new string(new_imie_nazwisko);
}

string Osoba::Get_imie_nazwisko()
{
    return *imie_nazwisko;
}

void Osoba::Set_data_urodzenia(int new_dzien, int new_miesiac, int new_rok)
{
    data_urodzenia = new Data();
    if (new_rok >= 0)
        data_urodzenia->rok = new int(new_rok);

    if (new_miesiac >=0 && new_miesiac <= 11)
        data_urodzenia->miesiac = new int(new_miesiac);

    if ( ((new_miesiac == 0 || new_miesiac == 2 || new_miesiac == 4 || new_miesiac == 6 || new_miesiac == 7 || new_miesiac == 9 || new_miesiac == 11) && new_dzien >=0 && new_dzien <= 31) ||
    ((new_miesiac == 3 || new_miesiac == 5 || new_miesiac == 8 || new_miesiac == 10) && new_dzien >=0 && new_dzien <= 30) ||
    (new_miesiac == 1 && new_dzien >=0 && new_dzien <=29 && new_rok%4 == 0) ||
    (new_miesiac == 1 && new_dzien >=0 && new_dzien <=28 && new_rok%4 != 0) )
        data_urodzenia->dzien = new int(new_dzien);
}

Data Osoba::Get_data_urodzenia()
{
    return *data_urodzenia;
}

void Osoba::Set_miejsce_zamieszkania(string new_miasto, int new_kod_pocztowy, string new_ulica, int new_numer)
{
    miejsce_zamieszkania = new Adres();
    miejsce_zamieszkania->miasto = new string(new_miasto);

    if (new_kod_pocztowy >=0 && new_kod_pocztowy <= 100000)
        miejsce_zamieszkania->kod_pocztowy = new int(new_kod_pocztowy);

    miejsce_zamieszkania->ulica = new string(new_ulica);

    if (new_numer >= 0)
        miejsce_zamieszkania->numer = new int(new_numer); 
}

Adres Osoba::Get_miejsce_zamieszkania()
{
    return *miejsce_zamieszkania;
}

void Osoba::przedstaw()
{
    cout  << *imie_nazwisko << endl;
    cout << "Data urodzenia: " << *data_urodzenia->dzien << "-" << *data_urodzenia->miesiac << "-" << *data_urodzenia->rok << endl;
    cout << "ul. " << *miejsce_zamieszkania->ulica << " " << *miejsce_zamieszkania->numer << endl;
    cout << *miejsce_zamieszkania->kod_pocztowy << " " << *miejsce_zamieszkania->miasto << endl;
}
