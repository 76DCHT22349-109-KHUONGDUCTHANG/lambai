#include<iostream>
#include"nv.h"
using namespace std;
#ifndef nvvp_h
#define nvvp_h
class  nhanvienvanphong :  public nhanvien {
  protected:
  int songaylamviec;
  public:
nhanvienvanphong(string ht = "", int ns = 0, string ma = "", double lcb = 0.0, int snl = 0): nhanvien(ht, ns, ma, lcb), songaylamviec(snl) {}
 virtual void xuat () override;
double tinhluong() override;
};
#endif 