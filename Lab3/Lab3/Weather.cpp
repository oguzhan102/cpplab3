#include <cstring>
#include "pch.h"
#include "weather.h"
#include <iostream>
#include <iomanip>

using namespace std;


void Weather::setData(const char* dateDesc, double highs, double lows) {
	strcpy_s(dateDescription, dateDesc);
	high = highs;
	low = lows;
}

void Weather::display() const {

	cout << dateDescription << std::setfill('_') << std::setw(10) << std::setprecision(1)<< fixed << high << std::setw(6) << low << endl;
}