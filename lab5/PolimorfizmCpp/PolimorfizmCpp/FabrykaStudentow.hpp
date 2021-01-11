#pragma once
#include <iostream>
#include "FabrykaOsob.hpp"
#include "Student.hpp"
using namespace std;

class FabrykaStudentow : public FabrykaOsob
{
public:
	Student* utworz();
};