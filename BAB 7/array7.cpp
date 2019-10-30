#include <iostream>
using namespace std;

int main()
{
    cout << "Nama : Nur Alamsyah " << endl;
    cout << "NIM : 0630020 " << endl << endl;

    int A [2] [4] = {1,2,3,4,5,6,7,8};

    int i,j;

    cout << "Aplikasi matriks ordo 2 x4 " << endl;
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            //menampilkan hasil indeks i dan j
            cout << "A [" << i << "] [" << j << "] = " << A [i] [j] << endl;

    }
    cout << endl;
    }
    return 0;
}
