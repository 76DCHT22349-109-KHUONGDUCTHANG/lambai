#include<iostream>
#include"nv.h"
#include"quanly.h"
#include"ng.h"
#include"trph.h"
using namespace std;
void truongphong:: xuat(){
    nguoi::xuat();
     cout<<"phu cap la :"<<phucap<<endl;
     cout<<" ma nhan vien la :"<<manv<<endl;
     cout<<"luong co ban:"<<luongcoban<<endl;
     cout<<"tien luong:"<<tinhluong()<<endl;
}
double truongphong:: tinhluong(){
    return luongcoban+phucap+sonamkn * 500000;
}