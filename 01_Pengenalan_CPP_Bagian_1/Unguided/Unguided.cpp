#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//soal no 1
/*
int main() {
    float bilangan1, bilangan2;

    // Input dua bilangan
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    // Menampilkan hasil operasi
    cout << fixed << setprecision(2); // Mengatur presisi desimal

    cout << "\nHasil operasi aritmatika:\n";
    cout << bilangan1 << " + " << bilangan2 << " = " << (bilangan1 + bilangan2) << endl;
    cout << bilangan1 << " - " << bilangan2 << " = " << (bilangan1 - bilangan2) << endl;
    cout << bilangan1 << " * " << bilangan2 << " = " << (bilangan1 * bilangan2) << endl;

    // Pengecekan pembagian dengan nol
    if (bilangan2 != 0) {
        cout << bilangan1 << " / " << bilangan2 << " = " << (bilangan1 / bilangan2) << endl;
    } else {
        cout << bilangan1 << " / " << bilangan2 << " = Undefined (pembagian dengan nol)" << endl;
    }

    return 0;
}
*/


//soal no 2
/*
string convertNumberToWords(int number) {
    static const string units[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};
    static const string tens[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh",
    "tujuh puluh", "delapan puluh", "sembilan puluh"};

    if (number == 0) return "nol";
    if (number <= 11) return units[number];
    if (number <= 19) return units[number % 10] + " belas";
    if (number <= 99) return tens[number / 10] + (number % 10 ? " " + units[number % 10] : "");
    return "seratus";
}
int main() {
    int number;
    cout << "Masukkan angka (0-100): ";
    cin >> number;

    if (number < 0 || number > 100) {
        cout << "Angka harus antara 0 dan 100." << endl;
        return 1;
    }
    cout << "Hasil konversi: " << convertNumberToWords(number) << endl;
    return 0;
}
*/

//soal no 3
/*
std::string generatePattern(int n) {
    std::string result;
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            result += std::to_string(j);
        }
        result += "*";
        for (int j = 1; j <= i; j++) {
            result += std::to_string(j);
        }
        result += (i > 1) ? "\n" : "";
    }
    return result;
}
int main() {
    int input;
    std::cout << "input: ";
    std::cin >> input;

    std::cout << "output:\n" << generatePattern(input) << "\n*\n";

    return 0;
}
*/


