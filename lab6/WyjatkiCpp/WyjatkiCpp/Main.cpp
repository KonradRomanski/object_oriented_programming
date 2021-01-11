#include "Stack.hpp"
#include "StackFullException.hpp"
#include "StackEmptyException.hpp"

using namespace std;

void foo(Stack& s) 
{
	try 
	{
		int a = 0;

		while (true)
		{
			s.push(a++);
		}
	}
	catch (StackException *e)
	{
		cout << e->what() << endl;
	}
}

void bar(Stack& s) 
{
	try 
	{
		int a = 0;
		while (true)
		{
			s.push(a++);
		}
	}
	catch (StackException& e) {
		cout << e.what() << endl;
	}
}

int main()
{
	//Stack stosik(5);
	//foo(stosik);
	
	//Stack stosik2(7);
	//bar(stosik2);

	Stack stos(20);
	bool exit = false;
	char opcja = 'd';
	int dane = 0;
	while (!exit)
	{
		try 
		{
			cout << "wybierz opcje: [d-dodawanie/u-usuwanie/w-wyjscie]:" << endl;
			cin >> opcja;

			switch (opcja)
			{
			case 'd':
			{
				cout << "Podaj dane:" << endl;
				cin >> dane;
				stos.push(dane);
				break;
			}
			case 'u':
			{
				cout << "Usuwanie danych: " << stos.pop() << endl;
				break;
			}
			case 'w':
			{
				exit = 1;
				break;
			}
			default:
			{
				cout << "Bledna opcja, sprobuj jeszcze raz" << endl;
				break;
			}
			}
		}
		catch (StackException *e) 
		{
			cout << e->what() << endl;
		}
		catch (exception *e) 
		{
			cout << e->what() << endl;
		}
		catch (StackFullException *e)
		{
			cout << e->what() << endl;
		}
		catch (StackEmptyException* e)
		{
			cout << e->what() << endl;
		}
	}
}

//noexcept wykonuje sprawdzenie w czasie kompilacji i zwraca true jesli wyrazenie zostalo zadeklarowane aby nie zglaszac zadnych wyjatkow
//uzywane tu w klasach wyjatkow deklaruje ze funckja bedzie zwracac wyjatki dla niektorych typow a dla inncyh nie
// override mowi zeby zredefiniowac (nadpisac) funckje bedaca w klasie glownej, sygnatury moga byuc takie same ale zachowanie moze sie roznic
//w Javie wszytskie metody, ktore mozna przyslonic sa automatycznie wirtualne, w cpp nie
//w przypadku metod niewirtualnych w cpp to typ statyczny okresla ktora metode wywolac,
//w przypadku metod wirtualncyh (virtual w cpp i wszystkie metody javy, ktore moga byc nadpisane) jest to srodowisko wykonywawcze
//w deklaracjach metod nie ma specyfikacji wyjatkow dlatego, ze cpp obsluguje wyjatki podczas wykonywania programu, dopiero jak cos nie zadziala cpp obsluzy wyjatek. W javie wyjatki obslugiwane sa na etapie kompialcji, dlatego jest inaczej
//po przekroczeniu maksymalnej ilosci elementow zostaje wyrzucony wyjatek, StackFullException
//przekazywanie wyjatkow po wartosci powoduje blad i jest neibezpieczne, natomiast obslugiwanie ich przez referencje dziala poprawnie i jest bezpieczne
//przekazywanie przez wartosc powoduje powstanie kopii i zwielokrotnienie vledu wiec jest zle
