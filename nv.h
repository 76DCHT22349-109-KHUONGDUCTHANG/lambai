#include<iostream>
#include<string>
#include"ng.h"
#ifndef nv_h
#define nv_h
class nhanvien : virtual public nguoi {
  protected:
  string manv;
  double luongcoban;
  public :
  nhanvien ( string  t=" ",int nsi=0,string ma=" ",double luong=0):nguoi(t,nsi),manv(ma),luongcoban(luong){}
  virtual void xuat() override ;
  virtual double tinhluong() = 0;
};
#endif