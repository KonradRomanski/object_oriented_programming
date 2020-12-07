#include "Pracownik.hpp"

bool Pracownik::Add_przedmiot(string new_przedmiot)
{
	if (find(przedmioty.begin(), przedmioty.end(), new_przedmiot) == przedmioty.end())

	{
		przedmioty.push_back(new_przedmiot);
		return true;
	}
	else
		return false;
}

bool Pracownik::Delete_przedmiot(string to_delete)
{
	if (find(przedmioty.begin(), przedmioty.end(), to_delete) != przedmioty.end())

	{
		przedmioty.erase(find(przedmioty.begin(), przedmioty.end(), to_delete));
		return true;
	}
	else
		return false;
}

bool Pracownik::Check_przedmiot(string check)
{
	if (find(przedmioty.begin(), przedmioty.end(), check) != przedmioty.end())
		return true;
	else
		return false;
}

void Pracownik::przedstaw()
{
	cout << imie_nazwisko << endl;
	cout << "Data urodzenia: " << data_urodzenia.dzien << "-" << data_urodzenia.miesiac << "-" << data_urodzenia.rok << endl;
	cout << "ul. " << miejsce_zamieszkania.ulica << " " << miejsce_zamieszkania.numer << endl;
	cout << miejsce_zamieszkania.kod_pocztowy << " " << miejsce_zamieszkania.miasto << endl;
	cout << "Przedmioty prowadzacego: " << endl;
	for (int i = 0; i < przedmioty.size(); i++)
	{
		cout << "- " << przedmioty[i] << endl;
	}
}