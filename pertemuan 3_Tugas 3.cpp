#include <iostream>

using namespace std;

int main(){
    //Tugas 3 program menghitung luas persegi, persegi panjang, segitiga

    int bangunDatar;
    float sisi, panjang, lebar, tinggi, alas, luas;

    //Input pilihan bangun datar
    cout << "Pilih untuk menghitung luas:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> bangunDatar;

    switch (bangunDatar){
        case 1://Luas persegi, sisi x sisi
            cout << "Masukkan sisi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi adalah: " << luas << endl;
            break;
        case 2://Luas persegi panjang, panjang x lebar
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang adalah: " << luas << endl;
            break;
        case 3://Luas segitiga, setengah x alas x tinggi
            cout << "Masukkan alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            luas = alas * tinggi * 0.5;
            cout << "Luas segitiga adalah: " << luas << endl;
            break;
        default:
            cout << "Pilihan tidak ada." << endl;
    }

    return 0;
}
