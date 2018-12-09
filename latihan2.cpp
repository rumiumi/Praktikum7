#include <iostream>
using namespace std;

int main(){
int x,y,hasil;
cout<<"Menghitung hasil perkalian menggunakan operator penjumlahan\n";
cout<<"Masukkan bilangan: ";
cin>>x;
cout<<"Dikalikan dengan: ";
cin>>y;
hasil=0;

for (int i=0;i<y;i++){
hasil=hasil+x;}
cout<<"Hasil "<<x<<" x "<<y<<" adalah "<< hasil;

return 0;

}
