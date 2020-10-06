#include <iostream>
using namespace std;

int main()
{
    string fellow = "world";
    cout << "Hello " << fellow << endl;
    while (fellow != "exit")
    {
        cout << "Introduce yourself: ";
        cout.flush();
        getline(cin, fellow);
        if(fellow != "exit") cout << "Hello " << fellow << endl;
    }
}

//OBSERWACJE
//debugowaniie kodu jest bardzo przydatne, gdyz pozwala w prosty i latwy sposob znalezc blad w kodzie