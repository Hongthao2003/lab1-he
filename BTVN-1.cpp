#include <iostream>
using namespace std;

int main() {
    cout << "Nhap so xe (gom 4 chu so): ";
    int n;
    cin >> n;

    int nut = 0;
    while (n > 0) {
        nut = nut + n % 10;
        n = n / 10;
    }

    cout << "So nut cua bien so xe la: " << nut % 10 << endl;

    return 0;
}
