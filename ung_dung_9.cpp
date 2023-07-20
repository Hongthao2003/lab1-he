#include <iostream>
#include <iomanip> //thu vien de su dung setw 
using namespace std;

int main(){
	int giay1, giay;
	cout<<"Nhap tong so giay :";cin>> giay1; 
	int gio = giay1/3600; giay1%= 3600; 
	int phut = giay1/60; giay1 %=60; 
	giay = giay1; 
	cout << "Thoi gian la: "<< setw(2) << setfill('0') << gio << ":"<< setw(2) << setfill('0') << phut<< ":"<< setw(2) << setfill('0') << giay  << endl;
	//setw la ket qua se hien thi phai qua trai. setfill la lam day cho con thieu 
	return 0;
}
