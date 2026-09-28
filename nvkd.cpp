#include<iostream>
#include"nv.h"
#include"nvkd.h"
void nhanvienkinhdoanh::xuat(){
    nhanvien::xuat();
    cout<<"luong cua nhan vien:"<<tinhluong()<<endl;

}
 double nhanvienkinhdoanh::tinhluong(){
    return luongcoban+doanhsobanhang*0.1;
}