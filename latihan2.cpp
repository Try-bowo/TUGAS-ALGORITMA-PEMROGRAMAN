#include <iostream>

using namespace std;

int main() {
    float nilai_kehadiran, nilai_tugas, nilai_kuis, nilai_uts, nilai_uas, nilai_akhir;
    
    // Input nilai
    cout << "Masukkan nilai kehadiran: ";
    cin >> nilai_kehadiran;
    cout << "Masukkan nilai tugas: ";
    cin >> nilai_tugas;
    cout << "Masukkan nilai kuis: ";
    cin >> nilai_kuis;
    cout << "Masukkan nilai UTS: ";
    cin >> nilai_uts;
    cout << "Masukkan nilai UAS: ";
    cin >> nilai_uas;

    // Hitung hasil nilai
    float hasil_nilai_kehadiran = nilai_kehadiran * 10 / 100;
    float hasil_nilai_tugas = nilai_tugas * 15 / 100;
    float hasil_nilai_kuis = nilai_kuis * 15 / 100;
    float hasil_nilai_uts = nilai_uts * 25 / 100;
    float hasil_nilai_uas = nilai_uas * 35 / 100;

    // Hitung nilai akhir
    nilai_akhir = hasil_nilai_kehadiran + hasil_nilai_tugas + hasil_nilai_kuis + hasil_nilai_uts + hasil_nilai_uas;

    // Tampilkan nilai akhir
    cout << "Nilai akhir: " << nilai_akhir << endl;

    // Tentukan nilai huruf
    char nilai_huruf;
    if (nilai_akhir >= 85 && nilai_akhir <= 100) {
        nilai_huruf = 'A';
    } else if (nilai_akhir >= 70 && nilai_akhir < 85) {
        nilai_huruf = 'B';
    } else if (nilai_akhir >= 60 && nilai_akhir < 70) {
        nilai_huruf = 'C';
    } else if (nilai_akhir >= 50 && nilai_akhir < 60) {
        nilai_huruf = 'D';
    } else if (nilai_akhir >= 0 && nilai_akhir < 50) {
        nilai_huruf = 'E';
    } else {
        nilai_huruf = 'X'; // Invalid value
    }

    // Tampilkan nilai huruf
    cout << "Nilai huruf: " << nilai_huruf << endl;

    return 0;
}
