#pragma once
#include <chrono>
#include <iostream>
using namespace std;
using namespace chrono;

class Stopper
{
private:
	system_clock::time_point st;
	system_clock::time_point end;
	duration<double> elapsed_seconds;
public:
	void start();
	void stop();
	void reset();
	void show();
};