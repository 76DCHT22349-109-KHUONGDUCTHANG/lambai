#include<iostream>
#include<string>
#include"ng.h"
using namespace std;
#ifndef quanly_h
#define quanly_h
 class ql : virtual public nguoi{
   protected:
   double phucap;
   public :
   ql (string t=" ", int nsi=0,double pc=0 ): nguoi(t,nsi),phucap(pc){}
   virtual void xuat ()override;
 };
#endif