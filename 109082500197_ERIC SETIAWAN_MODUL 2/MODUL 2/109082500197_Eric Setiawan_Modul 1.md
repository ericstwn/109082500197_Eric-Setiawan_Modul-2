# <h1 align="center">Laporan Praktikum Modul 2 - PENGENALAN BAHASA C++ (BAGIAN KEDUA)</h1>

<p align="center">Eric Setiawan - 109082500197</p>

## Dasar Teori
Dasar teori praktikum ini membahas konsep-konsep fundamental dalam bahasa C++ yang meliputi array, pointer, reference, dan fungsi. Pemahaman mendalam tentang konsep-konsep ini sangat penting untuk mengembangkan program yang efisien dan mampu memanipulasi data secara dinamis.

### A. Array <br/>
Array adalah kumpulan elemen dengan tipe data yang sama, disimpan dalam lokasi memori yang bersebelahan. Array diakses menggunakan indeks mulai dari 0. Dalam praktikum ini, array digunakan untuk menyimpan elemen-elemen matriks dalam operasi penjumlahan, pengurangan, dan perkalian matriks 3x3. Array multidimensi (2D) pada matriks dideklarasikan sebagai int matriks[3][3], di mana indeks pertama adalah baris dan indeks kedua adalah kolom.

### B. Pointer <br/>
Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. Pointer dideklarasikan menggunakan tanda asterisk (*), contohnya int *p. Untuk mendapatkan alamat suatu variabel, digunakan operator & (address-of). Untuk mengakses nilai yang ditunjuk pointer, digunakan operator * (dereferencing). Pointer sangat berguna untuk memanipulasi nilai variabel secara langsung melalui fungsi, seperti dalam program penukaran nilai tiga variabel.

### C. Reference <br/>
Reference adalah alias atau nama lain dari suatu variabel. Reference dideklarasikan menggunakan tanda & setelah tipe data, contohnya int &ref = variabel. Berbeda dengan pointer, reference tidak perlu di-dereference untuk mengakses nilai, cukup gunakan nama reference seperti variabel biasa. Reference tidak bisa diubah untuk merujuk ke variabel lain setelah inisialisasi. Reference juga lebih aman dan lebih mudah digunakan dibanding pointer dalam banyak kasus.

### D. Fungsi <br/>
Fungsi adalah blok kode yang dapat dipanggil berkali-kali untuk melakukan tugas tertentu. Fungsi dapat menerima parameter (input) dan mengembalikan nilai (output). Parameter dapat berupa nilai biasa, pointer, atau reference. Dalam praktikum ini, fungsi digunakan untuk menghitung nilai maksimum, minimum, dan rata-rata dari sebuah array, serta untuk melakukan penukaran nilai menggunakan pointer dan reference.

#### 1. Variabel dan Tipe Data
Tipe data adalah kategorisasi untuk menentukan jenis nilai yang dapat disimpan variabel. Bahasa C++ menyediakan tipe data dasar seperti int (bilangan bulat), float dan double (bilangan desimal), char (karakter), dan bool (nilai benar/salah). Variabel harus dideklarasikan terlebih dahulu sebelum digunakan dengan format: tipe_data nama_variabel;

#### 2. Pointer
Pointer merupakan variabel yang menyimpan alamat memori dari variabel lain. Pointer dideklarasikan dengan tanda asterisk (*) dan menggunakan operator & untuk mendapatkan alamat. Pointer sangat penting dalam struktur data karena memungkinkan pembuatan linked list dan struktur dinamis lainnya. Operator * digunakan untuk mengakses nilai yang ditunjuk pointer (dereferencing).

#### 3. Array dan Function
Array adalah kumpulan elemen bertipe sama yang tersimpan dalam lokasi memori bersebelahan. Fungsi (function) adalah blok kode yang dapat dipanggil berkali-kali untuk melakukan tugas tertentu. Fungsi dalam C++ dapat menerima parameter dan mengembalikan nilai. Penggunaan fungsi membuat kode lebih terstruktur, mudah dipahami, dan dapat digunakan kembali.


## guided

### 1. Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3.

```C++
source code guided 1

#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3];
    int tambah[3][3];
    int kurang[3][3];
    int kali[3][3];

    cout << "Masukkan matriks A:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nMasukkan matriks B:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tambah[i][j] = A[i][j] + B[i][j];
            kurang[i][j] = A[i][j] - B[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            kali[i][j] = 0;

            for (int k = 0; k < 3; k++) {
                kali[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nHasil Penjumlahan:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tambah[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nHasil Pengurangan:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << kurang[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nHasil Perkalian:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << kali[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

### Output guided 1 :

##### Output 1

![Screenshot Output guided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

##### Output 2

![Screenshot Output guided 1_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

##penjelasan guided 1
Program ini buat ngitung operasi matriks 3x3 yaitu penjumlahan, pengurangan, dan perkalian. Pertama program minta input matriks A dan B masing-masing 3x3 menggunakan dua loop bersarang for i dan for j yang ngisi setiap baris dan kolom. Untuk penjumlahan dan pengurangan, tambah[i][j] = A[i][j] + B[i][j] dan kurang[i][j] = A[i][j] - B[i][j] artinya setiap elemen di posisi yang sama langsung dijumlah atau dikurangi. Untuk perkalian matriks lebih kompleks, ada tiga loop bersarang dimana kali[i][j] += A[i][k] * B[k][j] ngitung setiap elemen hasil dengan cara kaliin baris dari A dengan kolom dari B lalu dijumlahin. Hasilnya ditampilin satu per satu pakai cout dengan endl buat pindah baris setiap selesai satu baris matriks.


### 2. Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel.

```C++
##source code guided 2 pointer

