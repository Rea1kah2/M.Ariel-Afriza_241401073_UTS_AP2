#include <iostream>
#include <string>
using namespace std;

int main(){
    string daftar_judul_buku;
    int jumlah_judul = 0;

    cout << "Daftar judul buku (pisahkan dengan koma) : ";
    getline(cin, daftar_judul_buku);

    int i = 0;
    while(i < daftar_judul_buku.length()){
        while(i < daftar_judul_buku.length() && daftar_judul_buku[i] == ' '){
            i++;
        }

        while(i < daftar_judul_buku.length() && daftar_judul_buku[i] != ' '){
            jumlah_judul++;
            while(i < daftar_judul_buku.length() && daftar_judul_buku[i] != ' '){
                i++;
            }
        }
    }

    cout << "Jumlah judul buku : " << jumlah_judul << endl;

    return 0;
}