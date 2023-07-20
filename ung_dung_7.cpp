#include <iostream>
using namespace std;

int main(){
	int gio, phut, giay;
	cout <<"Nhap so gio :"; cin>> gio;
	cout <<"Nhap so phut :"; cin >> phut;
	cout<<"Nhap so giay :"; cin>> giay;
	int doi=(gio*3600)+(phut*60)+giay;
	cout<<"So giay ban can la :"<< doi;
	return 0;
}
