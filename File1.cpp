#include <iostream>
using namespace std;

class BangunDatar {
    public :
    int hitungLuas(int l, int p);
    int hitungKeliling(int l, int p);
};

class persegiPanjang{
    public :
    int panjang, lebar;

    friend int BangunDatar::hitungLuas(int l, int p);
    friend int BangunDatar::hitungKeliling(int l, int p);
};


int BangunDatar::hitungLuas(int l, int p){
    return l *p;
}

int BangunDatar::hitungKeliling(int l, int p){
    return (2 * p) + (2 * l);
}

int main (){
    BangunDatar bD;
    persegiPanjang pP;
    persegiPanjang &refpP = pP;
    refpP.panjang = 10;
    refpP.lebar = 100;
    cout << bD.hitungLuas(refpP.lebar, refpP.panjang);
}