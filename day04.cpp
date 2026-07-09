#include <iostream>
using namespace std;

int main(){
    int sayi1;
    int sayi2;

    cout << "İlk sayiyi giriniz: ";
    cin >> sayi1;

    cout << "İkinci sayiyi giriniz: ";
    cin >> sayi2;

    if(sayi1 > sayi2){
        cout << "Büyük sayi ilk sayi: " << sayi1;
    }
    else if( sayi2 > sayi1){
        cout << "Büyük sayi ikinci sayi: " << sayi2;
    }
    else{
        cout << "İki sayi eşit.";
    }

    return 0;
}