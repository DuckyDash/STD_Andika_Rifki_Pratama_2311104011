#include "Kerucut.h"
#include <cmath>

Kerucut createKerucut(double r, double t) {
    Kerucut k;
    k.jariJari = r;
    k.tinggi = t;
    return k;
}

double hitungVolume(Kerucut k) {
    return (1.0 / 3.0) * M_PI * pow(k.jariJari, 2) * k.tinggi;
}

double hitungLuasPermukaan(Kerucut k) {
    double s = sqrt(pow(k.jariJari, 2) + pow(k.tinggi, 2));
    return M_PI * k.jariJari * (k.jariJari + s);
}
