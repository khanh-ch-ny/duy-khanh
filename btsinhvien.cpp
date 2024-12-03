#include<iostream>
#include<cmath>
#include<string>
#include <algorithm>
using namespace std;

class SinhVien{
   private:
       string ten , ma , ns;
       double diem;
       static int dem;
   public:
   SinhVien();//constructor(ham khoi tao)
   SinhVien(string , string , string , double);//constructor
       //void xinchao();(2)
       //void dihoc();(2)
       void nhap();
       void in();
       double getDiem();
       void tangDem();
       //~SinhVien();//decstructor(ham huy)
};

//Implementation
SinhVien::SinhVien(){
    //cout << "doi tuong mac dinh o day\n";
    ten = ma = ns = " ";
    double diem = 0; //(3)
}


void SinhVien::tangDem(){
    ++dem;
}

/*SinhVien::SinhVien(string name , string id, string bir, double gpa){
   cout << "Ham khoi tao co tham so\n";
    ten = name;
    ma = id;
    ns = bir;
    diem = gpa; //(3)  có thể xài cách này không dùng this
}
*/
SinhVien::SinhVien(string ten , string ma , string ns , double diem){
    cout <<"Ham khoi tao co tham so\n";
    this->ten = ten;
    this->ma = ma;
    this->ns = ns;
    this->diem = diem;
}
/*void SinhVien::xinchao(){ 
    cout << "Hello\n";
}
void SinhVien::dihoc(){
    cout << "di hoc";
} (2)
*/
//SinhVien::~SinhVien(){ //(1)
    //cout <<"doi tuong da dc huy";
//}
void SinhVien::nhap(){
    cout <<" Nhap ID : ";
    cin >> this->ma;
    cin.ignore();
    cout <<"Nhap ten: ";
    getline(cin,this->ten);
    cout << "Nhap ngay sinh: ";
   getline(cin,this->ns);
    cout <<"Nhap diem: ";
    cin >> this->diem;
}

void SinhVien::in(){
    cout << this->ma << " " << this->ten << " " << this->ns << " " << this->diem << endl;
}


double SinhVien::getDiem(){
    return this->diem; // tra ve diem tu private
    }

bool cmp(SinhVien a , SinhVien b){
    return a.getDiem() > b.getDiem();
}
int main() {
    //SinhVien sv("khanh", "123", "04/06/2005" , 10 ); (3)
    /*sv.xinchao();
    sv.dihoc(); (2)
    */
    
    /*cout << "xin chao";
    if(1) {
        SinhVien sv;

    }
    cout << "hello"; ham huy(1)
    */ 
   /*SinhVien a[100];
   int n;
   cin >> n;
   for(int i = 0 ; i < n ; i++){
    cout <<"Nhap sv\n";
    a[i].nhap();
   }
   sort(a,a + n,cmp);
   for (int i = 0; i < n; i++){
    a[i].in();
   }
   */
  SinhVien x;
  x.tangDem(); // dem = 1
  x.tangDem();// dem = 2
  SinhVien y;
  cout << y.getDiem() << endl;
   
    return 0;
}