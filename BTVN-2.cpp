#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char lowercaseChar;
    cout << "Nhap mot ky tu thuong: ";
    cin >> lowercaseChar;

    char uppercaseChar = toupper(lowercaseChar);

    cout << "Ky tu chu hoa tuong ung: " << uppercaseChar << endl;

    return 0;
}
