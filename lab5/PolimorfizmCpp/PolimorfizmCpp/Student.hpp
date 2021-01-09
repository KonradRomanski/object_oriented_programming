#pragma once
#include <iostream>
#include <map>
#include "Osoba.hpp"


class Student : public Osoba
{
     map<string, int>* oceny = nullptr;

     public:
         Student();
         Student(map<string, int> oceny);
         ~Student();
         Student(const Student&);
         Student(Student&&);
         bool Add_ocena(string , int);
         int Get_ocena(string);
         void Get_lista_przedmiotow();
         void przedstaw();

};