//
// Created by macbook on 2019-05-16.
//

#ifndef AVODA_4_GAME_H
#define AVODA_4_GAME_H

#include "Team.h"
#include "Date.h"

class Game {
private:
    Team* team1;
    Team* team2;
    Date* date;
    Referee** RefereeList;
    int GoalsTeam1;
    int GoalsTeam2;
    string Winner;

public:
    Game();
    ~Game();
    void UpdateGoal(int id);
    void PrintGame();
    void PrintRefere(int);
    void setReferee(string,string,int,int,int,int,int);
    void setGame(Team*,Team*);



};


#endif //AVODA_4_GAME_H
