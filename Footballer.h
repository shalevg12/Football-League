//
// Created by macbook on 2019-04-30.
//

#ifndef AVODA_4_FOOTBALLER_H
#define AVODA_4_FOOTBALLER_H

#include "Worker.h"
class Footballer:public Worker {
private:
    string Team;
    int Goals;
    int GamesPlay=Games;
    string Proffestion;

public:
    Footballer(string,string,int,string,string,int,int);
    ~Footballer();
    int Success();
    bool Excellence();
    void FinalSalary();
    void addGoal();
    void PrintFootballer();
    void addPlayer(string);






};


#endif //AVODA_4_FOOTBALLER_H
