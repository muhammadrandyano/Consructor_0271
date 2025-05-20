#include <iostream>
#include <string>
using namespace std;

class Barang {
public:
    string namaBarang;
    int kodeBarang;
    
    Barang(string nama, int kode);
    void tampilkanInfo();
};

Barang::Barang(string nama, int kode) {
    namaBarang = nama;
    kodeBarang = kode;
}

void Barang::tampilkanInfo() {
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Kode Barang : " << kodeBarang << endl;
}

int main() {
    Barang barang1("ASUS ROG ", 2001);
    Barang barang2("SAMSUNG S24", 2002);

    cout << "=== Barang 1 ===" << endl;
    barang1.tampilkanInfo();

    cout << "\n=== Barang 2 ===" << endl;
    barang2.tampilkanInfo();

    return 0;
}