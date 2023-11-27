#include <iostream>

using namespace std;

//Membuat function untuk membuat garis variasi
void variasi()
{
    for (int i = 1; i <= 60; i++)
    {
        cout << "=";
    }
}

int main(){
    //Memasukkan function ke dalam judul program
    variasi ();
        cout << "\n\tProgram mencari nilai tertinggi dalam array" << endl;
    variasi ();

    //Menginput panjang array
    int panjang_array;
    cout << "\nMasukkan panjang array: ";
    cin >> panjang_array;

    //Membuat array untuk menyimpan nilai-nilai dari pengguna
    int arr[panjang_array];

    //Meminta pengguna menginput nilai-nilai array
    for (int i = 0; i < panjang_array; ++i){
        cout << "Masukkan nilai ke-" << i + 1 << "; ";
        cin >> arr[i];
    }

    //Mencari nilai tertinggi dan indeksnya
    int nilai_tertinggi = arr[0];
    int indeks_tertinggi = 0;

    for (int i = 1; i < panjang_array; ++i){
        if (arr[i] > nilai_tertinggi){
            nilai_tertinggi = arr[i];
            indeks_tertinggi = i;
        }
    }

    //Menamipilkan hasil
    variasi ();
        cout << "\nNilai tertinggi array adalah " << nilai_tertinggi << " yang berada pada indeks " << indeks_tertinggi << endl;
    variasi ();

    return 0;
}
