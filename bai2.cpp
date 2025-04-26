

#include <iostream>
using namespace std;
int main() {
    int n;
    bool validInput = false;
    
    // Nhâp n
    do {
        cout << "Nhap so phan tu n: ";
        if (cin >> n) {
            if (n > 0) {
                validInput = true;
            } else {
                cout << "n phai lon hon 0. Vui long nhap lai!\n";
            }
        } else {
            cout << "Vui long nhap so nguyen!\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (!validInput);
    
    int arr[n];
    cout << "Nhap " << n << " so nguyen:\n";
    for(int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    
 
    bool found = false;
    int maxDiv3 = arr[0];
    
    for(int i = 0; i < n; i++) {
        if(arr[i] % 3 == 0) {
            if(!found) {
                maxDiv3 = arr[i];
                found = true;
            } else if(arr[i] > maxDiv3) {
                maxDiv3 = arr[i];
            }
        }
    }
   
    if(found) {
        cout << "So lon nhat chia het cho 3 la: " << maxDiv3;
    } else {
        cout << "Khong co";
    }
    
    return 0;
}
