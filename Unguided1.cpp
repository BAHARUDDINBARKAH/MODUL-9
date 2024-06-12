#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main() {
    int jumlah_simpul;

    cout << "Silakan masukan jumlah simpul : "; 
    cin >> jumlah_simpul;
    cin.ignore();

    vector<string> nama_simpul(jumlah_simpul);

    cout << "Silakan masukan nama simpul\n"; 
    for (int i = 0; i < jumlah_simpul; i++) { 
        cout << "Simpul " << i + 1 << " : "; 
        getline(cin, nama_simpul[i]);
    }

    vector<vector<int>> simpul(jumlah_simpul, vector<int>(jumlah_simpul));
    cout << "Silakan masukkan bobot antar simpul\n";

    for (int i = 0; i < jumlah_simpul; i++) {
        for (int k = 0; k < jumlah_simpul; k++) {
            cout << nama_simpul[i] << " --> " << nama_simpul[k] << " = ";
            cin >> simpul[i][k];
        }
    }

    int formatting = nama_simpul[0].length() + 1; 
    for (int i = 0; i < jumlah_simpul - 1; i++) {
        if (nama_simpul[i].length() < nama_simpul[i + 1].length()) {
            formatting = nama_simpul[i + 1].length() + 1;
        }
    }

    cout << left << setw(formatting) << " "; 
    for (int i = 0; i < jumlah_simpul; i++) {
        cout << left << setw(nama_simpul[i].length()) << nama_simpul[i] << " ";
    }
    cout << endl;

    // Menghitung BaharuddinBarkahPratama_2311102321
    int BaharuddinBarkahPratama_2311102321 = jumlah_simpul;

    // Print matrix
    for (int i = 0; i < jumlah_simpul; i++) {
        cout << left << setw(formatting) << nama_simpul[i];
        for (int k = 0; k < BaharuddinBarkahPratama_2311102321; k++) {
            cout << right << setw(nama_simpul[k].length()) << simpul[i][k] << " ";
        }
        cout << endl;
    }

    return 0;
}
