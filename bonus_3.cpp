#include <iostream>
#include <cmath> 
using namespace std;

int main(){
int a,b;
cout<< "Nhap a:"; cin >> a;
cout<< "Nhap b: "; cin>>b;
int nguyen= a/b;
cout << "Phan nguyen la :"<<nguyen; 
int du = a%b; 
cout<< "\nPhan du la :" << du; 
	return 0;
}  
