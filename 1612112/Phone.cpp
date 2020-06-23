#include "Phone.h"

istream& operator>>(istream& in, PHONE& p) {
	cout << "Nhap so seri cua dien thoai: ";
	in.getline(p.serial, 10);
	cout << "Nhap nha san xuat cua dien thoai: ";
	in.getline(p.manufacturer, 30);
	cout << "Nhap gia dien thoai: ";
	in >> p.price;
	in.ignore();
	cout << "Nhap mau dien thoai: ";
	in.getline(p.color, 10);
	p.isSold = false;

	return in;
}

ostream& operator<<(ostream& out, PHONE& p) {
	out << "So seri: " << p.serial << endl;
	out << "Nha san xuat: " << p.manufacturer << endl;
	out << "Gia: " << p.price << endl;
	out << "Mau: " << p.color << endl;
	if (p.isSold) {
		out << "Trang thai: Da duoc ban" << endl;
	}
	else {
		out << "Trang thai: Chua duoc ban" << endl;
	}
	return out;
}

ifstream& operator>>(ifstream& in, PHONE& p) {
	in >> p.serial >> p.manufacturer;
	in >> p.price;
	in.ignore();
	in >> p.color;
	in >> p.isSold;
	
	return in;
}

ofstream& operator<<(ofstream& out, PHONE& p) {
	out << p.serial << endl;
	out << p.manufacturer << endl;
	out << p.price << endl;
	out << p.color << endl;
	out << p.isSold << endl;

	return out;
}