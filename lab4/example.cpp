#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


class Samochod{
public:
Samochod(): pojemnosc_baku(100.0){
  poziom_paliwa = 10.0;
  liczba_kilometrow = 100;
  model = "";

}
Samochod(const float _pojemnosc_baku, string _model):pojemnosc_baku(_pojemnosc_baku), model(_model){
  poziom_paliwa = 10.0;
  liczba_kilometrow = 100;

}
  Samochod& operator ++ () { // prefix ++, bez parametrów, zwraca referencję
    cout<<"prefix ++\n";
    this->zwieksz_kilometry(1);
    return *this;
  }
  Samochod operator ++ (int) { //postfix ++ , parametr, zwraca wartość
    cout<<"postfix ++\n";
    Samochod tmp = *this;
    this->zwieksz_kilometry(1);
    return tmp;
  }

  float odczytaj_pojemnosc_baku() const{
    return pojemnosc_baku;
  }

  unsigned int odczytaj_liczba_kilometrow(){
    return liczba_kilometrow;
  }
  void zwieksz_kilometry(unsigned int q){
    this->liczba_kilometrow += q;
  }


private:
  float pojemnosc_baku;
  float poziom_paliwa;
  unsigned int liczba_kilometrow;
  string model;
};

Samochod operator + (Samochod & s, int q) {
  s.zwieksz_kilometry(q);
  return s;
};


int main(){
  Samochod s1(123, "audi");
  cout<<s1.odczytaj_liczba_kilometrow()<<"\n";
  s1++;
  cout<<s1.odczytaj_liczba_kilometrow()<<"\n";
  ++s1;
  cout<<s1.odczytaj_liczba_kilometrow()<<"\n";
  s1 = s1 + 8;
  cout<<s1.odczytaj_liczba_kilometrow()<<"\n";
}
