#include <iostream>
#include "ng.h"
#include "nv.h"
#include "nvvp.h"
#include "nvkd.h"
#include "quanly.h"
#include "trph.h"
using namespace std;

int main() {
    int n;
    cout << "Nhap vao so nhan vien: ";
    cin >> n;

   
    nhanvien** ds = new nhanvien*[n];

    for (int i = 0; i < n; i++) {
        int loai;
        cout << "\nChon loai nhan vien (1: Van phong, 2: Kinh doanh, 3: Truong phong): ";
        cin >> loai;

        string t, ma;
        int nsi, nam;
        double luong, pc;

        cin.ignore();
        cout << "Nhap ho va ten: ";
        getline(cin,t);
        cout << "Nhap nam sinh: ";
        cin >> nsi;

        if (loai == 1) {
            cout << "Nhap ma NV: ";
            cin >> ma;
            cout << "Nhap luong co ban: ";
            cin >> luong;
            ds[i] = new nhanvienkinhdoanh(t, nsi, ma, luong);
        } else if (loai == 2) {
            cout << "Nhap ma NV: ";
            cin >> ma;
            cout << "Nhap luong co ban: ";
            cin >> luong;
            ds[i] = new nhanvienkinhdoanh(t, nsi, ma, luong);
        } else if (loai == 3) {
            cout << "Nhap ma NV: ";
            cin >> ma;
            cout << "Nhap luong co ban: ";
            cin >> luong;
            cout << "Nhap phu cap quan ly: ";
            cin >> pc;
            cout << "Nhap so nam kinh nghiem: ";
            cin >>nam;
            ds[i] = new truongphong(t, nsi, pc, ma, luong, nam);
        }
    }

    cout << "danh sach nhan vien ";
    for (int i = 0; i < n; i++) {
        ds[i]->xuat();
        cout << "";
    }

    for (int i = 0; i < n; i++) {
        delete ds[i];
    }
    delete[] ds;

    return 0;
}
