#include <iostream>
using namespace std;

int main()
{
    int sayi;
    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    if(sayi % 2 != 0){
        sayi--;
    }

    for (int i = sayi ; i >= 1; i -= 2)
    {
        cout << i << endl; //endl bir alt satır için
    }

    return 0;
}