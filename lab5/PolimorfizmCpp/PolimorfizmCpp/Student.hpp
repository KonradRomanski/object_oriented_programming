#pragma once
#include <iostream>
#include <map>
#include "Osoba.hpp"


class Student : public Osoba
{
     map<string, int> oceny;

     public:
         bool Add_ocena(string , int);
         int Get_ocena(string);
         void Get_lista_przedmiotow();
         void przedstaw();

};