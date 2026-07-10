#include <iostream>
using namespace std;

int main()
{
    int sayi;
    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    for (int i = sayi ; i >= 1; i--)
    {
        cout << i << endl; //endl bir alt satır için
    }
    return 0;
}