#include<iostream>
#include"nv.h"
using namespace std;
#ifndef nvkd_h
#define nvkd_h
class  nhanvienkinhdoanh :  public nhanvien {
  protected:
  int doanhsobanhang;
  public:
nhanvienkinhdoanh(string ht = "", int ns = 0, string ma = "", double lcb = 0.0, int dsb = 0): nhanvien(ht, ns, ma, lcb), doanhsobanhang(dsb) {}
 virtual void xuat () override;
double tinhluong() override;
};
#endif 