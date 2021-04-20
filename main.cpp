#include <iostream>

using namespace std;

void czyPierwsza(int n)
{
    if (n>0 && n<10)
    {
        cout<<"Liczba jest z zakresu 0-9"<<endl;
        if (n%2==0) cout<<"Parzysta";
        if (n%2==1) cout<<"Nieparzysta";
    }
    else
    {
        cout<<"Liczba nie jest z przedzialu"<<endl;
        if (n%2==0) cout<<"Parzysta";
        if (n%2==1) cout<<"Nieparzysta";
    }
}

int main()
{
    int x;
    cout << "Podaj liczbe:" << endl;
    cin>>x;
    czyPierwsza(x);
    return 0;
}
