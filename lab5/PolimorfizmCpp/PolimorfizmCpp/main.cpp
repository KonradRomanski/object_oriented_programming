#include <iostream>
#include <string>
#include "Osoba.hpp"
#include "Student.hpp"
#include "Pracownik.hpp"

void foo(Osoba& os)
{
    os.przedstaw();
}

void bar(Osoba *os)
{
    os->przedstaw();
}

int main()
{
    //---OSOBA-------------------------------
    cout << "---OSOBA-------------------------------" << endl;
    Osoba osoba;
    osoba.Set_imie_nazwisko("Jan Kowalski");
    osoba.Set_data_urodzenia(21, 4, 2222);
    osoba.Set_miejsce_zamieszkania("Poznan", 60251, "Hetmanska", 111);
    osoba.przedstaw();
    
    //---STUDENT----------------------------
    cout << "\n---STUDENT----------------------------" << endl;
     Student student;
     if (!student.Add_ocena("PO", 5))
         cout << "Bledna ocena!" << endl;
    
     int ocena = student.Get_ocena("P");

     if (ocena)
         cout << "Ocena z przedmiotu: " << ocena << endl;
     else
         cout << "Przedmiotu nie znaleziono!" << endl;
    
     student.Set_data_urodzenia(23, 9, 3333);
     student.Set_imie_nazwisko("Ktos Ktosowy");
     student.Set_miejsce_zamieszkania("Gdansk", 33333, "Mila", 3);
     student.przedstaw();

     //---PRACOWNIK----------------------
     cout << "\n---PRACOWNIK----------------------" << endl;
     Pracownik pracownik;
     if (!pracownik.Add_przedmiot("Systemu operacyjne"))
         cout << "Przedmiot juz istnieje!!" << endl;

     if (!pracownik.Delete_przedmiot("Programowanie obiektowe"))
         cout << "Przedmiotu nie znaleziono" << endl;

     string nazwa = "Programowanie obiektowe";
     if (pracownik.Check_przedmiot(nazwa))
         cout << "Pracownik prowadzi: " << nazwa << endl;
     else
         cout << "Pracownik nie prowadzi tego przedmiotu" << endl;

     pracownik.Set_data_urodzenia(2, 3, 9333);
     pracownik.Set_imie_nazwisko("Pan pracownik");
     pracownik.Set_miejsce_zamieszkania("Warszawa", 99222, "Wislana", 5);
     pracownik.przedstaw();
     
     //---FUNKCJE-----------------------
     cout << "\n---FUNKCJE-----------------------" << endl;
     cout << "+++OSOBA+++++++++++++++++++++++++++" << endl;
     Osoba os;
     os.Set_imie_nazwisko("Piotr Nowy");
     os.Set_data_urodzenia(2, 1, 12345);
     os.Set_miejsce_zamieszkania("Tokio", 12325, "Chinska", 13214);
     cout << "==FUNKCJA foo=============" << endl;
     foo(os);
     cout << "==FUNKCJA bar=============" << endl;
     bar(&os);

     cout << "\n---FUNKCJE-----------------------" << endl;
     cout << "+++PRACOWNIK+++++++++++++++++++++++" << endl;
     Pracownik pr;
     pr.Set_imie_nazwisko("Huan An");
     pr.Set_data_urodzenia(1, 3, 92345);
     pr.Set_miejsce_zamieszkania("Nowy Jork", 42325, "Chinska", 13284);
     if (!pr.Add_przedmiot("Analiza matematyczna"))
         cout << "Przedmiot juz istnieje!!" << endl;

     cout << "==FUNKCJA foo=============" << endl;
     foo(pr);
     cout << "==FUNKCJA bar=============" << endl;
     bar(&pr);

     cout << "\n---FUNKCJE-----------------------" << endl;
     cout << "+++STUDENT+++++++++++++++++++++++++" << endl;
     Student st;
     st.Set_imie_nazwisko("Krzysztof A");
     st.Set_data_urodzenia(6, 4, 92365);
     st.Set_miejsce_zamieszkania("Wierzchowo", 12325, "Dobra", 13214);
     if (!st.Add_ocena("PO", 5))
         cout << "Bledna ocena!" << endl;
     cout << "==FUNKCJA foo=============" << endl;
     foo(st);
     cout << "==FUNKCJA bar=============" << endl;
     bar(&st);

     //Funckja foo i bar wywoluje metode z klasy osoba
     //Gdy dodamy slowko virtual, poszukiwane sa redefinicje metody w klasach pochodnych


}