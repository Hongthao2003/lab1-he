#include <iostream>
using namespace std;
 
int main(){
	int min,max;
	int a,b;
	cout<<"Nhap a:"; cin>> a;
	cout<<"Nhap b:"; cin>> b;
	
	min =a;
	if (a<b) min= a;
	else min = b;
	if (b>a) max = b;
	else max = a;
	cout <<" Gia tri be nhat "<<min ;
	cout <<" \nGia tri lon nhat "<<max ;
	return 0; 
} 
