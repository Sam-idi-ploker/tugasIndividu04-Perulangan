
#include <iostream>
using namespace std;

int main(){
    int n;
    int jumlahGanjil = 0;
    int jumlahGenap = 0;

    // Peintah masukkan jumlah data
    cout << "Masukkan jumlah data: ";
    cin >> n;

    // Memastikan input benar (0-10)
    if (n < 0 || n > 10) {
        cout << "Error: Jumlah data harus antara 0 sampai 10!" << "\n";
        return 0;
    }

    cout << "Masukkan " << n << " bilangan:" << "\n";

    // Menggunakan perulangan untuk input data
    for (int i = 0; i < n; i++) {
        int data;
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> data;

        // Memeriksa apakah bilangan genap atau ganjil
        if (data % 2 == 0) {
            jumlahGenap += data;  // Tambahkan ke jumlah bilangan genap
        }
        else {
            jumlahGanjil += data; // Tambahkan ke jumlah bilangan ganjil
        }
    }

    // Menampilakan Hasil
    cout << "=== HASIL PERHITUNGAN ===" << "\n";
    cout << "Jumlah bilangan ganjil: " << jumlahGanjil << "\n";
    cout << "Jumlah bilangan genap: " << jumlahGenap << "\n";

    return 0;
}