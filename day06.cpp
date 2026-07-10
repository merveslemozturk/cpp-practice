#include <iostream>
using namespace std;

int main()
{
    int sayi;
    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    for (int i = 1; i <= sayi; i++)
    {
        cout << i << endl; //endl bir alt satır için
    }
    return 0;
}