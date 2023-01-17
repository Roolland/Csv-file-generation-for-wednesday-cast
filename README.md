# Csv-file-generation-for-wednesday-cast
Considering the success of the series Wednesday, the producers of the series decided to film the next season in Romania.
They need a program to help them organize their project, shoots and budgets.
The cast of the series wants to return to Romania at the beginning of 2023 to start filming at the Cantacuzino castle.

The application must generate CSV files with the following information: Actors, extended cast and extras (1 CSV).
Cost for each period (1 CSV).
Here the costs must be grouped as follows: Transport Accommodation, Makeup, Food, Water, Space rental, Food menu (1CSV),
Also, the director decided that he still needed 132 extras to help with the filming. They will be randomly generated within the application.
All the actors and all other people involved in the filming will leave from the airport using coaches. The coaches have a capacity of 50 people.
Calculate how many coaches are needed to transport people from the airport to the castle.
The cost of renting a coach is 5680 lei.

Also, actors and extras are randomly assigned to one of 5 monster classes, each with a specific makeup cost per shooting day:
Vampires - 230 lei
Werewolves - 555 lei
Sirens - 345 lei
Clairvoyants - 157 lei
Man - 55 lei

When filming, these people must be provided with food during the lunch break. Each person is either: Can eat anything, Vegetarian,Flexitarian (eats fish).
People are randomly assigned a type of diet.

The application must create a 3-day menu that includes:soup/soup, Main dish, desert.
The menu for those who eat anything costs 40 lei per day per person, the one for vegetarians 33 lei per day per person and the one for flexitarians 46 lei per day per person.
At the end of the day people have to go to the hotel to sleep. The hotel has rooms for 2 and 3 people.

The 2-person rooms are reserved for the original cast. Cost per room per night = 350 lei
The 3-person rooms are reserved for extras. Cost per room per night = 420 lei

Water is also necessary for filming. On each shooting day it is consumed on average
1L of water per person
0.5 L of coffee per person
0.8 L of juice per person

The cost is as follows: 2L of water = 6 Lei, 1L of coffee = 30 Lei, 2L of juice = 8 Lei.
Cantacuzino castle rental is 10,000 lei per day. The owner is willing to make a 2% discount for every 10 days of filming.

The application must generate CSV files containing the following information:
-Actors, extended cast and extras (1 CSV)
-Cost for each period (1 CSV)
Here the costs must be grouped as follows:Transport, Accommodation, Makeup, Food and water, Space rental, Food menu (1CSV).
Given that the files must be read in both English and Romanian, the application must be able to export these files in both Romanian and English automatically
