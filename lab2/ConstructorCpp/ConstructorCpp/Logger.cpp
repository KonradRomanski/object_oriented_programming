#include "Logger.hpp"

Logger::Logger()
{
	debug = true;
}

Logger::Logger(bool tryb)
{
	debug = tryb;
}

void Logger::log(string komunikat)
{
	auto n = system_clock::now();
	time_t tim = system_clock::to_time_t(n);
	//tim = time(NULL);
	char str[26];
	ctime_s(str, sizeof(str), &tim);
	string st = str;
	st.pop_back();
	if(debug) cout << "==|" << st << "|==" << " >> " << komunikat << endl;
}