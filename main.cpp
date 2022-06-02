#include <iostream>

#include "KsiazkaAdresowa.h"


using namespace std;

int main ()
{
    int idAktualnegoUzytkownika = 0;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor;


    while (true)
    {
        if (idAktualnegoUzytkownika == 0)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                idAktualnegoUzytkownika = ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika();
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
                ksiazkaAdresowa.dodajAdresata(idAktualnegoUzytkownika);
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow(idAktualnegoUzytkownika);
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                idAktualnegoUzytkownika = 0;
                //adresaci.clear();
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                //system("pause");
                break;
            }
        }
    }


    return 0;
}
