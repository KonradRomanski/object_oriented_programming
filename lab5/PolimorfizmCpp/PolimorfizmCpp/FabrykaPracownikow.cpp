#include "FabrykaPracownikow.hpp"

Pracownik* FabrykaPracownikow::utworz()
{
	Pracownik* pr = new Pracownik();
	return pr;
}