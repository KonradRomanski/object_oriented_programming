#include <memory>
#include "Wezel.hpp"
int main()
{
	for (int i = 0; i < 10; i++){
		shared_ptr<Wezel> w1 = make_shared<Wezel>();
		shared_ptr<Wezel> w2 = make_shared<Wezel>();

		w1->next = w2;
		w2->next = w1;
	}
	return 0;
}
//Każdy obiekt w każdej iteracji został zniszczony
//Po zmianie wszystkie iteracje przebiegaja podobnie jak poprzednio
//Po dodaniu cyklicznych referencji program nie zwalnia pamioeci - nie wypusje sie mzadna informacja\
//Po dodaniu weak_ptr usuwaja sie wszystkie powstale zaleglosci pamieci (tu 20)