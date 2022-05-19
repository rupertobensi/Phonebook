#include <iostream>

#include "KsiazkaAdresowa.h"
#include "UzytkownikMenedzer.h"

using namespace std;

int main ()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //system("pause");
    //    ksiazkaAdresowa.rejestracjaUzytkownika();
    //    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();

    return 0;
}
