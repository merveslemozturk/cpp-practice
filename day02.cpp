#include <iostream>
using namespace std;

int main()
{
    int sayi;

    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    if (sayi % 2 == 0)
    {
        cout << "Bu sayi bir cift sayidir.";
    }
    else
    {
        cout << "Bu sayi tek sayidir.";
    }

    return 0;
}
