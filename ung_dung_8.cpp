#include <iostream>
#include<cmath>
using namespace std;

int main(){
	int giay1, giay;
	cout<<"Nhap thoi gian cua cong viec bang giay :";cin>> giay1; 
	int gio = giay1/3600; giay1%= 3600; 
	int phut = giay1/60; giay1 %=60; 
	giay = giay1; 
	cout <<" vay so gio ban can la "<<gio<<"gio"<<phut<<"phut"<<giay<<"giay"<<endl;
	return 0;
}
