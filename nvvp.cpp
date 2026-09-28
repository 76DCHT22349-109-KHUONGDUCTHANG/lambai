#include<iostream>
#include"nv.h"
#include"nvvp.h"
using namespace std;
double nhanvienvanphong::tinhluong(){
   return luongcoban+songaylamviec*200000;
}
void nhanvienvanphong::xuat(){
    nhanvien::xuat();
    cout<<"luong nhan vien:"<<tinhluong()<<endl;
}
