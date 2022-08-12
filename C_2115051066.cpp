#include <iostream>
using namespace std;

int main ()
{
	int menu, jumlah, harga, dibayar, total;
	
	cout << " === Program Kasir === " <<endl;
	cout << " --- Selamat Datang Di Restoran Chinese Food ---\n" <<endl;
	cout << " ==== Menu ================ Harga ===\n" <<endl;
	cout << " 1. Fuyunghai            Rp. 50000" <<endl;
	cout << " 2. Mapo Tofu            Rp. 35000" <<endl;
	cout << " 3. Pudding Ala mode     Rp. 25000" <<endl;
	cout << " 4. Capcay               Rp. 15000" <<endl;
	cout << endl;
	
	cout << "Silahkan Pilih Menu Yang Ada Diatas =";
	cin >> menu;
	
	switch (menu) 
	{
		case 1:
			cout << "Anda Memesan Menu Fuyunghai\n" <<endl;
			harga = 50000;
			cout << "Masukkan Jumlah Pesanan = ";
			cin >> jumlah;
			cout << endl;
			total = jumlah*harga;
			cout << "Total Harga Menu Yang Anda Pesan Yaitu = " << total <<endl;
			cout << "Anda Membayar = ";
			cin >>dibayar;
			cout <<endl;
			cout << "Kembalian = " << dibayar - total <<endl;
			break;
		case 2:
			cout << "Anda Memesan Menu Mapo Tofu\n" <<endl;
			harga = 35000;
			cout << "Masukkan Jumlah Pesanan = ";
			cin >> jumlah;
			cout << endl;
			total = jumlah*harga;
			cout << "Total Harga Menu Yang Anda Pesan Yaitu = " << total <<endl;
			cout << "Anda Membayar = ";
			cin >>dibayar;
			cout <<endl;
			cout << "Kembalian = " << dibayar - total <<endl;
			break;
		case 3:
			cout << "Anda Memesan Menu Pudding Ala Mode\n" <<endl;
			harga = 25000;
			cout << "Masukkan Jumlah Pesanan = ";
			cin >> jumlah;
			cout << endl;
			total = jumlah*harga;
			cout << "Total Harga Menu Yang Anda Pesan Yaitu = " << total <<endl;
			cout << "Anda Membayar = ";
			cin >>dibayar;
			cout <<endl;
			cout << "Kembalian = " << dibayar - total <<endl;
			break;
		case 4:
			cout << "Anda Memesan Menu Capcay\n" <<endl;
			harga = 15000;
			cout << "Masukkan Jumlah Pesanan = ";
			cin >> jumlah;
			cout << endl;
			total = jumlah*harga;
			cout << "Total Harga Menu Yang Anda Pesan Yaitu = " << total <<endl;
			cout << "Anda Membayar = ";
			cin >>dibayar;
			cout <<endl;
			cout << "Kembalian = " << dibayar - total <<endl;
			break;
		default:
			cout << "Menu Yang Anda Pilih tidak Tersedia Di List" <<endl;
	}
	cout << "Terima Kasih Telah Menikmati Menu Kami. Silahkan Datang Kembali" <<endl;
	
	return 0;
}
