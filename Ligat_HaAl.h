//
// Created by macbook on 2019-05-19.
//

#ifndef AVODA_4_LIGAT_HAAL_H
#define AVODA_4_LIGAT_HAAL_H

#include "Team.h"
#include "Game.h"
#include <typeinfo>
#include <time.h>

class Ligat_HaAl {
private:
    Team** TeamList;
    Game** GameList;
    Worker** WorkerList;
    int AmountWorkers=0;
    int day,month,year;
    int opt,chooseTeam;
    string SetFirstName(int);
    string SetLastName(int);
    string SetPosition(int);
    string SetNameTeam(int);
    string SetNameStadium(int);
    string SetCityStadium(int);

    string RPName,RLName,role;
    int RID,RVetek,RMistakes,RGame;
    int goals2;

public:
    Ligat_HaAl();
    void Menu();

};


#endif //AVODA_4_LIGAT_HAAL_H
