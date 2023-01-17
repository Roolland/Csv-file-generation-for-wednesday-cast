#include "finalCast.h"

 castInitial::castInitial()
{
    ifstream myFile;
    myFile.open("wednesdayCast.csv");
while(myFile.good())
    {
    string line;
        getline(myFile, line, '\n');
        //cout << line  <<endl;
    }
}

castInitial::~castInitial(void){

}


void castInitial::informatiiCast(int linieLista)
{
    ifstream myFile;
    ofstream myFile2;
    myFile.open("wednesdayCast.csv");
    myFile2.open("castExtins.csv");
    int nameSize = 0;
    int nrPersoane = 0;
    //cout << linieLista << endl;

    while(myFile.good())
    {
        //exceptii
       
        string line;
        getline(myFile, line, '\n');
        int size = line.length();
        //cout << size << endl;
        this->sirCaractere = new char[size + 1];
        strcpy(sirCaractere,line.c_str());
         nameSize = 0;
        while(sirCaractere[nameSize] != ',')
            {
                if(nameSize == 0)
                    {for(int i = 0 ; i < size ; i++)
                     {if(sirCaractere[i] != ',') nameSize++;
                     if(sirCaractere[i] == ',') break;}

                      this->actorName = new char[nameSize+1];
                     nameSize = 0;
                    }
                
                this->actorName[nameSize] = this->sirCaractere[nameSize];
                nameSize++;
            }
            this->actorName[nameSize] = '\0';
           // cout << actorName << endl;
           // myFile2 << actorName << endl;
       // cout << endl;
        // for(int i = 0 ; i < size ; i++)
        // { 

        //     cout << nameSize;

        //     this->actorName= new char [nameSize];
        //     nameSize = 0;


        //     actorName[nameSize] = sirCaractere[i];
        //     nameSize++;
        //     if(sirCaractere[i] == ',')
        //      {
        //      actorName[nameSize] = '\0';
        //      nameSize = 0;
        //       break;
        //      }
        // }
        //cout << actorName << endl ;
          //cout << nrPersoane << endl;
         if(nrPersoane == linieLista) break;
         nrPersoane++;
    }

    //cout << nrPersoane;

}

void castInitial::getName()
{
cout << this->actorName ;
}

void Figuranti::generatorFiguranti(int numarF)
{
    srand(time(NULL));
   char alphabet[]="abcdefghijklmnopqrstvwxyz";
    int lungimeNume = 0;
    char *name;
    int numarFiguranti = 132;
    int figurantiCreati = 0;
    //cout << " " << numarF << " " << lungimeNume;
   // while(lungimeNume > 4)
     //{
    // }

    //  while(numarF< numarFiguranti)
    
    //  {
      while(figurantiCreati <= numarF)
       { lungimeNume =  rand() % 10;
        while(lungimeNume < 4)
    {     lungimeNume =  rand() % 10;
   // cout << lungimeNume;
    }
        figurantiCreati++;
       }

    //cout << lungimeNume;
    this->actorName = new char[lungimeNume];

    for(int i = 0 ; i < lungimeNume ; i++)
    this->actorName[i] = alphabet[rand()%25];
    this->actorName[lungimeNume] = '\0';
    //cout << actorName << endl;
    //figurantiCreati++;
    //this->actorName = new char[lungimeNume]
    
   //cout<< name << " "  << figurantiCreati  << " " << lungimeNume << endl;
   //lungimeNume = 0;
        //break;
    //}

}

void Figuranti::generatorRolMeniu(int numarF, char limba[50])
{
    srand(time(NULL));

//cout << numarF;

int rol;
int tipMancare;
int tip = 0;

while(tip <= numarF)
{
rol = rand() % 5;
tipMancare = rand() % 3;

if(strcmp(limba,"romana") != 0 && strcmp(limba,"engleza") != 0)
{
    throw "Nu avem disponibila aceasta limba";
}

if(strcmp(limba,"romana") == 0)
{

switch(rol)
{
    case 0: this->roleInMovie = new char[sizeof("vampir" + 1)];
    strcpy(this->roleInMovie , "vampir" );
    break;

    case 1: this->roleInMovie = new char[sizeof("sirena" + 1)];
    strcpy(this->roleInMovie , "sirena" );
    break;

    case 2: this->roleInMovie = new char[sizeof("varcolac" + 1)];
    strcpy(this->roleInMovie , "varcolac" );
    break;

    case 3: this->roleInMovie = new char[sizeof("om" + 1)];
    strcpy(this->roleInMovie , "om" );
    break;

    case 4: this->roleInMovie = new char[sizeof("clarvazator" + 1)];
    strcpy(this->roleInMovie, "clarvazator") ;
    break;
}

//cout<< this->roleInMovie;


switch(tipMancare)
{
    case 0: this->meniu = new char[sizeof("omnivor" + 1)];
    strcpy(this->meniu , "omnivor" );
    break;

    case 1: this->meniu = new char[sizeof("vegetarian" + 1)];
    strcpy(this->meniu , "vegetarian" );
    break;

    case 2: this->meniu = new char[sizeof("flexitarian" + 1)];
    strcpy(this->meniu , "flexitarian" );
    break;
}

}

else {

switch(rol)
{
    case 0: this->roleInMovie = new char[sizeof("vampire" + 1)];
    strcpy(this->roleInMovie , "vampire" );
    break;

    case 1: this->roleInMovie = new char[sizeof("mermaid" + 1)];
    strcpy(this->roleInMovie , "mermaid" );
    break;

    case 2: this->roleInMovie = new char[sizeof("werewolf" + 1)];
    strcpy(this->roleInMovie , "werewolf" );
    break;

    case 3: this->roleInMovie = new char[sizeof("human" + 1)];
    strcpy(this->roleInMovie , "human" );
    break;

    case 4: this->roleInMovie = new char[sizeof("clairvoyant" + 1)];
    strcpy(this->roleInMovie, "clairvoyant") ;
    break;
}

//cout<< this->roleInMovie;


switch(tipMancare)
{
    case 0: this->meniu = new char[sizeof("omnivorous" + 1)];
    strcpy(this->meniu , "omnivorous" );
    break;

    case 1: this->meniu = new char[sizeof("vegetarian" + 1)];
    strcpy(this->meniu , "vegetarian" );
    break;

    case 2: this->meniu = new char[sizeof("flexitarian" + 1)];
    strcpy(this->meniu , "flexitarian" );
    break;
}

}
tip++;

}
  //cout<< " " << this->roleInMovie << " " << this->meniu;


}

string Figuranti::getRol()
{
   // cout<< " " << this->roleInMovie ;
    return this->roleInMovie;
}

string Figuranti::getMeniu()
{
    //cout<< " " << this->meniu ;
    return this->meniu;
}