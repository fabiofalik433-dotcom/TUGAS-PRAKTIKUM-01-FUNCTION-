# Program Hitung Rata-rata (Average Calculator)

Program sederhana berbasis C++ untuk menghitung rata-rata dari 3 angka yang diinputkan oleh pengguna.

## Deskripsi

Program ini meminta pengguna untuk memasukkan 3 buah angka, kemudian menghitung dan menampilkan:
- Jumlah total dari ketiga angka
- Banyaknya data yang diinput
- Nilai rata-rata (average)

## Fitur

- Input 3 data angka integer
- Perhitungan otomatis jumlah dan rata-rata
- Output yang jelas dan informatif
- Menggunakan function terpisah untuk modularitas kode

## Cara Kompilasi

### Menggunakan g++
```bash
g++ Tugas01FunctionFalik.cpp -o average
```

### Menggunakan kompiler C++ lainnya
```bash
c++ Tugas01FunctionFalik.cpp -o average
```

## Cara Menjalankan

### Di Linux/Mac
```bash
./average
```

### Di Windows
```bash
average.exe
```

## Contoh Penggunaan

```
Masukkan data
10
20
30
Jumlah Angka = 60
Banyak Data = 3
Rata-ratanya = 20
```

## Struktur Program

### Function yang digunakan:

1. **`main()`**
   - Menginisialisasi variabel
   - Meminta input dari pengguna sebanyak 3 kali
   - Menghitung jumlah total dan banyak data
   - Memanggil function `hitungAverage()`

2. **`hitungAverage(int jumlah, int banyakData)`**
   - Menerima parameter jumlah dan banyak data
   - Menghitung rata-rata dengan type casting ke double
   - Menampilkan hasil perhitungan

## Teknologi

- **Bahasa**: C++
- **Compiler**: Kompatibel dengan g++, clang++, dan kompiler C++ standar lainnya
- **Standard**: C++11 atau lebih baru

## Catatan

- Program saat ini di-hardcode untuk menerima 3 input data
- Hasil rata-rata ditampilkan dalam format desimal (double)
- Type casting digunakan untuk memastikan hasil pembagian akurat

## Pengembangan Lebih Lanjut

Beberapa ide untuk pengembangan:
- Menambahkan validasi input
- Membuat jumlah data menjadi dinamis (bisa lebih dari 3)
- Menambahkan fitur untuk menghitung median dan modus
- Menambahkan error handling untuk input yang tidak valid
