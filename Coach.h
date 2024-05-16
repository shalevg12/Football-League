//
// Created by macbook on 2019-04-30.
//

#ifndef AVODA_4_COACH_H
#define AVODA_4_COACH_H

#include "Worker.h"

class Coach: public Worker {
private:
    string Team;
    bool PastPlayer;
    int Champ;
public:
    Coach(string,string,int,string,int,int);
    void CoachSalary();
    bool CoachExellence();
    void PrintCoach();

};


#endif //AVODA_4_COACH_H
