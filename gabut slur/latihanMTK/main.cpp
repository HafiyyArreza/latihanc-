#include <iostream>

using namespace std;

int main(){
    int ko;
    float a, t, r;
    float LuasSegitiga, LuasLingkaran;
    float phi = 3.14;
    cout << "                                    Latihan Perhitungan Luas Segitiga Dan Lingkaran" << endl;
    cout << "                                    --------------___________________--------------" << endl;
    cout << endl;

    cout << "Masukkan Alas Segitiga" << endl;
    cout << "Angka : ";
    cin >> a;

    cout << "Masukkan tinggi Segitigas" << endl;
    cout << "Angka : ";
    cin >> t;
    cout << endl;

    LuasSegitiga = 0.5 *a *t;

    cout << "Luas Segitiga = " << LuasSegitiga << endl;

     cout << "                                    Latihan Perhitungan Luas Segitiga Dan Lingkaran" << endl;
    cout << "                                    --------------___________________--------------" << endl;
    cout << endl;

    cout << "Masukkan jari jari lingkaran" << endl;
    cout << "Angka : ";
    cin >> r;

    LuasLingkaran = phi*r*r;
    cout << "Hasilnya Adalah : " << LuasLingkaran << endl;
    cin >> ko;


    return 0;
}
