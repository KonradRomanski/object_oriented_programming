#pragma once
#include<exception>
#include<iostream>
#include<string>

using namespace std;

class StackException : public exception
{
public:
	StackException() {}
	virtual const char* what() const noexcept override
	{
		return "Bledna operacja na stosie ! ";
	}

};