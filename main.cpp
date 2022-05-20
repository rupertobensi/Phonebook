#include <iostream>

#include "KsiazkaAdresowa.h"


using namespace std;

int main ()
{
    int idAktualnegoUzytkownika = 0;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor;

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    system("pause");
    while (true)
    {
        idAktualnegoUzytkownika == UzytkownikMenedzer::pobierzIdZalogowanegoUzytkownika();
        system("pause");
        if (idAktualnegoUzytkownika == 0)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                idAktualnegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }

        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();
            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '4':

                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
    }


    return 0;
}
