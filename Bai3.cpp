#include <iostream>
using namespace std;
struct Dathuc
{
    int a;
    int b;
    int c;
};
void Nhap(Dathuc &dt)
{
    cout<<"Nhap he so cua x^2: "<<endl;
    cin>>dt.a;
    cout<<"Nhap he so cua x: "<<endl;
    cin>>dt.b;
    cout<<"Nhap hang so tu do: "<<endl;
    cin>>dt.c;
}
void Xuat(Dathuc dt)
{
    cout<<dt.a<<"x^2";
    if(dt.b >= 0){
        cout<<" + "<<dt.b<<"x";
    }
    else{
        cout<<" - "<<-dt.b<<"x";
    }
    if(dt.c >= 0){
        cout<<" + "<<dt.c;
    }
    else{
        cout<<" - "<<-dt.c;
    }
    cout<<endl;
}
Dathuc Tong(Dathuc &dt1, Dathuc &dt2)
{
    Dathuc dttong;
    dttong.a = dt1.a + dt2.a;
    dttong.b = dt1.b + dt2.b;
    dttong.c = dt1.c + dt2.c;
        return dttong;
}
Dathuc Hieu(Dathuc &dt1, Dathuc &dt2)
{
    Dathuc dthieu;
    dthieu.a = dt1.a - dt2.a;
    dthieu.b = dt1.b - dt2.b;
    dthieu.c = dt1.c - dt2.c;
        return dthieu;
}
Dathuc Tich(Dathuc &dt1, Dathuc &dt2)
{
    Dathuc dttich;
    dttich.a = dt1.a*dt2.c + dt1.b*dt2.b + dt1.c*dt2.a;
    dttich.b = dt1.b*dt2.c + dt1.c*dt2.b;
    dttich.c = dt1.c*dt2.c;
        return dttich;
}
int F0(Dathuc &dt)
{
    return dt.c;
}
int main()
{
    Dathuc dt1, dt2;
    cout<<"Nhap da thuc thu nhat: "<<endl;
    Nhap(dt1);
    cout<<"Nhap da thuc thu hai: "<<endl;
    Nhap(dt2);
    cout<<"Hai da thuc vua nhap la: "<<endl;
    Xuat(dt1);
    Xuat(dt2);
    cout<<"Tong cau hai da thuc vua nhap la: ";
    Xuat(Tong(dt1, dt2));
    cout<<"Hieu cau hai da thuc vua nhap la: ";
    Xuat(Hieu(dt1, dt2));
    cout<<"Tich cau hai da thuc vua nhap ( chi lay tu bac hai tro xuong ) la: ";
    Xuat(Tich(dt1, dt2));
    cout<<"Gia tri F0 cua da thuc thu nhat la: "<<F0(dt1)<<endl;
    cout<<"Gia tri F0 cua da thuc thu hai la: "<<F0(dt2)<<endl;
        return 0;
}
