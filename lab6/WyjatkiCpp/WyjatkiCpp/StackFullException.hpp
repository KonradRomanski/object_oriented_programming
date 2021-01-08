#pragma once
#include "StackException.hpp"
using namespace std;

class StackFullException : public StackException
{
	int element = 0;
	int maxStackSize = 0;
	string message;
public:
	StackFullException() {}
	StackFullException(string p, int e, int s)
	{
		message = p;
		maxStackSize = s;
		element = e;
	}
	virtual const char* what() const noexcept override
	{
		string result = message + "\nmaxStackSize: " + to_string(maxStackSize) + "Redundant element: " + to_string(element);
		return &result[0];
	}
};