# Praktikum7


## Latihan1 : Fibonacci Iteratif

**Alur Algoritma**

1. Mendeklarasikan variabel `n,c,f1=0,f2=1,next : integer
   x : integer`
2. Membaca input `cin >> n`
3. Deskripsikan variabel untuk mencetak fungsi selanjutnya
4. Cetak suku fibonacci menggunakan pemanggilan iteratif

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

**Berikut code lengkap program**
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
\
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

**hasilnya**
![hasilnya](https://github.com/rumiumi/Praktikum7/blob/master/hasil1.PNG)


## Latihan2: Menghitung Hasil Perkalian Menggunakan Operator Penjumlahan

**Alur Algoritma**
1. Mulai Program
2. Input interger fungsi `int x, y, hasil`
3. jika nilai interger (hasil = 0) return hasil
4. cetak nilai perkalian dengan memanggil fungsi rekrusif menggunakan type datanya

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

**Berikut code lengkap program**
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

**hasilnya**
![hasilnya](https://github.com/rumiumi/Praktikum7/blob/master/hasil2.PNG)

## Latihan3: Code Rekursif dan Iteratif

**Alur Algoritma**
1. Deklarasi fungsi `int kali1` deklarasi variabel `hasil=0` pengulangan setiap `i<b` melakukan `hasil=hasil+a`
2. Deklarasi fungsi `int kali2` jika `b==0` maka `return 1` selain itu jika `b==1` maka `return a` selain itu `return a+kali2(a,b-1)`
3. Fungsi utama, deklarasi variabel `int a,b`
4. Input `cin>>a>>b`
5. Panggil fungsi `cout>>kali1(a,b)>>kali2(a,b)`

**pseudocode**
```
kali1
for i <- 0 to b do 
hasil <- hasil + a

kali2
if(b=0)
return 1
else if (b=1)
return a
else
return a+kali2(a,b-1)

read a
read b
write kali1
write kali2

```

**Berikut code lengkap program**
```c++
#include <iostream>

using namespace std;

 int kali1(int a, int b){
    int hasil =0;
    for(int i=0;i<b;i++){
        hasil=hasil+a;
    }
    return hasil;
 }

 int kali2(int a, int b){
    if(b==0)
        return 1;
    else if(b==1)
            return a;
        else
            return a+kali2(a,b-1);
 }

 int main(int argc, char *argv[]){
    int a,b;
    cout<<"masukkan a :";
    cin>>a;
    cout<<"masukkan b :";
    cin>>b;
    cout<<"secara ITERATIF :"<<endl;
    cout<<kali1(a,b)<<endl;
    cout<<"secara REKURSIF"<<endl;
    cout<<kali2(a,b)<<endl;

 return 0;
 }

```

**hasilnya**
![hasilnya](https://github.com/rumiumi/Praktikum7/blob/master/hasil3.PNG)