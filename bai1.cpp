#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool laSoNguyenTo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cout << "Nhap so nguyen duong N: ";
    cin >> N;
    if (N <= 2) {
        cout << "Khong co so nguyen to" << endl;
    } else {
        cout << "Cac so nguyen to nho hon " << N << " la: ";
        for (int i = 2; i < N; i++) {
            if (laSoNguyenTo(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
