#include <iostream>
#include <cmath> 
using namespace std;

int main(){
	int n;
	double sum = 0.0;

	cout <<"Nhap so tu nhien n :"; cin >>n; 
      for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }
	cout <<"Tong la S= 1+ 1/2+1/3+...+1/n :"<<sum; 
	return 0; 
	
}  
