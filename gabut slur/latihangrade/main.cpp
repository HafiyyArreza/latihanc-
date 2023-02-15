#include <iostream>
#include<iostream>
#include<Windows.h>

using namespace std;

int main(){
    system("color 30");
    system("pause");


    int grade;
    string nama;

    cout << "                                             === Program Grade Nilai ===" << endl;

    cout << "Masukkan Nama Anda" << endl;
    cout << "Nama : ";
    cin >> nama;


    cout << "Masukkan Nilai Akhir: ";
    cin >> grade;


    // menggunakan percabangan if/esle/if
    if ((grade >= 91)&&(grade <= 100)) {
        cout << nama << "   Nilai Kamu A";
    } else if ((grade >=81)&&(grade <= 90)) {
        cout << nama << "   Nilai Kamu B";
    } else if ((grade >= 71)&&(grade <= 80)) {
        cout << nama << "   Nilai Kamu C";
    } else if ((grade >= 61)&&(grade <= 70)) {
        cout << nama << "   Nilai Kamu D";
    } else if ((grade >= 0)&&(grade <= 60)) {
        cout << nama << "   Nilai Kamu E";
    }
    else{
    cout << " Nilai Tidak Valid ";
    }

    return 0;
}
