#pragma once
#include <iostream>
#include "FabrykaOsob.hpp"
#include "Pracownik.hpp"

using namespace std;

class FabrykaPracownikow : public  FabrykaOsob
{
public:
	Pracownik* utworz() = 0;
};