#pragma once
#include "Phone.h"

void PhonesArrayInput(PHONE*a, int n);
void PhonesArrayOutput(PHONE*a, int n);
void ReadPhonesArrayFromFile(ifstream& input, PHONE*a, int n);
void WritePhonesArrayToFile(ofstream& output, PHONE*a, int n);
void SellAPhone(PHONE*a, int n, char* serial);
void ArrayByPriceAndColor(PHONE*& result, int& m, PHONE* a, int n, unsigned int price, char* color);
void WriteSoldPhonesArrayToFile(ofstream& output, PHONE*a, int n);