//
// Created by macbook on 2019-05-15.
//
#include <string>
#include <iostream>
#include "Footballer.h"
#include "Manager.h"
#include "Coach.h"
#include "Referee.h"
#include "Stadium.h"

#ifndef AVODA_4_TEAM_H
#define AVODA_4_TEAM_H
using namespace std;

class Team{
private:
    string teamName;
    int amount;

    Coach* coach;
    Manager* manager;
    Stadium* stadium;
    bool ifManager;
protected:
    Footballer** player;
public:
    Team();
    ~Team();
    void setPlayer(string,string,int,string,string,int,int,int);
    void addFootballer(Footballer*);
    void addCoach(Coach*);
    void addManager(Manager*);
    Footballer* getFootballer(int);
    void printDetails();
    int getID(int);
    string GetTeamName();

    void setStadium(string,string,int);
    void setManager(string,string,int,int);
    void setCoach(string,string,int,string,int,int);
    void setTeamName(string);

    void addgoal2(int);
    void PrintTeamName();
    void CoachDetails();
    void PlayerName(int);

};



#endif //AVODA_4_TEAM_H
