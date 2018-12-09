# praktikum7


##latihan1 : fibonacci iteratif

**Alur Algoritma**

1. Mendeklarasikan variabel `n,c,f1=0,f2=1,next : integer
   x : integer`
2. Membaca input `cin >> n`
3. Deskripsikan variabel untuk mencetak fungsi selanjutnya
4. Cetak suku fibonacci menggunakan pemanggilan iteratif

**kode lengkap program**
```C++
#include <iostream>
using namespace std;


int interatif (int x){
int n, c, f1 = 0, f2 = 1, next;

cout <<"Masukan Nilai =";cin>>n;cout<<endl;
cout <<"Nilai =" <<n<< " fibonacci:-" <<endl;
for (c=0;c < n ; c++ )

    {

      if (c<=1)

         next = c;

      else

      {

         next = f1 + f2;

         f1 = f2;

         f2 = next;

      }

         cout<<next<<endl;

      }

}

int main() {

   int x;

   interatif(x);


return 0;

}
```

**pseudocode**
```
read (n)
for (c=0;c < n ; c++ )then
if (c<=1)
next = c
else
next <- f1 + f2;
f1 <- f2;
f2 <- next;
write (next)
end
```

**hasilnya**
![hasilnya](https://github.com/iisamelia/praktikum7/blob/master/hasil1.PNG)


##latihan2:Menghitung hasil perkalian menggunakan operator penjumlahan

**Alur Algoritma**
1. Mulai Program
2. Input interger fungsi `int x, y, hasil`
3. jika nilai interger (hasil = 0) return hasil
4. cetak nilai perkalian dengan memanggil fungsi rekrusif menggunakan type datanya

**kode lengkap program**
```c++
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
```

**pseudocode**
```
read x
read y
hasil <- 0
for i <- 0 to y do
hasil <- hasil + x
end for
write hasil
end
```

**hasilnya**
![hasilnya](https://github.com/iisamelia/praktikum7/blob/master/hasil2.PNG)

##latihan3

**Alur Algoritma**
1. Mulai program tersebut
2. input menggunakan initruksi void dan menggunakan pointer untuk menetapakan void typedata (char *s)
3. jika nilai s!=0--> menggunakan Pointer(*) maka masukan intruksi membalik (&s[1])
4. masuan char untuk intruksi kata yang ingin kita ubah dan intruksi balik
5. cetak pemblikan kata dengan memanggil funsi rekrusif menggunkan type datany.

**kode lengkap program**
```c++
#include<iostream>
#include<string.h>

using namespace std;
void balik(char *s)
{ if (*s != '\0'){
balik(&s[1]);
cout << s[0];
}
}
int main()
{
      char* kata = (char*) "iis";
    balik(kata); cout << endl;
    return 0;

}
```

**pseudocode**
```
#include
#include
void balik(char *k){
if(*k!=”){
balik(&k[1]);
cout<
}
}main(){
char *kata=”....”;--> //untuk masukan kata
balik(kata);
cout<
return 0;
```

**hasilnya**
![hasilnya](https://github.com/iisamelia/praktikum7/blob/master/hasil3.PNG)