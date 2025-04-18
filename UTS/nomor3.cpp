#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string nama_mahasiswa;
    char nim[15];
    float nilai_matkul1, nilai_matkul2, nilai_matkul3;
    float rata2_nilai;
    bool lulus1,lulus2,lulus3;

    cout << "Nama Mahasiswa : ";
    getline(cin, nama_mahasiswa);
    cout << "NIM Mahasiswa  : ";
    cin >> nim;

    cout << "\nMasukkan Nilai Mata Kuliah" << endl;
    cout << "==========================" << endl;
    cout << "Aljabar Linear      : ";
    cin >> nilai_matkul1;
    cout << "Matematika Diskrit  : ";
    cin >> nilai_matkul2;
    cout << "Sistem Operasi      : ";
    cin >> nilai_matkul3;

    if(nilai_matkul1 >= 60){
        lulus1 = true;
    }else {
        lulus1 = false;
    }

    if(nilai_matkul2 >= 60){
        lulus2 = true;
    }else{
        lulus2 = false;
    }

    if(nilai_matkul3 >= 60){
        lulus3 = true;
    }else{
        lulus3 = false;
    }

    rata2_nilai = (float((nilai_matkul1 + nilai_matkul2 + nilai_matkul3)) / 3);

    cout << "\nDetail Nilai Mahasiswa" << endl;
    cout << "======================" << endl;
    cout << "Nama  : " << nama_mahasiswa << endl;
    cout << "NIM   : " << nim << endl << endl;

    if(lulus1 == true){
        cout << "Aljabar Linear    \t: Lulus" << endl;
    }else{
        cout << "Aljabar Linear    \t: Tidak Lulus. Silahkan Ulangi Tahun Depan!" << endl;
    }
    if(lulus2 == true){
        cout << "Matematika Diskrit \t: Lulus" << endl;
    }else{
        cout << "Matematika Diskrit \t: Tidak Lulus. Silahkan Ulangi Tahun Depan!" << endl;
    }
    if(lulus3 == true){
        cout << "Sistem Operasi    \t: Lulus" << endl;
    }else{
        cout << "Sistem Operasi    \t: Tidak Lulus. Silahkan Ulangi Tahun Depan!" << endl;
    }

    cout << fixed << setprecision(2) << "Nilai Rata-Rata Semester ini : " << rata2_nilai << endl;

    return 0;
}