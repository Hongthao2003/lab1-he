#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Nhap vao mot so nguyen duong co ba chu so:"; cin >>x;
	int sodao= (x%10)*100+((x/10)%10)*10+x/100;
	cout<<"So dao cua"<<x<< "la "<<sodao;
return 0;
} 
