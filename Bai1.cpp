#include <iostream>
using namespace std;
struct Phanso
{
    int tuso;
    int mauso;
};
void nhap(Phanso &x)
{
    cout<<"Nhap tu so: "<<endl;
    cin>>x.tuso;
    cout<<"Nhap mau so: "<<endl;
    cin>>x.mauso;
}
void xuat(Phanso x)
{
    cout<<x.tuso<<"/"<<x.mauso<<endl;
}
int UCLN(int a, int b)
{
    while(b != 0){
       int c = a % b;
        a = b;
        b = c;
    }
    return abs(a);
}
void rutgon(Phanso &ps)
{
    int ucln = UCLN(ps.tuso, ps.mauso);
    ps.tuso /= ucln;
    ps.mauso /= ucln;
    if(ps.mauso < 0){
        ps.tuso = -ps.tuso;
        ps.mauso = -ps.mauso;
    }
}
Phanso Tong(Phanso ps1, Phanso ps2)
{
    Phanso pst;
    pst.tuso = ps1.tuso*ps2.mauso + ps2.tuso*ps1.mauso;
    pst.mauso = ps1.mauso*ps2.mauso;
    rutgon(pst);
    return pst;
}
int main()
{
    Phanso ps1, ps2;
    cout<<"Nhap phan so thu nhat: "<<endl;
    nhap(ps1);
    cout<<"Nhap phan so thu hai: "<<endl;
    nhap(ps2);
    cout<<"Hai phan so vua nhap la: "<<endl;
    xuat(ps1);
    xuat(ps2);
    cout<<"Rut gon phan so thu nhat: "<<endl;
    rutgon(ps1);
    xuat(ps1);
    cout<<"Rut gon phan so thu hai: "<<endl;
    rutgon(ps2);
    xuat(ps2);
    cout<<"Tong hai phan so vua nhap la: "<<endl;
    xuat(Tong(ps1, ps2));
    return 0;
}
