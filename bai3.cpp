#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct SinhVien {
    string ten;
    float diemToan;
    float diemLy;
    float diemHoa;
    float diemTB;
};

int main() {
    int n;
    bool validInput = false;
    
    // Input validation for n
    do {
        cout << "Nhap so luong sinh vien: ";
        if (cin >> n) {
            if (n > 0) {
                validInput = true;
            } else {
                cout << "So luong sinh vien phai lon hon 0. Vui long nhap lai!\n";
            }
        } else {
            cout << "Vui long nhap so nguyen!\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (!validInput);
    
    SinhVien dsSV[n];
    cin.ignore();
    
    // Manual input for each student
    for(int i = 0; i < n; i++) {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        cout << "Ten: ";
        getline(cin, dsSV[i].ten);
        cout << "Diem Toan: ";
        cin >> dsSV[i].diemToan;
        cout << "Diem Ly: ";
        cin >> dsSV[i].diemLy;
        cout << "Diem Hoa: ";
        cin >> dsSV[i].diemHoa;
        cin.ignore();
    }
    
    // Calculate and display average scores
    cout << "\nDanh sach sinh vien va diem trung binh:\n";
    cout << setprecision(2) << fixed;
    
    for(int i = 0; i < n; i++) {
        dsSV[i].diemTB = (dsSV[i].diemToan + dsSV[i].diemLy + dsSV[i].diemHoa) / 3;
        cout << "Sinh vien: " << dsSV[i].ten 
             << ", Diem TB: " << dsSV[i].diemTB << endl;
    }
    
    // Display students with average score >= 8
    cout << "\nSinh vien co diem trung binh >= 8:\n";
    bool found = false;
    
    for(int i = 0; i < n; i++) {
        if(dsSV[i].diemTB >= 8) {
            found = true;
            cout << "Ten: " << dsSV[i].ten << endl
                 << "Diem Toan: " << dsSV[i].diemToan << endl
                 << "Diem Ly: " << dsSV[i].diemLy << endl
                 << "Diem Hoa: " << dsSV[i].diemHoa << endl
                 << "Diem TB: " << dsSV[i].diemTB << endl
                 << "------------------------\n";
        }
    }
    
    if(!found) {
        cout << "Khong co sinh vien nao co diem trung binh >= 8\n";
    }
    
    return 0;
}