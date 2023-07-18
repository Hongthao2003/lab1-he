#include <iostream>
#include <cmath> 
using namespace std;

int main(){
int n, a, tong; 
	cout << "Nhap hai so nguyen duong: ";
	cin >> n;
	for(;n!=0;){
	a = n%10;
	tong +=a;
	n/=10;	
	}
	cout << " Tong cac chu so cua la "<< tong << endl;
	return 0;
}  
