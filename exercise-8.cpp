#include <iostream>
#include <vector>
#include <cmath>

// Fungsi untuk menghitung jarak dua titik → radius lingkaran
double radiusfind(const std::vector<std::pair<double,double>>& r) {
    double radius = sqrt(
        pow(r[1].first - r[0].first, 2) +
        pow(r[1].second - r[0].second, 2)
    );
    return radius;
}

// Diameter = 2 × radius
double diameterfind(const std::vector<std::pair<double,double>>& d) {
    double radius = radiusfind(d);
    return radius * 2;
}

// Keliling = 2 × pi × radius
double circumferencefind(const std::vector<std::pair<double,double>>& c) {
    double radius = radiusfind(c);
    return 2 * 3.1416 * radius;
}

// Luas = pi × r²
double areafind(const std::vector<std::pair<double,double>>& a) {
    double radius = radiusfind(a);
    return 3.1416 * radius * radius;
}

int main() {
    std::vector<std::pair<double,double>> k(2);

    std::cout << "Masukkan koordinat titik tengah lingkaran (x y): ";
    std::cin >> k[0].first >> k[0].second;

    std::cout << "Masukkan koordinat pada lingkaran (x y): ";
    std::cin >> k[1].first >> k[1].second;

    std::cout << "\n=== HASIL PERHITUNGAN LINGKARAN ===\n";
    std::cout << "Radius       = " << radiusfind(k) << std::endl;
    std::cout << "Diameter     = " << diameterfind(k) << std::endl;
    std::cout << "Keliling     = " << circumferencefind(k) << std::endl;
    std::cout << "Luas         = " << areafind(k) << std::endl;

    return 0;
}
