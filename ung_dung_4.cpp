#include <iostream>
#include <cmath> 
using namespace std;

int main(){
float R1, R2, R3; 
cout << " Gia tri dien tro cua R1 la :"; cin >> R1;
cout<<" Gia tri dien tro cua R2 la :"; cin >> R2;
cout << " Gia tri dien tro cua R3 la :"; cin >> R3;

float Rtd  = 1 / (1 / R1 + 1 / R2 + 1 /R3);
cout<<" Tong tro tuong duong cua mach dien la :" << Rtd  ;
return 0; 
}  
