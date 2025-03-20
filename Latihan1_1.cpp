//D2400018214 Muhammad Abdullah Azzam
#include <iostream>
using namespace std;

class Biodata
{
private:
    string nama;
    string nim;
    char kelas;
    string prodi;
    string fakultas;

public:
    Biodata(string n, string ni, char k, string p, string f)
    {
        nama = n;
        nim = ni;
        kelas = k;
        prodi = p;
        fakultas = f;
    }

    void tampilkanBiodata()
    {
        cout << "Nama     : " << nama << endl;
        cout << "NIM      : " << nim << endl;
        cout << "Kelas    : " << kelas << endl;
        cout << "Prodi    : " << prodi << endl;
        cout << "Fakultas : " << fakultas << endl;
    }
};

int main()
{
    Biodata biodataSaya("Muhammad Abdullah Azzam", "2400018214", 'D', "Informatika", "Teknologi Industri");
    biodataSaya.tampilkanBiodata();

    return 0;
}