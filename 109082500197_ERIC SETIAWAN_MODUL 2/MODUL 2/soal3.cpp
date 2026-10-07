#include <iostream>
using namespace std;

int maksimum(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int minimum(int arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

void rataRata(int arr[], int n, float &hasil) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total = total + arr[i];
    }

    hasil = (float) total / n;
}

int main() {

    int arrA[10] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    int pilihan;
    float hasilRataRata;

    cout << "--- Menu Program Array ---" << endl;
    cout << "1. Tampilkan isi array" << endl;
    cout << "2. Cari nilai maksimum" << endl;
    cout << "3. Cari nilai minimum" << endl;
    cout << "4. Hitung nilai rata-rata" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    if (pilihan == 1) {

        cout << "\nIsi array:" << endl;

        for (int i = 0; i < 10; i++) {
            cout << arrA[i] << " ";
        }

    } 
    else if (pilihan == 2) {

        cout << "\nNilai maksimum = " << maksimum(arrA, 10);

    } 
    else if (pilihan == 3) {

        cout << "\nNilai minimum = " << minimum(arrA, 10);

    } 
    else if (pilihan == 4) {

        rataRata(arrA, 10, hasilRataRata);

        cout << "\nNilai rata-rata = " << hasilRataRata;

    } 
    else {

        cout << "\nPilihan tidak tersedia.";

    }

    return 0;
}