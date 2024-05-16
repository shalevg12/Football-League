//
// Created by macbook on 2019-04-30.
//

#include "Referee.h"


Referee::Referee(string pname, string lname, int id, int vetek,int mis,int games) : Worker(pname,lname,id,vetek){
    this->Mistakes=mis;
    this->ReferGame=games;
}

void Referee::MaxMis() {
    if(MaxMistakes<Mistakes)
        MaxMistakes=Mistakes;
}

int Referee::RefereeSalary() {
    setSalary(SalaryC+30*ReferGame+CheckMis());
    return WorkerSalary();
}

int Referee::CheckMis() {
    if(Mistakes>MaxMistakes)
        return -500;
    return 0;
}

bool Referee::ExellenceReferee() {
    if(Mistakes<MaxMistakes/2)
        return true;
    return false;
}

void Referee::MoreMistake(int mistake) {
    this->Mistakes+=mistake;
}

void Referee::MoreGame() {
    this->ReferGame++;

}

void Referee::PrintReferee() {
    PrintWorker();
    cout<<"His Numnber of Mistakes: "<<Mistakes<<endl;
}

void Referee::addReferee(int mis,int game) {
    this->Mistakes=mis;
    this->ReferGame=game;
}


