#include <iostream>
using namespace std;


class MojaKlasa{
public:
MojaKlasa(): zmienna1(nullptr){

}
~MojaKlasa(){
delete zmienna1;
}
void ustawZmienna1(int zmienna1){
if(!this->zmienna1)
this->zmienna1 = new int;
*this->zmienna1 = zmienna1;
}

int odczytajZmienna1(){
return *this->zmienna1;
}


private:
int *zmienna1;
};



int main(){
MojaKlasa m;
m.ustawZmienna1(4);
cout<<m.odczytajZmienna1()<<endl;
m.ustawZmienna1(5);
cout<<m.odczytajZmienna1()<<endl;
}