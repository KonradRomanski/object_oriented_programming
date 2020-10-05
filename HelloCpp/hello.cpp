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
        cout << "Hello " << fellow << endl;
    }
}

