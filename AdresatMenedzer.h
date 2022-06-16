#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h> //system("pause")
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenedzer.h"


using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);


public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
      adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void edytujAdresata();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void usunAdresata();
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);


};

#endif
