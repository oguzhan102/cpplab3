#pragma once



class Weather {
private:
	char dateDescription[7];
	double high;
	double low;

public:
	void setData(const char* dateDesc, double highs, double lows);

	void display() const;


};
