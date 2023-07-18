#include <iostream>
using namespace std;

int main(){
	const float PI = 3.14;
	int R;
	cout<<"Nhap vao ban kinh hinh tron: "; cin >> R;
	int S = 4*PI*R*R;
	cout<< "Dien tich hinh tron la :"<<S;
	int V =(4/3)*PI*(R*R*R);
	cout <<"\nChu vi hinh tron la :"<<V;
	return 0;
} 
