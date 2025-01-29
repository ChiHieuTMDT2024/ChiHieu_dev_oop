#include <iostream>
using namespace std;
struct Time
{
    int gio;
    int phut;
    int giay;
};
void Nhap(Time &t)
{
    while(t.gio < 0 || t.gio >= 24){
        cout<<"Nhap gio hien tai: ";
        cin>>t.gio;
        if(t.gio < 0 || t.gio >= 24){
            cout<<"Vui long nhap lai"<<endl;
        }
    }
    while(t.phut < 0 || t.phut >= 60){
        cout<<"Nhap phut hien tai: ";
        cin>>t.phut;
        if(t.phut < 0 || t.phut >= 60){
            cout<<"Vui long nhap lai"<<endl;
        }
    }
    while(t.giay < 0 || t.giay >= 60){
        cout<<"Nhap giay hien tai: ";
        cin>>t.giay;
        if(t.giay < 0 || t.giay >= 60){
            cout<<"Vui long nhap lai"<<endl;
        }
    }
}
void Xuat(Time t)
{
    if(t.gio < 10){
        cout<<"0"<<t.gio<<":";
    }
    else{
        cout<<t.gio<<":";
    }
    
    if(t.phut < 10){
        cout<<"0"<<t.phut<<":";
    }
    else{
        cout<<t.phut<<":";
    }
    if(t.giay < 10){
        cout<<"0"<<t.giay;
    }
    else{
        cout<<t.giay;
    }
}
void chinhsuathoigian(Time &t) {
    t.phut += t.giay / 60;
    t.giay = t.giay % 60;
    t.gio += t.phut / 60;
    t.phut = t.phut % 60;
    t.gio = t.gio % 24;  
}

void themthoigian(Time &t, int themgio, int themphut, int themgiay)
{
    t.giay += themgiay;
    t.phut += themphut;
    t.gio += themgio;
    chinhsuathoigian(t);
}
int main()
{
    Time Timenow;
    int themgiay, themphut, themgio;
    cout<<"Nhap thoi gian hien tai: "<<endl;
    Nhap(Timenow);
    cout<<"Nhap so gio can cong: ";
    cin>>themgio;
    cout<<"Nhap so phut can cong: ";
    cin>>themphut;
    cout<<"Nhap so giay can cong: ";
    cin>>themgiay;
    cout<<"Thoi gian luc dau la: ";
    Xuat(Timenow);
    themthoigian(Timenow, themgio, themphut, themgiay);
    cout<<"Thoi gian sau khi cong la: ";
    Xuat(Timenow);
    return 0;
}
