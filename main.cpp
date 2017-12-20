#include <iostream>
#include <cstdlib>

using namespace std;

string add(string a,string b)
{
    int cyfra1, cyfra2, cyfra_pam, liczba, blad;
    int c1, c2;
    char pam, zn;
    string wynik, wyn, s;
    int da, db, dmax, k, j;
    da = a.length();
    db = b.length();
    if (da > db) dmax = da;
        else dmax = db;
    if (da != db)
    {
        s = "";
        if(da > db)
        {
            for(j = 0; j < da - db; j++) s = s + '0';
            for(j = 0; j < db; j++) s = s + b[j];
            b = s;
        }
        else
        {
            for(j = 0; j < db - da; j++) s = s + '0';
            for(j = 0; j < da; j++) s = s + a[j];
            a = s;
        }
    }
    wynik = ""; cyfra_pam = 0;
    for(k = dmax - 1; k >= 0; k--)
    {
        cyfra1 = a[k] - 48;
        cyfra2 = b[k] - 48;
        liczba = cyfra1 + cyfra2 + cyfra_pam;
        if(liczba < 10)
        {
            wynik = wynik + (char)(liczba + 48);
            cyfra_pam = 0;
        }
        else
        {
            c2 = liczba % 10; c1 = (liczba - c2) / 10;
            wynik = wynik + (char)(c2 +48);
            cyfra_pam = 1;
        }
    }

    if(cyfra_pam == 1) wynik = wynik + '1';
    wyn = "";
    for(k = wynik.length() - 1; k >= 0; k--) wyn = wyn + wynik[k];
    return wyn;
    }

int main() {


}