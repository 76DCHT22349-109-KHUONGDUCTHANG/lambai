#include<iostream>
#include"nv.h"
#include"quanly.h"
#include"ng.h"
#ifndef trph_h
#define trph_h
using namespace std;
class truongphong :  public nhanvien, public ql{
    protected:
    int sonamkn;
    public:
void xuat() override ;
truongphong(string t=" ", int nsi=0,double pc=0,string ma=" ",double luong=0,int nam=0):nguoi(t,nsi),ql(t,nsi,pc),nhanvien(t, nsi, ma, luong),sonamkn(nam){}
 double tinhluong() override ;
};
#endif