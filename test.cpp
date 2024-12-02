#include<iostream>
#include<string>
using namespace name;

class SV
{
private:
  string name;
  int age;
  string id;
public;

   void themsinhvien();
   void xoasinhvien(string msv);
   void suasinhvien(string msv);
   void xemsinhvien();
};
    SV::SV(string ten,int tuoi,string msv){
        name = ten;
        age = tuoi;
        id = tuoi;
    }
int main(){
    int nhap;
    string id;
    SV sv;
    
    while(true) {

        cout <<"========VUI LONG CHON ========\n";
        cout <<"Lua chon\n";
        cout <<"1.Them thong tin sinh vien\n";
        cout <<"2.Xoa thong tin sinh vien\n";
        cout <<"3.Sua thong tin sinh vien\n";
        cout <<"4.Xem thong tin sinh vien\n";
        cout <<"0.Thoat\n"
        cout <<"Bam chon";
        cin >> nhap;


        switch (nhap)
        {
        case 1:
            cout << "Ban da chon chuc nang them sinh vien\n";
            sv.themsinhvien();
            break;
        case 2:
            cin.ignore();
            cout <<"Ban da chon chuc nang xoa sinh vien\n";
            cout <"Nhap id sinh vien\n";
            getline(cin,id);
            sv.xoasinhvien(id);
            break;
        case 3:
            cin.ignore;
            cout <<"Ban da chon chuc nang sua thong tin sinh vien\n";
            cout <<"Nhap id sinh vien\n";
            getline(cin,id);
            sv.suasinhvien(id);
            break;
        case 4:
         cout <<"Ban do cho xem sinh vien\n";
         sv.xemsinhhvien();
           break;
        case 0:
        return 0;
        break;
        }
    }
    
}

void SV::themsinhvien(){
  string name;
  int age;
  string id;
  cin.ignore;
  cout << "Nhap ten: " << getline(cin,ten);
  cout <<"Nhap id: " << getline(cin,msv);
  cout <<"Nhap tuoi: " << cin >> tuoi;

}
