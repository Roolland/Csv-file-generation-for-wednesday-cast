#include<iostream>
#include<fstream>
#include<cstring>
#include <ctime>
using namespace std;
//scheletul pentru creearea listelor, se deschid prin metodele de mai jos lista
class castInitial {
//protected:

// totu este luat public pentru a optima codul sa se obtina mai repede rezultatele
public:
    char *sirCaractere;
    char *actorName;
    char *roleInMovie;
    char *meniu;
    char *nameInMovie;
    int size ;

   //public:
    void informatiiCast(int i);
    void getName();
    castInitial();
    ~castInitial();

};

class Figuranti : public castInitial {

public:
void generatorFiguranti(int numarF);
void generatorRolMeniu(int numarF, char limba[50]);
string getRol();
string getMeniu();

};