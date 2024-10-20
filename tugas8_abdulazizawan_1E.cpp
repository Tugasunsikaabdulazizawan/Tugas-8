#include <iostream>
#include <string>

using namespace std;

struct Zodiak {
    string nama;
    int mulai_bulan;
    int mulai_hari;
    int akhir_bulan;
    int akhir_hari;
};

int main() {
    Zodiak zodiak[] = {
        {"Capricorn", 1, 1, 1, 19},
        {"Aquarius", 1, 20, 2, 18},
        {"Pisces", 2, 19, 3, 20},
        {"Aries", 3, 21, 4, 19},
        {"Taurus", 4, 20, 5, 20},
        {"Gemini", 5, 21, 6, 20},
        {"Cancer", 6, 21, 7, 22},
        {"Leo", 7, 23, 8, 22},
        {"Virgo", 8, 23, 9, 22},
        {"Libra", 9, 23, 10, 22},
        {"Scorpio", 10, 23, 11, 21},
        {"Sagittarius", 11, 22, 12, 21},
        {"Capricorn", 12, 22, 12, 31} 
    };

    int day, month, year;
    cout << "Masukkan tanggal lahir Anda (dd-mm-yyyy): ";
    char dash;
    cin >> day >> dash >> month >> dash >> year;

    string zodiak_anda;
    bool found = false;

    for (const auto& z : zodiak) {
        if ((month == z.mulai_bulan && day >= z.mulai_hari) || 
            (month == z.akhir_bulan && day <= z.akhir_hari)) {
            zodiak_anda = z.nama;
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Tanggal lahir Anda: " << day << "-" << month << "-" << year
             << ", Zodiak Anda: " << zodiak_anda << endl;
    } else {
        cout << "Tanggal tidak valid." << endl;
    }

    return 0;
}
