#include "Ul.h"

int main()
{
    // Ul* ul = new Ul(35);
    Ul ulek;
    ulek.zmiana_polozenia_ula(5,8);
    int* a = ulek.odczyt_polozenia_ula();
    cout << a[0] << " " << a[1] << endl;
}