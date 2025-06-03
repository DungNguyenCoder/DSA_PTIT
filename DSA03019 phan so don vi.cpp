#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

struct PhanSo {
    int tu;
    int mau;
    double giaTri;

    void rutGon() {
        int g = gcd(tu, mau);
        tu /= g;
        mau /= g;
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }

    PhanSo operator+(const PhanSo& other) const {
        PhanSo res;
        res.tu = tu * other.mau + other.tu * mau;
        res.mau = mau * other.mau;
        res.rutGon();
        return res;
    }

    PhanSo operator-(const PhanSo& other) const {
        PhanSo res;
        res.tu = tu * other.mau - other.tu * mau;
        res.mau = mau * other.mau;
        res.rutGon();
        res.giaTri = 1.0 * res.tu / res.mau;
        return res;
    }

    friend istream& operator>>(istream& in, PhanSo& ps) {
        in >> ps.tu >> ps.mau;
        ps.giaTri = 1.0 * ps.tu / ps.mau;
        return in;
    }

    friend ostream& operator<<(ostream& out, const PhanSo& ps) {
        out << ps.tu << "/" << ps.mau;
        return out;
    }
};


inline void solution() {
    PhanSo a;
    cin >> a;
    int mauMin = 2;
    PhanSo phanSoDonVi;
    while(a.tu != 0) {
        while(1) {
            phanSoDonVi.tu = 1;
            phanSoDonVi.mau = mauMin;
            phanSoDonVi.giaTri = 1.0 * phanSoDonVi.tu / phanSoDonVi.mau;
            if(phanSoDonVi.giaTri <= a.giaTri) {
                a = a - phanSoDonVi;
            }   
        }
    }
}

int main() {
    faster();
    int t;
    if(TEST) {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--) {
        solution();
    }
}