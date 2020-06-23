#pragma once
#include <iostream>
#include <fstream>
using namespace std;

struct phone {
	char* serial = new char[11];
	char* manufacturer = new char[31];
	unsigned int price;
	char* color = new char[11];
	bool isSold;
};
typedef struct phone PHONE;

istream& operator>>(istream& in, PHONE& p);
ostream& operator<<(ostream& out, PHONE& p);
ifstream& operator>>(ifstream& in, PHONE& p);
ofstream& operator<<(ofstream& out, PHONE& p);