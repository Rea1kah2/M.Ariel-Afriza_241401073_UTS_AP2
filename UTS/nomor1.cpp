#include <iostream>
using namespace std;

int main(){
    int kode1,kode2,kode3;
    bool bahaya = false;
    cout << "Kode ke-1 : ";cin >> kode1;
    cout << "Kode ke-2 : ";cin >> kode2;
    cout << "Kode ke-3 : ";cin >> kode3;

    if((kode1 < 50) || (kode2 < 50) || (kode3 < 50)){
        bahaya = true;
    }

    if((kode1 + kode2 + kode3) < 200){
        bahaya = true;
    }

    if(bahaya == true){
        cout << "\nbahaya bes!";
    }else{
        cout << "\nAman bes!";
    }

    return 0;
}