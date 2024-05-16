//
// Created by macbook on 2019-04-30.
//

#include "Coach.h"

Coach::Coach(string pname, string lname, int id, string team, int vetek,int champ): Worker(pname,lname,id,vetek) {
    this->PastPlayer=false;
    this->Champ=champ;
    this->Team=std::move(team);
}

void Coach::CoachSalary() {
    setSalary(SalaryC+200*getVetek()+500*Champ);
}

bool Coach::CoachExellence() {
    if(Champ>1)
        return true;
    return false;
}

void Coach::PrintCoach() {
    CoachSalary();
    PrintWorker();
    cout<<"His Team Coaching is: "<<this->Team<<endl;

}
