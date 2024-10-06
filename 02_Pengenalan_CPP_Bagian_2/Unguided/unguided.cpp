#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> array;
    vector<int> genap;
    vector<int> ganjil;
    int input;

    cout << "Masukkan 10 angka:\n";
    for(int i = 0; i < 10; i++) {
        cin >> input;
        array.push_back(input);

        if(input % 2 == 0) {
            genap.push_back(input);
        } else {
            ganjil.push_back(input);
        }
    }

    cout << "Data Array : ";
    for(int i = 0; i < array.size(); i++) {
        cout << array[i];
        if(i < array.size() - 1) cout << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for(int i = 0; i < genap.size(); i++) {
        cout << genap[i];
        cout << ", ";
    }
    cout << endl;

    cout << "Nomor Ganjil : ";
    for(int i = 0; i < ganjil.size(); i++) {
        cout << ganjil[i];
        cout << ", ";
    }
    cout << endl;

    return 0;
}
