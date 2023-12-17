#include <iostream>
using namespace std;
int main()
{
    cout<< "Program C++ MENENTUKAN BILANGAN GANJIL, GENAP, DAN PRIMA DENGAN BATAS TERTENTU"<<endl;
    cout<< "SERTA MENENTUKAN JUMLAH DAN FAKTOR DARI JUMLAH BILANGAN-BILANGAN TERSEBUT"<<endl;
    cout<< "------------------------------------------------------------------------------"<<endl;
    cout<< endl;

    int n, jumlah_ganjil=0, jumlah_genap=0, jumlah_prima=0; //untuk mendeklarasikan variabel
    cout<< "Masukkan batas bilangan: ";
    cin>>n; //untuk input batas akhir yang diinginkan
    cout<<endl;

    //Menentukan bilangan ganjil
    cout<< "Bilangan ganjil: "; //output untuk menampilkan bilangan ganjil
    for (int i=0; i<=n; i++){
        if (i%2!=0){
            cout<<i<< " "; //menampilkan bilangan ganjil
            jumlah_ganjil +=i; //menjumlahkan bilangan ganjil
        }
    }
    cout<<endl;

    //Menentukan bilangan genap
    cout<< "Bilangan genap: "; //output untuk menampilkan bilangan genap
    for (int i=0; i<=n; i+=2){
        cout<<i<< " "; //menampilkan bilangan genap
        jumlah_genap +=i; //menjumlahkan bilangan genap
    }
    cout<<endl;

    //Menentukan bilangan prima
    cout<< "Bilangan prima: "; //output untuk menampilkan bilangan prima
    for (int i=2; i<=n; i++){
        int j; //untuk mendeklarasi variabel
        for (j=2; j*j<=i && i%j!=0; j++){
        }
        if (j*j>i){
            cout<<i<<" "; //menampilkan bilangan prima
            jumlah_prima +=i; //menjumlahkan bilangan genap
        }
    }
    cout<<endl<<endl;

    //Menentukan Jumlah bilangan
    cout<< "Jumlah bilangan ganjil: " <<jumlah_ganjil<<endl;
    cout<< "Jumlah bilangan genap : " <<jumlah_genap<<endl;
    cout<< "Jumlah bilangan prima : " <<jumlah_prima<<endl;
    cout<<endl;

    //Menentukan Faktor Bilangan
    cout<< "Faktor bilangan dari jumlah bilangan ganjil: ";
    for (int k=1; k<=jumlah_ganjil; k++){
        if (jumlah_ganjil%k==0){
            cout<<k<<" ";
        }
    }
    cout<<endl;

    cout<< "Faktor bilangan dari jumlah bilangan genap: ";
    for (int l=1; l<=jumlah_genap; l++){
        if (jumlah_genap%l==0){
            cout<<l<<" ";
        }
    }
    cout<<endl;

    cout<< "Faktor bilangan dari jumlah prima: ";
    for (int m=1; m<=jumlah_prima; m++){
        if (jumlah_prima%m==0){
            cout<<m<<" ";
        }
    }
    cout<<endl;
}
