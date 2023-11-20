#include <iostream>

using namespace std;

void tampilkanpiramida (int n){ //Menampilkan Piramida
    char currentChar = '*';
    for (int i = 0; i <= n; i++){
    for (int j = n; j > i; j--){
     cout << " ";
    for (int k = 1; k <= i; k++){
     cout << currentChar << " ";
      }}}
}

int main (){
 int n;

 cout << "\nMasukkan tinggi piramida yang diinginkan: ";
 cin >> n;

 tampilkanpiramida(n); //Function menampilkan piramida yang diinginkan

 return 0;
}
