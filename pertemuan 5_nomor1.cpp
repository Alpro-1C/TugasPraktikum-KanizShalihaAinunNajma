#include <iostream>

using namespace std;

void bilPrima (int bilangan, int sumPrima ){ //Menampilkan bilangan Prima
    cout << "Bilangan Prima";
    for (int i = 2; i <= bilangan; ++i){
  int j;
  for (int j = 2; j*j <= i; ++j){
  }
  if (i % j == 0){
    cout << i << " ";
    sumPrima += i;
  }}
  cout << endl;
}

void bilGanjil (int bilangan, int sumGanjil ){ //Menghitung bilangan Ganjil
    cout << "Bilangan Ganjil";
    for (int j = 1; j <= bilangan; ++j){
   if (j % 2 != 0){
    cout << j << " ";
    sumGanjil += j;
    }}
    cout << endl;
}

void bilGenap ( int bilangan, int sumGenap ){ //Menghitung bilangan Genap
    cout << "Bilangan Genap";
    for (int k = 1; k <= bilangan; ++k){
   if (k % 2 == 0){
   cout << k << " ";
   sumGenap += k;
   }}
   cout << endl;
}

void faktorbilanganPrima (int bilanganPrima ){ //Menghitung bilangan Prima
    cout << "Faktor bilangan prima";
    for (int r = 1; r <= bilanganPrima; r++){
   if (bilanganPrima % r == 0){
   cout << r << " ";
   }}
   cout << endl;
}

void faktorbilanganGanjil (int bilanganGanjil ){ //Menghitung bilangan Ganjil
    cout << "Faktor bilangan ganjil";
    for (int s = 1; s <= bilanganGanjil; s++){
   if (bilanganGanjil % s == 0){
   cout << s << " ";
   }}
   cout << endl;
}

void faktorbilanganGenap (int bilanganGenap){ //Menghitung bilangan Genap
    cout << "Faktor bilangan genap";
    for (int t = 1; t <= bilanganGenap; t++){
   if (bilanganGenap % t == 0){
   cout << t << " ";
   }}
   cout << endl;
}

int main(){

  int bilangan;
  int sumPrima = 0;
  int sumGanjil = 0;
  int sumGenap = 0;

    cout << "\nMasukkan bilangan: ";
    cin >> bilangan;

    cout << endl;
    bilPrima (bilangan, sumPrima ); //Function menampilkan bilangan Prima
    bilGanjil (bilangan, sumGanjil ); //Funtion menampilkan bilangan Ganjil
    bilGenap (bilangan, sumGenap ); //Function menampilkan bilangan Genap

    cout << "Jumlah bilangan ganjil" << sumGanjil << endl;
    cout << "Jumlah bilangan genap" << sumGenap << endl;
    cout << "Jumlah bilangan Prima" << sumPrima << endl;

    cout << endl;
    faktorbilanganPrima (sumPrima); //Function menampilkan faktor bilangan Prima
    faktorbilanganGanjil (sumGanjil); //Function menampilkan faktor bilangan Ganjil
    faktorbilanganGenap (sumGenap); //Function menampilkan faktor bilangan Genap

return 0;
}
