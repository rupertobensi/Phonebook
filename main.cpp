#include <iostream>

#include "KsiazkaAdresowa.h"
#include "UzytkownikMenedzer.h"

using namespace std;

int main ()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    char wybor;
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//    //system("pause");
//    //    ksiazkaAdresowa.rejestracjaUzytkownika();
//    //    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//    ksiazkaAdresowa.logowanieUzytkownika();
//    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();


    return 0;
}
