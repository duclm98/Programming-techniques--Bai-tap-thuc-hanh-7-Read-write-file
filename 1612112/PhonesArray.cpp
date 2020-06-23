#include "PhonesArray.h"

void PhonesArrayInput(PHONE*a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap dien thoai thu " << i + 1 << endl;
		cin >> *(a + i);
	}
}

void PhonesArrayOutput(PHONE*a, int n) {
	if (a == NULL) {
		return;
	}
	for (int i = 0; i < n; i++) {
		cout << "THONG TIN DIEN THOAI THU " << i + 1 << endl;
		cout << *(a + i);
	}
}

void ReadPhonesArrayFromFile(ifstream& input, PHONE*a, int n) {
	for (int i = 0; i < n; i++) {
		input >> *(a + i);
	}
}

void WritePhonesArrayToFile(ofstream& output, PHONE*a, int n) {
	output << n << endl;
	for (int i = 0; i < n; i++) {
		output << *(a + i);
	}
}

void SellAPhone(PHONE*a, int n, char* serial) {
	if (a == NULL) {
		return;
	}
	for (int i = 0; i < n; i++) {
		if (strcmp(serial, (a + i)->serial) == 0) {
			cout << "Thong tin dien thoai can ban: " << endl;
			cout << *(a + i);

			char c = 'n';
			cout << "Ban muon ban dien thoai nay (y/n): ";
			cin >> c;
			if (c == 'Y' || c == 'y') {
				(a + i)->isSold = true;
				cout << "Ban dien thoai thanh cong" << endl;
			}
			return;
		}
	}
	cout << "So seri nay khong ton tai!" << endl;
	return;
}

void ArrayByPriceAndColor(PHONE*& result, int& m, PHONE* a, int n, unsigned int price, char* color) {
	if (a == NULL) {
		return;
	}
	m = 0;
	for (int i = 0; i < n; i++) {
		if ((a + i)->price == price && strcmp(color, (a + i)->color) == 0) {
			m++;
			result = (PHONE*)realloc(result, m * sizeof(PHONE));
			*(result + m - 1 ) = *(a + i);
		}
	}
}

void WriteSoldPhonesArrayToFile(ofstream& output, PHONE*a, int n) {
	if (a == NULL) {
		return;
	}
	int length = 0;
	for (int i = 0; i < n; i++) {
		if ((a + i)->isSold) {
			length++;
		}
	}
	if (length == 0) {
		return;
	}
	output << length << endl;
	for (int i = 0; i < n; i++) {
		if ((a + i)->isSold) {
			output << *(a + i);
		}
	}
}