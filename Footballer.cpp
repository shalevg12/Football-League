//
// Created by macbook on 2019-04-30.
//

#include "Footballer.h"

void Footballer::FinalSalary() {
    setSalary(6500+(Success()/100)*2000);
}

Footballer::Footballer(string pname,string lname,int id,string team,string position,int vetek,int goal) : Worker(pname, lname, id, vetek) {
    this->Team=std::move(team);
    this->Proffestion=std::move(position);
    this->Goals=goal;
}

int Footballer::Success() {
    return Goals*100/Games;
}

bool Footballer::Excellence() {
    if(Success()>75)
        return true;
    return false;
}

void Footballer::addGoal() {
    this->Goals++;
}

void Footballer::PrintFootballer() {
    FinalSalary();
    PrintWorker();
    cout<<"His Team Playing: "<<this->Team<<endl;
    cout<<"His Position: "<<this->Proffestion<<endl;
    cout<<"The Amount Of Goals is: "<<this->Goals<<endl;
    cout<<"His Successfull is: "<<Success()<<endl;
    cout<<endl;
}

void Footballer::addPlayer(string Tname) {
        cout << "Set First Name:" << endl;
        cin >> PName;
        cout << "Set Last Name:" << endl;
        cin >> LName;
        cout << "Set Seniority:" << endl;
        cin >> Vetek;
        this->Team = std::move(Tname);
        cout << "Set Role" << endl;
        cin >> Proffestion;
        cout << "Set Goals:" << endl;
        cin >> Goals;
    }

