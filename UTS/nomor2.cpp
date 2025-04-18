#include <iostream>
#include <string>
using namespace std;

int main(){
    int inputan_kode;
    cout << "Masukkan kode 3 digit : ";
    cin >> inputan_kode;

    if(to_string(inputan_kode).length() == 3){
        int digit1 = inputan_kode / 100;
        int digit2 = (inputan_kode / 10) % 10;
        int digit3 = inputan_kode % 10;

        int jumlahnya = digit1 + digit2 + digit3;
        cout << "Jumlah dari ketiga digit : " << jumlahnya << endl;
    }else{
        cout << "Kode Salah!";
    }

    return 0;
}