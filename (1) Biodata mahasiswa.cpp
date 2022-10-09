#include <iostream>

using namespace std;

int main()
{
    int64_t NPM = 2210631170078;

    string namaDepan = "Muhammad Ramadhan";
    string namaBelakang = "Syahrul Al Qodr";
    string namaLengkap = namaDepan + " " + namaBelakang;

    int Umur = 19;

    string Kelas = "1D Informatika";

    string Hobi = "Masak";

    string CitaCita = "Mempunyai perusahaan yang sukses.";

    cout << "Nama Lengkap   : " << namaLengkap << endl;
    cout << "NPM            : " << NPM << endl;
    cout << "Umur           : " << Umur << endl;
    cout << "Kelas          : " << Kelas << endl;
    cout << "Hobi           : " << Hobi << endl;
    cout << "Cita - cita    : " << CitaCita << endl;


    return 0;
}
