#include <iostream>

using namespace std;

class Data
{
    public:
        int* dzien;
        int* miesiac;
        int* rok;
        Data()
        {
            dzien = new int(1);
            miesiac = new int(1);
            rok = new int(1);
        }
};