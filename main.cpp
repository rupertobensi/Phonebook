#include <iostream>

#include "KsiazkaAdresowa.h"


using namespace std;

int main ()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor;

    while (true)
    {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany())
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
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
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
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


//TESTY AdresatMenedzer
#include "AdresatMenedzer.h"
int Qmain()
{
    AdresatMenedzer adresatMenedzer("Adresaci.txt", 2);
    adresatMenedzer.wyswietlWszystkichAdresatow();
    adresatMenedzer.dodajAdresata();
    adresatMenedzer.wyswietlWszystkichAdresatow();

}


//TESTY PlikZAdresatami
#include "Adresat.h"
#include "PlikZAdresatami.h"

int Fmain()
{
    PlikZAdresatami plikZAdresatami("Adresaci-test.txt");
    Adresat adresat(1,9,"Janek","Kowalski","999 888 888","janek@o2.pl","ul. Niska 54");
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    cout << plikZAdresatami.pobierzIdOstatniegoAdresata();

}
