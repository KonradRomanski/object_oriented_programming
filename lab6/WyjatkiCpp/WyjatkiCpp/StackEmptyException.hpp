#pragma once
#include "StackException.hpp"
using namespace std;

class StackEmptyException : public StackException
{
	string message;
public:
	StackEmptyException() { }
	StackEmptyException(string p)
	{
		message = p;
	}
	virtual const char* what() const noexcept override
	{
		return message.c_str();
	}
};