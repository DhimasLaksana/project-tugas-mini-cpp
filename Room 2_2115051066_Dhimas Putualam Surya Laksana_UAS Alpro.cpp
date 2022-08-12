#include <iostream>
#include <cstdio>

using namespace std;

double mean(int a[], int jumlahIndeks)
{
    double hasil = 0;
    for (int i = 0; i < jumlahIndeks; i++)
    {
        hasil += a[i];
    }
    return hasil / jumlahIndeks;
}

int main()
{
    int jumlahSiswa;
    cout << "Masukkan Jumlah Siswa : ";
	cin >> jumlahSiswa;
	cout << endl;
    int nilai[jumlahSiswa];
    for (int i = 0; i < jumlahSiswa; i++)
    {
        cout << "Masukkan Nilai Siswa ke-" << i + 1 << " : ";
		cin >> nilai[i];
    }
    cout << endl;
    cout << "Nilai Rata-Rata Kelas : " << mean(nilai, jumlahSiswa) << endl;
    
    //Jumlah Nilai Murid yang diatas rata-rata
    int jumlahSiswaAtasRataRata = 0;
    for (int i = 0; i < jumlahSiswa; i++)
    {
        if (nilai[i] > mean(nilai, jumlahSiswa))
        {
            jumlahSiswaAtasRataRata++;
        }
    }
    cout << "Jumlah Siswa yang Nilainya di atas rata-rata : " << jumlahSiswaAtasRataRata << endl;
    
    //Jumlah Nilai Murid yang di bawah rata-rata
    int jumlahSiswaBawahRataRata = 0;
    for (int i = 0; i < jumlahSiswa; i++)
    {
        if (nilai[i] < mean(nilai, jumlahSiswa))
        {
            jumlahSiswaBawahRataRata++;
        }
    }
    cout << "Jumlah Siswa yang Nilainya di bawah rata-rata : " << jumlahSiswaBawahRataRata << endl;
    return 0;
}
