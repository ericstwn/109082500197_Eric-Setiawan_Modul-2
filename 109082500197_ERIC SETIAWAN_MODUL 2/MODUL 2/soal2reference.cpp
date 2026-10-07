#include <iostream>
using namespace std;

void tukarReference(int &a, int &b, int &c) {
    int temp;

    temp = c;
    c = b;
    b = a;
    a = temp;
}

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    cout << "Sebelum ditukar:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    tukarReference(a, b, c);

    cout << "\nSetelah ditukar:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}