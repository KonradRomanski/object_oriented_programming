#pragma once
#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

class Logger
{
	bool debug;
public:
	Logger();
	Logger(bool tryb);
	void log(string znaki);
};