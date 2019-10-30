#include <iostream>
using namespace std;

int main()
{
    typedef int Matriks [3] [2];
    Matriks A, B, C;
    int J, K;

    //Nilai pada element A
    cout << "Matriks A : " << endl;
    for (J=0; J<3; J++)
    {
        for (K=0; K<3; K++)
    {
        cout << "A [" << J << "] ["<< K <<"] = "; //menapilkan hasil input matriks
            cin >> A [J] [K]; //inputan dari matriks A
    }
    }
    cout << endl;
    //Nilai pada elemet B
    cout << "Matriks B : " << endl;
    for (J=0; J<3; J++)
    {
        for (K=0; K<2; K++)
        {
            cout << "B [" << J << "] [" << K << "] = ";
                cin >>B [J] [K];
        }
    }
    cout << endl;
    cout << endl;

    // proses penjumalahan A dan B
    for (J=0; J<3; J++)
    {
        for (K=0; K<2; K++)
        {
            C [J] [K] = A [J] [K] + B[J] [K];
        }
    }
    // menampilkan hasil penjumlahan
    cout << "Hasil penjumlahna matriks :" << endl;
    for (J=0; J<3; J++)
    {
        for (K=0; K<2; K++)
        {
            cout <<" C ["<< J <<"] ["<< K <<"] = " << C [J][K] <<endl;

        }
    }
    cout << endl;
    return 0;

}
