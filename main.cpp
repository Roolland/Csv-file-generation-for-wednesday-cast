#include "finalCast.cpp"
// #include "generatorFiguranti.cpp"
template <typename X>
X CalculatorMoneda(X x, X y)
{
    return x * y;


}

void creareaMeniu(char limba[50])
{
    //dezvoltam mai intai primul meniu
    char felPrincipal[80];
    char supa[80];
    char desert[80];
    char raspuns[50];



    if(strcmp(limba,"romana") == 0)
    {cout << "Doriti sa folositi meniu deja creat ? da/nu ";
    cin >> raspuns;
    if(strcmp(raspuns,"nu") == 0) 
    {
    ofstream myMeniu;
    myMeniu.open("meniuCast.csv");

    cout << "Meniu pentru omnivor:" << endl;
    myMeniu << "Meniu pentru omnivor:" << endl;
    for(int i = 1 ; i < 4 ; i++)
    {
      cout << "Introduceti meniurile pe ziua " << i <<" meniurile trebuie sa contina: supa/ciorba, fel principal, desert." << endl;
      cout << "Fel principal : ";
      cin.getline(felPrincipal, 80);
      //fflush(stdin);
      cout << "Supa/Ciorba : " ;
      cin.getline (supa, 80);
      //fflush(stdin);
      cout << "Desert : ";
      cin.getline(desert, 80);
      //fflush(stdin);
       cout << endl;
      myMeniu << "Meniu ziua " << i << endl << "Fel principal : " << felPrincipal << ";" << "Supa/Ciorba : " <<supa << ";" << "Desert : " << desert << endl;
    }

    cout << "Meniu pentru vegetarian:" << endl;
    myMeniu << "Meniu pentru vegetarian:" << endl;
    for(int i = 1 ; i < 4 ; i++)
    {
      cout << "Introduceti meniurile pe ziua " << i <<" meniurile trebuie sa contina: supa/ciorba, fel principal, desert." << endl;
      cout << "Fel principal : ";
      cin.getline(felPrincipal, 80);
      //fflush(stdin);
      cout << "Supa/Ciorba : " ;
      cin.getline (supa, 80);
      //fflush(stdin);
      cout << "Desert : ";
      cin.getline(desert, 80);
      //fflush(stdin);
       cout << endl;
      myMeniu << "Meniu ziua " << i << endl << "Fel principal : " << felPrincipal << ";" << "Supa/Ciorba : " <<supa << ";" << "Desert : " << desert << endl;
    }

    cout << "Meniu pentru flexitarian:" << endl;
    myMeniu << "Meniu pentru flexitarian:" << endl;
    for(int i = 1 ; i < 4 ; i++)
    {
      cout << "Introduceti meniurile pe ziua " << i <<" meniurile trebuie sa contina: supa/ciorba, fel principal, desert." << endl;
      cout << "Fel principal : ";
      cin.getline(felPrincipal, 80);
      //fflush(stdin);
      cout << "Supa/Ciorba : " ;
      cin.getline (supa, 80);
      //fflush(stdin);
      cout << "Desert : ";
      cin.getline(desert, 80);
      //fflush(stdin);
       cout << endl;
      myMeniu << "Meniu ziua " << i << endl << "Fel principal : " << felPrincipal << ";" << "Supa/Ciorba : " <<supa << ";" << "Desert : " << desert << endl;
    }

    }

    }


if(strcmp(limba,"engleza") == 0)
    {cout << "Do you want to use the meniu ? yes/no ";
    cin >> raspuns;
    fflush(stdin);
    if(strcmp(raspuns,"no") == 0) 
    {
    ofstream myMeniu;
    myMeniu.open("menuCast.csv");

    cout << "The menu for omnivour :" << endl;
    myMeniu << "The menu for omnivour :" << endl;
    for(int i = 1 ; i < 4 ; i++)
    {
      cout << "Insert the menu for " << i <<" day, the menu must contain : soup/borsh, main dish, dessert." << endl;
      cout << "Main dish : ";
      cin.getline(felPrincipal, 80);
      //fflush(stdin);
      cout << "Soup/borsh : " ;
      cin.getline (supa, 80);
      //fflush(stdin);
      cout << "Dessert : ";
      cin.getline(desert, 80);
      //fflush(stdin);
       cout << endl;
      myMeniu << "The menu for " << i << " day" << endl << "Main dish : " << felPrincipal << ";" << "Soup/borsh : " <<supa << ";" << "Dessert : " << desert << endl;
    }

    

    cout << "The menu for vegetarian:" << endl;
     myMeniu << "The menu for vegetarian:" << endl;
    for(int i = 1 ; i < 4 ; i++)
    {
      cout << "Insert the menu for " << i <<" day, the menu must contain : soup/borsh, main dish, dessert." << endl;
      cout << "Main dish : ";
      cin.getline(felPrincipal,80);
      cout << "Soup/borsh : " ;
      cin.getline(supa,80);
      cout << "Dessert : ";
      cin.getline(desert,80);
       cout << endl;
      myMeniu << "The menu for " << i << " day" << endl << "Main dish : " << felPrincipal << ";" << "Soup/borsh : " <<supa << ";" << "Dessert : " << desert << endl;



    }

    cout << "The menu for flexitarian:" << endl;
     myMeniu << "The menu for flexitarian:" << endl;
    for(int i = 1 ; i < 4 ; i++)
    {
      cout << "Insert the menu for " << i <<" day, the menu must contain : soup/borsh, main dish, dessert." << endl;
      cout << "Main dish : ";
      cin.getline(felPrincipal,80);
      cout << "Soup/borsh : " ;
      cin.getline(supa,80);
      cout << "Dessert : ";
      cin.getline(desert,80);
       cout << endl;
      myMeniu << "The menu for " << i << " day" << endl << "Main dish : " << felPrincipal << ";" << "Soup/borsh : " <<supa << ";" << "Dessert : " << desert << endl;
    }
     
    } 

    }

}



