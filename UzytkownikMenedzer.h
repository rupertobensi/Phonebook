#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h> //system("pause")
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
{
    vector <Uzytkownik> uzytkownicy;
    static int idZalogowanegoUzytkownika;

    Uzytkownik podajDaneNowegoUzytkownika();

    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;

public:

    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    int pobierzIdNowegoUzytkownika();

    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy);
    static int pobierzIdZalogowanegoUzytkownika();

};

#endif
