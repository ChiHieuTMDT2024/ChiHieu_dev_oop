#include <iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
bool Namnhuan(int year)
{
    return(year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}
int Songaycuathang(int month, int year)
{
    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return Namnhuan(year) ? 29 : 28;
        default:
            return 0;
    }
}
Date themngay(Date x, int n)
{
    Date lich = x;
    while(n > 0){
        int songayconlai = Songaycuathang(lich.month, lich.year) - lich.day;
        if(n > songayconlai){
            n -= (songayconlai + 1);
            lich.day = 1;
            lich.month++;
            if(lich.month > 12){
                lich.month = 1;
                lich.year++;
            }
        }
        else{
            lich.day += n;
            n = 0;
        }
    }
    return lich;
}
int main()
{
    Date homnay;
    int n;
    cout<<"Nhap ngay (dd mm yyyy): ";
    cin>>homnay.day>>homnay.month>>homnay.year;
    if(homnay.day < 1 || homnay.month > 12 || homnay.month < 1 || homnay.year < 1 || homnay.day > Songaycuathang(homnay.month, homnay.year)){
        cout<<"Ngay khong hop le"<<endl;
        return 1;
    }
    cout<<"Nhap so ngay can cong: ";
    cin>>n;
    Date ngaymoi = themngay(homnay, n);
    cout<<"Ngay moi sau khi cong la: "<<ngaymoi.day<<"/"<<ngaymoi.month<<"/"<<ngaymoi.year<<endl;
    return 0;
}
