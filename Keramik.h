#include <iostream>
using namespace std;

void awal(){
    T.atas =- 1;
}

int kosong(){
    if (T.atas == -1)
        return 1;
    else
        return 0;
}

int penuh(){
    if (T.atas == max-1)
        return 1;
    else
        return 0;
}

void input (string data){
    if (kosong () == 1){
        T.atas++;
        T.data [T.atas] = data;
        cout << "Keramik " << T.data[T.atas] <<" masuk ke Tumpukan\n";
        
    }
    else
        if (penuh () == 0){
            T.atas++;
            T.data [T.atas] = data;
            cout << "Keramik " << T.data [T.atas] << " masuk ke Tumpukan\n";
        }
}
void hapus(){
    if (kosong() == 0){
        cout << "Keramik teratas sudah terambil\n";
        T.atas--;
    }
    else
        cout << "Tidak ada Keramik di Tumpukan\n";
}

void tampil(){
    if (kosong() == 0){
        for (int i = T.atas; i >= 0; i--)
        {
            cout << "\nTumpukan ke "<< i + 1 << "=" << T.data[i];
        }
    }
    else
        cout << "Tumpukan kosong\n";
}

void bersih(){
    T.atas =- 1;
    cout << "Tumpukan kosong!\n";
}
