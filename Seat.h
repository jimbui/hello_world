#pragma once
#include <string>
using namespace std;

class Seat
{
private:
	string seat_row_name;
	int seat_number;
	bool sold;

public:
	Seat(string Row_Name,
		int Seat_Number);

	void Sell();
	void Display() const;
};