void calculCost(Figuranti g[132], Figuranti gCast[735], char limba[50])
{
int costTransport;
long  costCazare[5];
int costCastel = 10000; //zi fara reducere
int costTotalCastel[4];
double costLichide[4];
double apaConsumataZi = 1.0;
double cafeaConsumataZi = 0.5;
double sucConsumatZi = 0.8;
int costMachiaje = 0;
int costSpatiu;
int numarActori = 735;
int numarFiguranti =  132;
long zileFilmari[4] = {30,45,60,100} ;
int costMeniu;
cout << " 1";
for(int i = 0 ; i < 735 ; i++)
{
if(strcmp(gCast[i].getRol().c_str(),"vampir") == 0 || strcmp(gCast[i].getRol().c_str(),"vampire") == 0)costMachiaje += 230;
if(strcmp(gCast[i].getRol().c_str(),"sirena") == 0 || strcmp(gCast[i].getRol().c_str(),"mermaid") == 0) costMachiaje += 345;
if(strcmp(gCast[i].getRol().c_str(),"varcolaci") || strcmp(gCast[i].getRol().c_str(),"werewolf") == 0) costMachiaje += 555;
if(strcmp(gCast[i].getRol().c_str(),"clarvazator") == 0 || strcmp(gCast[i].getRol().c_str(),"clairvoyant") == 0) costMachiaje +=157;
if(strcmp(gCast[i].getRol().c_str(),"om") == 0 || strcmp(gCast[i].getRol().c_str(),"human") == 0) costMachiaje +=55;
}

for(int i = 0 ; i < 132 ; i++)
{
if(strcmp(g[i].getRol().c_str(),"vampir") == 0 || strcmp(g[i].getRol().c_str(),"vampire") == 0)costMachiaje += 230;
if(strcmp(g[i].getRol().c_str(),"sirena") == 0 || strcmp(g[i].getRol().c_str(),"mermaid") == 0) costMachiaje += 345;
if(strcmp(g[i].getRol().c_str(),"varcolaci") || strcmp(g[i].getRol().c_str(),"werewolf") == 0) costMachiaje += 555;
if(strcmp(g[i].getRol().c_str(),"clarvazator") == 0 || strcmp(g[i].getRol().c_str(),"clairvoyant") == 0) costMachiaje +=157;
if(strcmp(g[i].getRol().c_str(),"om") == 0 || strcmp(g[i].getRol().c_str(),"human") == 0) costMachiaje +=55;
}

cout << endl << "cost machiaj = " << costMachiaje << endl;

for(int i = 0 ; i < 735 ; i++)
{
if(strcmp(gCast[i].getMeniu().c_str(),"omnivor") == 0 || strcmp(gCast[i].getMeniu().c_str(),"omnivorous") == 0) costMeniu += 40;
if(strcmp(gCast[i].getMeniu().c_str(),"vegetarian") == 0 || strcmp(gCast[i].getMeniu().c_str(),"vegetarian") == 0) costMeniu += 33;
if(strcmp(gCast[i].getMeniu().c_str(),"flexitarian") == 0) costMeniu += 46;
}

for(int i = 0 ; i < 132 ; i++)
{
if(strcmp(gCast[i].getMeniu().c_str(),"omnivor") == 0 || strcmp(gCast[i].getMeniu().c_str(),"omnivorous") == 0) costMeniu += 40;
if(strcmp(gCast[i].getMeniu().c_str(),"vegetarian") == 0 || strcmp(gCast[i].getMeniu().c_str(),"vegetarian") == 0) costMeniu += 33;
if(strcmp(gCast[i].getMeniu().c_str(),"flexitarian") == 0) costMeniu += 46;
}

cout << "Costul meniului pe o zi = " << costMeniu << endl;

for(int i = 0 ; i < 4 ; i++)
{
cout << "Cost meniu pe " << zileFilmari[i] << " zile = " << costMeniu * zileFilmari[i] << endl;
}


if ( (numarActori + numarFiguranti) % 50 != 0)
costTransport= ((numarActori + numarFiguranti) / 50) + 1;
else 
costTransport = ((numarActori + numarFiguranti) / 50);
costTransport = costTransport * 5680;
cout << "Cost transport =" << costTransport << endl;

if(numarActori % 2 != 0)
costCazare[0] = ((numarActori / 2) + 1) * 350;
else
costCazare[0] = (numarActori / 2) * 350;

if(numarFiguranti %3 != 0)
costCazare[0] = costCazare[0] + (((numarFiguranti / 3) + 1) * 420);
else
costCazare[0] = costCazare[0] + ((numarFiguranti / 3) * 420);
cout<< "Cost cazare pe o seara = " << costCazare[0] << endl;

for(int i = 0 ; i < 4 ; i++)
{    costCazare[i + 1] = costCazare[0] * zileFilmari[i];
cout << "Cost cazare pe = " << zileFilmari[i] << " zile " << costCazare[i + 1] <<endl;
}

apaConsumataZi = apaConsumataZi * (numarActori + numarFiguranti);
sucConsumatZi = sucConsumatZi * (numarActori + numarFiguranti);
cafeaConsumataZi = cafeaConsumataZi * (numarActori + numarFiguranti);

for(int i = 0 ; i < 4 ; i++)
{costLichide[i] = zileFilmari[i] * apaConsumataZi * 3 + zileFilmari[i] * cafeaConsumataZi * 30 + zileFilmari[i] * sucConsumatZi * 4;
 cout << "cost lichide ziua " << zileFilmari[i] << " = " << costLichide[i] << endl;
}

for(int i = 0 ; i < 4 ; i++)
{costTotalCastel[i] = ((costCastel * 98 / 100) * (zileFilmari[i]/10)) + costCastel * (float(zileFilmari[i]%10)/10) ;
cout<< "cost castel pe " << zileFilmari[i] << " = "<<  costTotalCastel[i] <<endl;
}

ofstream myFileCost;


if(strcmp(limba,"romana") == 0)
{
myFileCost.open("castExtinsCost.csv");
cout << "Se va afisa in moneda de baza lei costul ";

for(int i = 0 ; i < 4 ; i++)
{
    myFileCost << "Costul " << zileFilmari[i] << " sunt: "<< endl;
    myFileCost << "Cost transport" << ";" << "Cost machiaj" << ";" << "Cost manacare" << ";" << "Cost lichide" << ";" << "Cost castel" <<"Cost cazare" << endl;
    myFileCost << costTransport << ";" << costMachiaje << ";" << costMeniu * zileFilmari[i] << ";" << costLichide[i] << ";" << costTotalCastel[i] << ";" <<costCazare[i] << endl;
}
}

if(strcmp(limba,"engleza") == 0)
{
myFileCost.open("castExtendedCost.csv");
cout << "All costs are in $ ";
//al doilea argument reprezinta valoarea unui dolar la un leu
costTransport  = CalculatorMoneda<float>(costTransport,0.22);
costMachiaje = CalculatorMoneda<float>(costMachiaje,0.22);
costMeniu = CalculatorMoneda<float>(costMeniu, 0.22);
for(int i = 0 ; i < 4 ; i++)
{
    costLichide[i] = CalculatorMoneda<float>(costLichide[i], 0.22);
    costTotalCastel[i] = CalculatorMoneda<float>(costTotalCastel[i], 0.22);
    costCazare[i] = CalculatorMoneda<float>(costCazare[i], 0.22);
}

for(int i = 0 ; i < 4 ; i++)
{
    myFileCost << "Cost for " << zileFilmari[i] << " days is: "<< endl;
    myFileCost << "Cost for transport" << ";" << "Cost for makeup" << ";" << "Cost for food" << ";" << "Cost for drinks" << ";" << "Cost for castel" <<"Cost for hotel" << endl;
    myFileCost << costTransport << ";" << costMachiaje << ";" << costMeniu * zileFilmari[i] << ";" << costLichide[i] << ";" << costTotalCastel[i] << ";" <<costCazare[i] << endl;
}
}


}

