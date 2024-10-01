#include <iostream>
using namespace std;

// Fungsi void untuk menghitung dan menampilkan gaji pokok
void pokok(int jamKerja, int &gajiPokok) {
    gajiPokok = 7500 * (jamKerja > 8 ? 8 : jamKerja);
}

// Fungsi void untuk menghitung dan menampilkan gaji lembur
void lembur(int jamKerja, int &gajiLembur) {
    int jamLembur = (jamKerja > 8) ? (jamKerja - 8) : 0;
    gajiLembur = 1.5 * 7500 * jamLembur;
}

// Fungsi void untuk menghitung dan menampilkan uang makan
void makan(int jamKerja, int &uangMakan) {
    if (jamKerja >= 9) {
        uangMakan = 10000;
    } else {
        uangMakan = 0;
    }
}

// Fungsi void untuk menghitung dan menampilkan uang transport lembur
void transport(int jamKerja, int &uangTransport) {
    if (jamKerja >= 10) {
        uangTransport = 13000;
    } else {
        uangTransport = 0;
    }
}

int main() {

    cout<<"Tugas Praktikum 5 Alpro"<<endl<<endl;
    cout<<"Nama       : Defry Ananta Perangin Angin"<<endl;
    cout<<"NPM        : 2410631170066"<<endl;
    cout<<"Kelas/Prodi: 1B/Informatika"<<endl<<endl;
    cout<<"Program Perhitungan Gaji Harian PT. XYZ"<<endl<<endl;

    string NIP, Nama;
    int jamKerja;
    int gajiPokok, gajiLembur, uangMakan, uangTransport, totalGaji;
    char ulang;


    do {
        // Input NIP, Nama, dan Jam Kerja
        cout << "Masukkan NIP: ";
        cin >> NIP;
        cin.ignore(); // Mengabaikan karakter newline (enter) setelah NIP

        cout << "Masukkan Nama: ";
        getline(cin, Nama); // Menggunakan getline untuk mengambil seluruh baris input nama

        cout << "Masukkan jumlah jam kerja: ";
        cin >> jamKerja;

        // Memanggil fungsi untuk menghitung gaji
        pokok(jamKerja, gajiPokok);
        lembur(jamKerja, gajiLembur);
        makan(jamKerja, uangMakan);
        transport(jamKerja, uangTransport);

        // Menghitung total gaji
        totalGaji = gajiPokok + gajiLembur + uangMakan + uangTransport;

        // Output hasil
        cout << "\nNIP: " << NIP << endl;
        cout << "Nama: " << Nama << endl;
        cout << "Gaji Pokok: Rp. " << gajiPokok << endl;
        cout << "Gaji Lembur: Rp. " << gajiLembur << endl;
        cout << "Uang Makan: Rp. " << uangMakan << endl;
        cout << "Uang Transport: Rp. " << uangTransport << endl;
        cout << "Total Gaji: Rp. " << totalGaji << endl;

        // Tanya apakah ingin mengulang program
        cout << "\nApakah Anda ingin menghitung gaji lagi? (y/n): ";
        cin >> ulang;

        cout << endl;

    } while (ulang == 'y' || ulang == 'Y'); // Looping jika user memasukkan 'y' atau 'Y'

    cout << "Program selesai.\n";
    return 0;
}
