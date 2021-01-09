#include "Stopper.hpp"

void Stopper::start()
{
	st = system_clock::now();
}

void Stopper::stop()
{
	end = system_clock::now();
	elapsed_seconds = end - st;

}

void Stopper::reset()
{
	st = system_clock::now();
	end = st;
	elapsed_seconds = end - st;
}

void Stopper::show()
{
	cout << "Elapsed time: " << elapsed_seconds.count() << "s" << endl;
}