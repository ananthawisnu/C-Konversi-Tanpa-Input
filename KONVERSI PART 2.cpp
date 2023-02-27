#include <iostream>
using namespace std;

int main() 
{
    int jam1, menit1, detik1, jam2, menit2, detik2, total_detik1, total_detik2, total_semua;

    jam1 = 4;
    menit1 = 50;
    detik1 = 12;

    jam2 = 3;
    menit2 = 21;
    detik2 = 56;

    total_detik1 = (jam1 * 3600) + (menit1 * 60) + detik1 ;
    total_detik2 = (jam2 * 3600) + (menit2 * 60) + detik2 ;
	total_semua = total_detik1 + total_detik2;
	
    cout << "Hasil dari 4jam 50 menit 12 detik kedetik adalah " << total_detik1 << endl;
    cout << "Hasil dari 3jam 21 menit 56 detik kedetik adalah " << total_detik2 << endl;
	cout << "Jumlah total dari konversi tersebut adalah " << total_semua << endl;
}
