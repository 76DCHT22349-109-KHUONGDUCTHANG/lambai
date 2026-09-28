#include<iostream>
#include<string>
#ifndef ng_h
#define ng_h

using namespace std;
class nguoi{
    protected:
    string hoten;
    int namsinh;
    public:
   nguoi(string t=" ", int nsi=0) : hoten(t), namsinh(nsi) {}
    virtual void xuat();
};
#endif