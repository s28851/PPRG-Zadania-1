#include <iostream>
using namespace std;

int main()
{
    int a = 0;

    cout << "Podaj liczbe calkowita od 1 do 30 okreslajaca ilosc elementow tablicy:" << endl;
    cin >> a;
    cout << endl;
    int tabl[a];
    int iloscnaj = 0;
    
    cout<<"Podaj kolejno " << a <<" liczb calkowitych, po kazdej nacisnij ENTER:";
    
    cout << endl;
    int j = 0;
    int b;
    do
    {
        cin >> b;
        tabl[j] = b;
        j++;
    } while (j<a);
    if (a==1) {
        cout <<"Jedyna i najwieksza liczba to " << tabl[0] <<endl;
        return 0;
    }
    else
    {
        int naj=0;
        for (int i=0;i<a;i++)
        {
            if (naj<tabl[i]) { naj=tabl[i] ;}
        }
    }
    return 0;
}