#include <iostream>
using namespace std;

void tukarPointer(int *a, int *b, int *c) {
    int temp;

    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    cout << "Sebelum ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    tukarPointer(&a, &b, &c);

    cout << "Setelah ditukar:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}

### Output guided 2 :

##### Output 1

![Screenshot Output guided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)


##### Output 2

![Screenshot Output guided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan guided 2 pointer
Program ini buat nukar nilai tiga variabel a, b, dan c menggunakan pointer. Di main variabel a, b, c diisi nilai 10, 20, 30 lalu ditampilin dulu sebelum ditukar pakai cout. Fungsi tukarPointer dipanggil dengan &a, &b, &c yang artinya kita kirim alamat memori variabelnya bukan nilainya, makanya pakai tanda &. Di dalam fungsi, tanda *a, *b, *c dipakai buat ngakses nilai asli dari alamat yang dikirim. Proses tukarnya pakai variabel temp sebagai penampung sementara, nilai *c disimpan ke temp, lalu *c diisi nilai *b, *b diisi nilai *a, dan *a diisi nilai dari temp. Jadi urutan nilainya bergeser, yang tadinya a=10, b=20, c=30 jadi a=30, b=10, c=20.

```C++
##source code guided 2 reference

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

### Output guided 2 :

##### Output 1

![Screenshot Output guided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)


##### Output 2

![Screenshot Output guided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan guided 2 reference
Program ini buat nukar nilai tiga variabel a, b, dan c menggunakan reference, mirip program sebelumnya tapi bedanya pakai tanda & di parameter fungsinya bukan di saat memanggilnya. Di main variabel a, b, c diisi nilai 10, 20, 30 lalu ditampilin dulu sebelum ditukar. Fungsi tukarReference dipanggil dengan tukarReference(a, b, c) tanpa tanda & karena reference langsung ngerujuk ke variabel aslinya secara otomatis. Di dalam fungsi, int &a, int &b, int &c artinya a, b, c di sini adalah nama lain dari variabel aslinya, jadi kalau diubah langsung ngaruh ke nilai aslinya tanpa perlu tanda *. Proses tukarnya sama seperti sebelumnya pakai temp sebagai penampung sementara sehingga hasilnya a=30, b=10, c=20. Bedanya sama program pointer, reference lebih simpel penulisannya karena tidak perlu tanda * dan & saat manggil fungsinya.

### 3. Membuat Segitiga bilangan dengan tanda "*" ditengah

```C++
source code guided 3

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

### Output guided 3 :

##### Output 1

![Screenshot Output guided 3_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)


##### Output 2

![Screenshot Output guided 3_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan guided 3
Program ini buat ngolah data array dengan menu pilihan. Array arrA sudah diisi 10 angka yaitu {48, 2, 7, 21, 5, 20, 77, 9, 10, 1} sejak awal tanpa perlu input. Program nampilin menu pilihan pakai cout lalu minta input pilihan pakai cin >> pilihan. Kalau pilih 1, program nampilin semua isi array pakai loop for. Kalau pilih 2, fungsi maksimum dipanggil yang bekerja dengan cara nyimpen nilai pertama ke max lalu bandingin satu-satu, kalau ada yang lebih besar maka max diperbarui. Kalau pilih 3, fungsi minimum bekerja sama tapi nyari yang terkecil. Kalau pilih 4, fungsi rataRata ngitung total semua elemen lalu dibagi n, hasilnya disimpan ke hasilRataRata pakai reference &hasil supaya nilainya bisa dibawa keluar fungsi. Kalau inputnya selain 1-4 maka nampilin pesan pilihan tidak tersedia.

## Kesimpulan

Berdasarkan praktikum Modul 2 - Pengenalan C++ (Bagian Kedua) yang telah dilakukan, dapat disimpulkan bahwa pemahaman konsep array, pointer, reference, dan fungsi merupakan dasar yang sangat penting dalam pembelajaran C++. Praktikum ini telah menunjukkan bagaimana array dapat digunakan untuk menyimpan dan mengelola data secara efisien, seperti pada program operasi matriks yang melakukan penjumlahan, pengurangan, dan perkalian matriks 3x3. Selain itu, pointer dan reference memiliki peran krusial dalam C++ untuk memanipulasi nilai variabel secara langsung melalui alamat memori, sebagaimana ditunjukkan dalam program penukaran nilai tiga variabel. Penggunaan fungsi dengan parameter yang tepat membuat kode menjadi lebih terstruktur dan mudah dipahami. Kombinasi dari semua konsep ini memungkinkan programmer untuk membuat program yang lebih kompleks dan efisien dalam menangani struktur data yang lebih besar di masa depan.

## Referensi

[1] Website Pembelajaran C++
cplusplus.com - Tutorial komprehensif C++ dengan referensi library standar dan contoh kode operasi array dan pointer
learncpp.com - Panduan pembelajaran C++ dari dasar hingga tingkat lanjut mencakup konsep pointer, reference, dan array
geeksforgeeks.org - Tutorial C++, struktur data, algoritma, dan operasi matriks dengan penjelasan detail dan contoh program
tutorialspoint.com - Tutorial interaktif C++ dan struktur data untuk pemula dengan fokus pada array dan fungsi

<br>[2] Buku Referensi


[3] Video Pembelajaran C++
Programming with Mosh - Tutorial C++ interaktif untuk pemula dengan penjelasan array, pointer, dan operasi matriks
Jenny's Lectures CS IT - Tutorial struktur data menggunakan C++ dengan penjelasan detail tentang array dan pointer
The Cherno - Penjelasan mendalam tentang C++ dan cara kerja pointer, reference, serta memory management

