#include <iostream>
#include <string>
using namespace std;
string imie;
string nazwisko;
int rok_urodzenia;
int aktualny_rok;
int lat =aktualny_rok-rok_urodzenia;
int main()
{
    cout<< "Podaj imie";
    cin>>imie;
    cout<<"Podaj nazwisko";
    cin>>nazwisko;
    cout<<"Podaj rok urodzenia";
    cin>>rok_urodzenia;
    cout<<"Podaj aktualny rok";
    cin>>aktualny_rok;
    int lat =aktualny_rok-rok_urodzenia;
    cout << "Witam nazywam sie "<<imie<<" "<<nazwisko<<" "<<"mam "<<lat <<" lat"  << endl;
    return 0;
}
