#include <iostream>
using namespace std;

int main(){
  int sayi;
  cout << "Bir sayi giriniz: ";
  cin >> sayi;

 if(sayi > 0){
   cout << "Bu sayi pozitif bir sayidir.";
 }
 else if(sayi < 0){
   cout << "Bu sayi negatif bir sayidir.";
  }
else{
   cout << "Bu sayi 0'dır. ";
 }

return 0;
}
