#include <iostream>
#include <vector>
#include <windows.h> //system("pause")

#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa {
  int idZalogowanegoUzytkownika;
  int idOstatniegoAdresata;
  int idUsunietegoAdresata;

  vector <Uzytkownik> uzytkownicy;

  Uzytkownik podajDaneNowegoUzytkownika();
  int pobierzIdNowegoUzytkownika();
  bool czyIstniejeLogin(string login);

public:
  void rejestracjaUzytkownika();
  void wypiszWszystkichUzytkownikow();

};
