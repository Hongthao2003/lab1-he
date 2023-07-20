#include <iostream>
#include <cmath>
using namespace std;

int main(){
float a, b;
cout<<"Nhap a la mot so thuc: "; cin>> a;
cout<<"Nhap b la mot so thuc: "; cin >>b;
float T =  (pow(2*a,2)+pow(3*b,3)+4)/(a+b);
cout<<"Gia tri cua T la :" <<T;
return 0;
}
