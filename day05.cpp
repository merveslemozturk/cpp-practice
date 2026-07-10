#include <iostream>
using namespace std;

int main(){
    int birinciSayi, ikinciSayi;
    char islem;
    double sonuc;

    cout << "Birinci sayiyi giriniz: ";
    cin >> birinciSayi;

    cout << "İkinci sayiyi giriniz: ";
    cin >> ikinciSayi;

    cout << "İslem(+, -, *, /): ";
    cin >> islem;

    switch (islem)
    {
    case '+':
        sonuc = birinciSayi + ikinciSayi;
        cout << "Sonuc: " << sonuc;
        break;
    case '-':
        sonuc = birinciSayi - ikinciSayi;
        cout << "Sonuc: " << sonuc;
        break;
    case '*':
        sonuc = birinciSayi * ikinciSayi;
        cout << "Sonuc: " << sonuc;
        break;
    case '/':
        if(ikinciSayi == 0){
            cout << "Sifira bolme yapilamaz!";
        }
        else{
            sonuc = (double)birinciSayi / ikinciSayi;
            cout << "Sonuc: " << sonuc;
        }
        break;
    default:
        cout << "Gecersiz islem!";
        break;
    }
    return 0;
}