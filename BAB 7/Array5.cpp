#include <iostream>
using namespace std;

int main()
{
    int A[7];
    int J, K, C, temp;

    cout <<"Masukan nilai elemen Array : " << endl;
    for (C=0; C<7; C++)
    {
        //Menginput elemen array
        cout <<"A[" << C << "] = ";
        cin >> A[C];
    }
    cout << "\nNilai element array sebelum diurutkan : " <<endl;
    for (C=0; C<7; C++)
    {
        cout <<"A[" << C << "] = " << A[C] << endl;
    }
    // Pengurutan metode maksimum - minimum
    int Jmaks, U=6;
    for (J=0; J<6; J++)
    {
        Jmaks = 0;
        for (K=1; K<U; K++)
        {
            if (A[K] > A[Jmaks])
            {
                Jmaks = K;
            }
        }
        // penukaran nilai elemnet array
        temp = A[U];
        A[U] = A[Jmaks];
        A[Jmaks] + temp;
        U--;
    }
    cout << "\n Nilai element setelah diurutkan : " << endl;
    for (C=0; C<7; C++)
    {
        cout << "A[" << C << "] = " << A[C] << endl;
    }
    return 0;

}

