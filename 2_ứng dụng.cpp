#include <iostream>
#include <cmath> 
using namespace std;

int main(){
	int x1, y1, x2, y2;
	cout<< " Nhap x1 = : "; cin >> x1;
	cout<< " Nhap y1 = : "; cin >> y1;
	cout<< " Nhap x2 = : "; cin >> x2;
	cout<< " Nhap y2 = : "; cin >> y2;
	
	int HSG = (y2-y1)/(x2-x1);
	cout <<" He so goc cua hai toa do la " <<HSG;
	int KC= sqrt(abs(y2-y1))+(abs(x2-x1));
	cout <<"\n Khoang cach hai diem la :"<<KC; 
	return 0;
} 
