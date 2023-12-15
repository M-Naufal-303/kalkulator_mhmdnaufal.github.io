#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Memfaktorkan persamaan kuadrat
    cout << "PROGRAM KALKULATOR PENYELESAIAN KALKULUS" << endl;
    cout << "Memfaktorkan persamaan kuadrat" << endl;

    // PROGRAM PEMFAKTORAN PERSAMAAN KUADRAT
    cout << "PEMFAKTORAN PERSAMAAN DAN PERTIDAKSAMAAN KUADRAT" << endl;
    cout << "Dengan syarat diubah terlebih dahulu ke dalam bentuk umum" << endl;
    cout << "Bentuk umum persamaan kuadrat ax^2 + bx + c" << endl;

    // Menggunakan tipe data float untuk koefisien
    float a, b, c, diskriminan, x1, x2;

    // Input nilai koefisien dari pengguna
    cout << "Masukkan nilai koefisien a: ";
    cin >> a;
    cout << "Masukkan nilai koefisien b: ";
    cin >> b;
    cout << "Masukkan nilai koefisien c: ";
    cin >> c;

    // Menghitung diskriminan
    diskriminan = (b * b - 4 * a * c);

    if (diskriminan >= 0) {
        // Kondisi jika diskriminan lebih dari atau sama dengan 0
        x1 = (-b + sqrt(diskriminan)) / (2 * a);
        x2 = (-b - sqrt(diskriminan)) / (2 * a);

        // Menampilkan akar real
        cout << "Akar 1 (x1) = " << x1 << endl;
        cout << "Akar 2 (x2) = " << x2 << endl;
    } else {
        // Kondisi jika diskriminan kurang dari 0
        cout << "Akar bersifat imajiner!!!" << endl;
    }

    // Mengakhiri program
    return 0;
}
