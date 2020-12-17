#include "Samochod.hpp"
#include <algorithm>
#include <vector>
# include <set>

using namespace std;

struct cmp
{
    bool operator() (const Samochod &a, const Samochod &b) const
    {
        return a.Get_poziom_paliwa() < b.Get_poziom_paliwa();
    }
};

int main()
{
    Samochod auto1("Porsche", 123);
    Samochod auto2("Audi", 30);
    Samochod auto3("Tesla", 0);
    auto1.Set_poziom_paliwa(10);
    auto2.Set_poziom_paliwa(20);
    auto3.Set_poziom_paliwa(30);
    // auto1.Pokaz_opis();
    // cout << "------------------" << endl;
    // auto2.Pokaz_opis();

    cout << "#OPERATOR !" << endl;
    cout << "-------------" << endl;

    if (auto1)
        auto1.Pokaz_opis();
    
    if (!auto1)
        cout << "NOPE" << endl;

    cout << "-------------" << endl;

    if (auto2)
        auto2.Pokaz_opis();
    
    if (!auto2)
        cout << "NOPE" << endl;

    cout << "-------------" << endl;

    if (auto3)
        auto3.Pokaz_opis();
    
    if (!auto3)
        cout << "NOPE" << endl;

    cout << endl << "#OPERATOR <<" << endl;
    cout << "-------------" << endl;

    //operator <<
    cout << auto1 << endl;
    
    cout << endl << "#OPERATOR <" << endl;
    cout << "-------------" << endl;

    //operator <
    vector <Samochod> v;
    v.push_back(auto1);
    v.push_back(auto2);
    v.push_back(auto3);
    sort(v.begin(), v.end());

    for (auto it=v.begin(); it!=v.end();++it)
        cout << *it << endl;

    set <Samochod, cmp> s;
    s.insert(auto1);
    s.insert(auto2);
    s.insert(auto3);

    cout << endl << "#STRUCT" << endl;
    cout << "-------------" << endl;

    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << endl;

    auto1++;
    ++auto1;

    cout << endl;
    cout << "$OPERATOR ++" << endl;
    cout << auto1.Get_poziom_paliwa() << endl;



    cout << endl;
    cout << "$OPERATOR ," << endl;
    cout << auto1.Get_poziom_paliwa() << endl;
    cout << auto2.Get_poziom_paliwa() << endl;
    cout << endl;
    auto1,auto2;
    cout << auto1.Get_poziom_paliwa() << endl;
    cout << auto2.Get_poziom_paliwa() << endl;

    auto1|=7;
    cout << endl;
    cout << "$OPERATOR |=" << endl;
    cout << auto1.Get_poziom_paliwa() << endl;
    cout << auto2.Get_poziom_paliwa() << endl;
}