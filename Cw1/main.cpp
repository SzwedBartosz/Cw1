#include <iostream>
#include <string>
using namespace std;
string imie = "Bartek";
string nazwisko = "Szwed";
int rok_urodzenia = 1996;
int aktualny_rok = 2017;
int lat =aktualny_rok-rok_urodzenia;
int main()
{
    cout << "Witam nazywam sie "<<imie<<" "<<nazwisko<<" "<<"mam "<<lat <<" lat"  << endl;
    return 0;
}
