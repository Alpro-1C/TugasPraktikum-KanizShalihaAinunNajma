#include <iostream>

using namespace std;

int fibonacci (int n){ // Function menghitung fibonacci ke-n
    if (n <= 1){
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);

}}

void tampilkanFibonacci(int n){ // Function menampilkan deret Fibonacci hingga ke-n
    cout << "Deret Fibonacci hingga ke-" << n << ":\n";
    for (int i = 0; i < n; i++){
        cout << fibonacci(i) << " ";
}
    cout << endl;
}

int main  (){

    int panjangDeret;
    cout << "\nMasukkan panjang deret Fibonacci";
    cin >> panjangDeret;

    tampilkanFibonacci(panjangDeret); //Function menampilkan deret Fibonacci yang diinginkan

    return 0;
}
