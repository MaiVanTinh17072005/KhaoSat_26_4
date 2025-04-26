#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    bool validInput = false;
    
    do {
        cout << "Nhap so phan tu n: ";
        if (cin >> n) {
            if (n > 0) {
                validInput = true;
            } else {
                cout << "n > 0. Vui long nhap lai!\n";
            }
        } else {
            cout << "Vui long nhap so nguyen!\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (!validInput);
    
    // Array input
    int arr[n];
    cout << "Nhap " << n << " so nguyen:\n";
    for(int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    set<int> uniqueValues;
    for(int i = 0; i < n; i++) {
        uniqueValues.insert(arr[i]);
    }
    
    cout << "So luong gia tri phan biet trong mang: " << uniqueValues.size();
    
    return 0;
}