Deskripsi Umum

Program ini berfungsi untuk menghitung nilai radius (jari-jari), diameter, keliling, dan luas sebuah lingkaran berdasarkan dua titik koordinat yang dimasukkan oleh pengguna.
Titik pertama dianggap sebagai pusat lingkaran, sedangkan titik kedua merupakan titik pada keliling lingkaran.
Perhitungan dilakukan dengan menggunakan rumus jarak Euclidean serta rumus-rumus dasar geometri lingkaran.

Program disusun dengan konsep modular programming, yaitu dengan memecah setiap proses perhitungan ke dalam fungsi yang terpisah agar lebih mudah dibaca, diuji, dan dikelola.

------------------Deskripsi Fungsi-Fungsi dalam Program-----------------------------

**1. Fungsi radiusfind()**
Fungsi ini digunakan untuk menghitung radius lingkaran berdasarkan dua koordinat yang diberikan.

Function Signature:
**double radiusfind(const std::vector<std::pair<double,double>>& r);**

Parameter:
r → sebuah vector yang berisi dua buah pasangan koordinat (x, y) bertipe double.​

Proses:
1. Mengambil dua titik dari vektor r[0] dan r[1].
2. Menghitung selisih koordinat x dan y.
3. Menerapkan rumus jarak Euclidean (pytagoras) menggunakan fungsi sqrt() dan pow() dari pustaka <cmath>.
4. Mengembalikan hasil sebagai nilai radius.


**2. Fungsi diameterfind()**
Digunakan untuk menghitung diameter lingkaran, dengan memanfaatkan hasil dari fungsi radiusfind().

Function Signature:
**double diameterfind(const std::vector<std::pair<double,double>>& d);**

Proses:
1. Memanggil fungsi radiusfind() untuk mendapatkan nilai radius.
2. Mengalikan hasil radius dengan dua.
3. Mengembalikan nilai diameter.

**3. Fungsi circumferencefind()**
Fungsi ini digunakan untuk menghitung keliling lingkaran.

Function Signature:
**double circumferencefind(const std::vector<std::pair<double,double>>& c);**

Proses:

1. Menghitung radius dengan memanggil radiusfind().
2. Mengalikan nilai radius dengan 2 × π (3.1416).
3. Mengembalikan nilai keliling.

**4. Fungsi areafind()**
Fungsi ini digunakan untuk menghitung luas lingkaran.

Function Signature:
**double areafind(const std::vector<std::pair<double,double>>& a);**

Proses:

1. Menghitung radius melalui pemanggilan fungsi radiusfind().
2. Mengkuadratkan radius dan mengalikannya dengan nilai π (3.1416).
3. Mengembalikan nilai luas.

**5. Fungsi main()**
Fungsi utama yang mengatur alur jalannya program dari awal hingga akhir.

Langkah-langkah proses di dalam main():
1. Membuat variabel **std::vector<std::pair<double,double>> k(2)** untuk menampung dua titik koordinat.
2. Mengambil input dari pengguna:

Titik tengah lingkaran (x₁, y₁)
Titik pada keliling lingkaran (x₂, y₂)

3. Memanggil keempat fungsi perhitungan:

radiusfind(k)
diameterfind(k)
circumferencefind(k)
areafind(k)

4, Menampilkan hasil perhitungan dengan format yang terstruktur:

=== HASIL PERHITUNGAN LINGKARAN ===
Radius       = ...
Diameter     = ...
Keliling     = ...
Luas         = ...

Konsep Pemrograman yang Diterapkan

Modular Programming:
Setiap perhitungan dilakukan oleh fungsi tersendiri agar kode lebih terorganisir.
Pass by Reference (const &):
Parameter fungsi dikirim sebagai referensi untuk menghindari duplikasi data.
Struktur Data Vector (Array dinamis) dan Pair:
Digunakan untuk menyimpan dua titik koordinat (x, y) secara efisien.
Pustaka <cmath>:
Menyediakan fungsi matematika seperti sqrt() dan pow() yang digunakan dalam perhitungan jarak dan luas.
