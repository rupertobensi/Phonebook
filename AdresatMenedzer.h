#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h> //system("pause")
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenedzer.h" // do metody statycznej


using namespace std;

class AdresatMenedzer
{

    vector <Adresat> adresaci;
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;
    //Adresat adresat;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);


public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    int dodajAdresata();





};

#endif
