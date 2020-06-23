// 1612112.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "PhonesArray.h"

int main()
{
	int n = 0;
	PHONE* a = NULL;
	ofstream output, output2;
	ifstream input;
	char* serial = new char[11];
	char* color = new char[11];
	unsigned int price = 0;
	int m = 0;
	PHONE* b = NULL;

	int choose;
	bool flag = true;
	do {
		cout << endl << "============ MENU ============" << endl;
		cout << "1. Nhap danh sach dien thoai" << endl;
		cout << "2. Xuat danh sach dien thoai" << endl;
		cout << "3. Lay danh sach dien thoai tu file" << endl;
		cout << "4. Luu danh sach dien thoai vao file" << endl;
		cout << "5. Ban 1 dien thoai" << endl;
		cout << "6. Tim dien thoai theo mau va gia" << endl;
		cout << "7. Luu danh sach dien thoai da duoc ban vao file" << endl;
		cout << "Xin moi chon: ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "NHAP DANH SACH DIEN THOAI" << endl;
			cout << "Nhap so luong dien thoai: ";
			cin >> n;
			cin.ignore();
			a = new PHONE[n];
			PhonesArrayInput(a, n);
			break;
		case 2:
			cout << "XUAT DANH SACH DIEN THOAI" << endl;
			PhonesArrayOutput(a, n);
			break;
		case 3:
			cout << "LAY DANH SACH DIEN THOAI TU FILE" << endl;
			input.open("input01.txt");
			input >> n;
			a = new PHONE[n];
			ReadPhonesArrayFromFile(input, a, n);
			input.close();
			cout << "Lay danh sach dien thoai thanh cong" << endl;
			break;
		case 4:
			cout << "LUU DANH SACH DIEN THOAI VAO FILE" << endl;
			output.open("output01.txt");
			WritePhonesArrayToFile(output, a, n);
			output.close();
			cout << "Luu danh sach dien thoai thanh cong" << endl;
			break;
		case 5:
			cout << "BAN 1 DIEN THOAI" << endl;
			cout << "Nhap seri dien thoai can ban: ";
			cin.ignore();
			cin.getline(serial, 10);
			SellAPhone(a, n, serial);
			break;
		case 6:
			cout << "TIM DIEN THOAI THEO MAU VA GIA" << endl;
			cout << "Nhap gia can tim: ";
			cin >> price;
			cout << "Nhap mau can tim: ";
			cin.ignore();
			cin.getline(color, 10);
			ArrayByPriceAndColor(b, m, a, n, price, color);
			cout << "Danh sach dien thoai phu hop: " << endl;
			PhonesArrayOutput(b, m);
			break;
		case 7:
			cout << "LUU DANH SACH DIEN THOAI DA BAN VAO FILE" << endl;
			output2.open("output02.txt");
			WriteSoldPhonesArrayToFile(output2, a, n);
			output.close();
			cout << "Luu danh sach dien thoai da duoc ban vao file thanh cong" << endl;
			break;
		default:
			flag = false;
			break;
		}
	} while (flag);

	delete[] a;
	delete[] b;

	return 0;
}