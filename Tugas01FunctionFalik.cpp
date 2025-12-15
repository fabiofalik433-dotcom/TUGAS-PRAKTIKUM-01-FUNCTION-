#include <iostream>

// Function declaration
void hitungAverage(int jumlah, int banyakData);

int main() {
    int input = 0;
    int jumlah = 0;
    int banyakData = 0;

    std::cout << "Masukkan data" << std::endl;

    for (int i = 0; i < 3; ++i) {
        std::cin >> input;
        jumlah += input;
        banyakData++;
    }

    hitungAverage(jumlah, banyakData);

    return 0;
}

void hitungAverage(int jumlah, int banyakData) {
    double rata;
    rata = static_cast<double>(jumlah) / banyakData;
    std::cout << "Jumlah Angka = " << jumlah << std::endl;
    std::cout << "Banyak Data = " << banyakData << std::endl;
    std::cout << "Rata-ratanya = " << rata << std::endl;
}
