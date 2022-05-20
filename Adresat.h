#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

#include "UzytkownikMenedzer.h"


using namespace std;

class Adresat
{
    UzytkownikMenedzer uzytkownikMenedzer;
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:

    void ustawId(int noweId);
    void ustawIdUzytkownika(int noweId);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumer);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);


    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();


};

#endif
