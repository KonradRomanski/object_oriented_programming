#include "Student.hpp"

 bool Student::Add_ocena(string nowa_nazwa, int nowa_ocena)
{
     if (nowa_ocena >= 1 && nowa_ocena <= 5)
     {
        oceny.emplace(nowa_nazwa, nowa_ocena);
        return true;
     }
    else
        return false;
}

 int Student::Get_ocena(string nazwa_przedmiotu)
{
    if (oceny.find(nazwa_przedmiotu) != oceny.end())
    {
        return oceny[nazwa_przedmiotu];
    }
    else
        return false;
}

 void Student::Get_lista_przedmiotow()
 {   
     cout << "Wszytskie oceny studenta:" << endl;
     
     for (map<string, int>::iterator it = this->oceny.begin(); it != oceny.end(); ++it)
     {
         cout << it->first << " " << it->second << endl;
     }
 }

 void Student::przedstaw()
 {
     cout << imie_nazwisko << endl;
     cout << "Data urodzenia: " << data_urodzenia.dzien << "-" << data_urodzenia.miesiac << "-" << data_urodzenia.rok << endl;
     cout << "ul. " << miejsce_zamieszkania.ulica << " " << miejsce_zamieszkania.numer << endl;
     cout << miejsce_zamieszkania.kod_pocztowy << " " << miejsce_zamieszkania.miasto << endl;

     Get_lista_przedmiotow();

 }