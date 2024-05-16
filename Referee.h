//
// Created by macbook on 2019-04-30.
//

#ifndef AVODA_4_REFEREE_H
#define AVODA_4_REFEREE_H

#include "Worker.h"
static int MaxMistakes=0;
class Referee: public Worker {
private:
    int Mistakes;
    int ReferGame;
public:
    Referee(string,string,int,int,int,int);
    ~Referee();
    void MaxMis();
    int CheckMis();
    int RefereeSalary();
    bool ExellenceReferee();
    void MoreMistake(int);
    void MoreGame();
    void PrintReferee();
    void addReferee(int,int);


};


#endif //AVODA_4_REFEREE_H
