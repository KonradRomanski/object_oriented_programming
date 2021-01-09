#pragma once
#include <iostream>
#include "Osoba.hpp"

using namespace std;

class FabrykaOsob : Osoba
{
	virtual Osoba* utworz() = 0;
	//void utworz();
};