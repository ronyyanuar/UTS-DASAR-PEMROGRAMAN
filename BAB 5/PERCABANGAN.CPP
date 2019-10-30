#include <iostream>
#include <strmif.h>

using namespace std;

int main()
{
    cout <<"kelulusan siswa \n \n";

    double Nilai_Ujian;

    cout <<"Masukan nilai ujian : ";
    cin >> Nilai_Ujian;
    cout << endl;

    char Hasil_Ujian[12] = "Tidak Lulus";
    if(Nilai_Ujian >= 60)
    strcpy (Hasil_Ujian, "Lulus");

    cout <<"Hasil_Ujian : ";
    cout << Hasil_Ujian;
    cout << endl <<endl;
    return 0;
}
