#include <iostream>
using namespace std;


int interatif (int x){
int n, c, f1 = 0, f2 = 1, next;

cout <<"Masukkan banyak bilangan dalam deret fibonnaci Anda: ";cin>>n;cout<<endl;
cout <<"Banyak bilangan = " <<n<< " fibonacci:-" <<endl;
for (c=0;c < n ; c++ ){
      if (c<=1)
         next = c;
      else {
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
