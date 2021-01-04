#pragma once
#include <iostream>

using namespace std;

class Wezel
{
	public:
		weak_ptr<Wezel> next;
		//Wezel();
		~Wezel();
};