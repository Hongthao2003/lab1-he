---------------A01----------------
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
-----------------A02----------------
#include <iostream>
#include <cmath> 
using namespace std;

int main(){
	int n;
	int S, S1, S2; 
	cout <<"Nhap n: ";cin >> n;
	for (int i =1; i<= n; ++i){
		S+=i;
		 if (i % 2 == 1) { 
            S1 += i;
		} else{
			S2 += i ;
		}
	} 
	cout <<"Tong cac so tu nhien la :n "<<S<< endl;
	cout <<"Tong cac so tu nhien le la: "<<S1<<endl;
	cout<<"Tong cac so tu nhien chan la: "<<S2<<endl;
	return 0; 
}
-------------------A03----------------------
	#include <iostream>
#include <cmath> 
using namespace std;

int main(){
	int n;
	cout <<"Nhap n: ";cin >> n;
	int S = 0;
	for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
        S += i;
        }
    }
    cout << "Tong cac so tu nhien khong lon hon " <<n<< " va chia het cho 7 la: " <<S<< std::endl;
	return 0; 
}

-------------------------------A04-----------------------------------------------------------------
	#include <iostream>
#include <cmath> 
using namespace std;

int main(){
	int n;
	cout <<"Nhap n: ";cin >> n;
	int S = 0;
	for (int i = 1; i <= n; i++) {
        if (i % 7 == 1) {
        S += i;
        }
    }
    cout << "Tong cac so tu nhien khong lon hon " <<n<< " va khong chia het cho 7 la: " <<S<< std::endl;
	return 0; 
}

