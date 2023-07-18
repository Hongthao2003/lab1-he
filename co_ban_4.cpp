#include <iostream>
using namespace std;
 
int main(){
	int R;
	const float PI= 3.14;
	cout<<"Nhap ban kinh hinh tron: "; cin>> R;
	int CV = 2*R*PI;
	cout << "Chu vi hinh tron la :"<< CV;
	int DT = (R*R)*PI;
	cout << "\nDien tich hinh tron "<< DT;
	return 0; 
} 
