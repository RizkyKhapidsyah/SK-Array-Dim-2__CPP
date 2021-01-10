#include <iostream>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	char nama[2][3][10] = { {"Pak","BU","Mas"}, {"Andi","Budi","Carli"} };

	cout << nama[0][0] << ends << nama[1][0] << endl;
	cout << nama[0][1] << ends << nama[1][2] << endl;
	cout << nama[0][2] << ends << nama[1][1] << endl;

	_getch();
	return 0;
}