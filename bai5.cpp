#include <iostream>
using namespace std;

// Đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    bool validInput = false;

    // Nhập n hợp lệ
    do {
        cout << "Nhap n (1 <= n <= 30): ";
        if (cin >> n) {
            if (n > 0 && n <= 30) {
                validInput = true;
            } else {
                cout << "n phai > 0 va <= 30. Vui long nhap lai!\n";
            }
        } else {
            cout << "Vui long nhap so nguyen!\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (!validInput);

    // In dãy Fibonacci từ F(1) đến F(n)
    cout << "Day Fibonacci tu F(1) den F(" << n << "):\n";
    for (int i = 1; i <= n; i++) {
        cout << "F(" << i << ") = " << fibonacci(i);
        if (i < n) cout << ", ";
    }
    cout << endl;

    return 0;
}