int main()
{

castInitial cast[735];
Figuranti g[132];
Figuranti gCast[735];


 for(int i = 0 ; i < 735 ; i++)
 {cast[i].informatiiCast(i);
 }
//g.generatorFiguranti();
//g.generatorRolMeniu();
// for(int i = 0 ; i < 735 ; i++)
//  cast[i].getName();

//g.getName();
//g.getRolMeniu();
char limba[50];

cout << "In ce limba doriti sa primiti csv ?romana/engleza ";
cin >> limba;
creareaMeniu(limba);

ofstream myFile;
if(strcmp(limba,"romana") == 0)
{
myFile.open("castExtins.csv");
for(int i = 0 ; i < 735 ; i++)
{
    //cout << i;
    gCast[i].generatorRolMeniu(i, limba);
    //gCast[i].getRolMeniu();
myFile<< cast[i].actorName << " " << gCast[i].meniu << " " << gCast[i].roleInMovie << endl;

}

for(int i = 0 ; i < 132 ; i++)
 {g[i].generatorFiguranti(i);
 try {
  g[i].generatorRolMeniu(i, limba);
 }catch ( char msg[100])
 {cerr << msg << endl;
 
 }
 
 // g[i].getName();
  //g[i].getRolMeniu();
  //cout << endl;
  myFile << g[i].actorName << " " << g[i].meniu << " " << g[i].roleInMovie << endl;
 
}
}

else 
{
    myFile.open("castExtended.csv");
for(int i = 0 ; i < 735 ; i++)
{
    //gCast[i].generatorRolMeniu(i, limba);
     try {
  gCast[i].generatorRolMeniu(i, limba);
 }catch ( const char* msg)
 {
     if(i == 1) break;
    cerr << msg << endl;
 }
    //gCast[i].getRolMeniu();
myFile<< cast[i].actorName << " " << gCast[i].meniu<< " " << gCast[i].roleInMovie << endl;

}


for(int i = 0 ; i < 132 ; i++)
 {g[i].generatorFiguranti(i);
  g[i].generatorRolMeniu(i, limba);
 // g[i].getName();
  //g[i].getRolMeniu();
  //cout << endl;
  myFile << g[i].nameInMovie << " " << g[i].meniu << " " << g[i].roleInMovie << endl;
 }

}
//  for(int i = 0 ; i < 132 ; i++)
//  {
//     g[i].getName();
//     g[i].getRolMeniu();
//  }

//calcularea pretului
calculCost(g, gCast, limba);


return 0;
}