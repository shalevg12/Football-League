#include <utility>

//
// Created by macbook on 2019-05-15.
//

#include "Team.h"

Team::Team() {
    this->teamName="";
    this->amount=15;
    this->ifManager= false;
    player=new Footballer*[15];


}
void Team::addFootballer(Footballer *player2) { //Still In Progress
    this->amount++;
    Footballer** tempPlayer;
    tempPlayer=new Footballer*[amount];

    for(int i=0;i<amount-1;i++){
        tempPlayer[i]=this->player[i];
    }
    tempPlayer[amount]=player2;

    delete[] player;

    player=new Footballer*[amount];

    for(int i=0;i<amount;i++){
        player[i]=tempPlayer[i];
    }
    delete[] tempPlayer;

}
void Team::addCoach(Coach *coach2) {
    if(this->coach==NULL){
        this->coach=coach2;
    }
    else{
        cout<<"There is coach already!"<<endl;
    }


}
void Team::addManager(Manager *manager2) {
    if(!ifManager){
        this->manager=manager2;
        ifManager=true;
    }
    else{
        cout<<"There is manager already!"<<endl;
    }

}
Footballer* Team::getFootballer(int i) {
    return this->player[i];
}
void Team::printDetails() {
    //Stadium:
    cout<<"\n*****For Stadium: *****"<<endl;
    stadium->PrintStadium();

    //FootBallers:
    cout<<"\n***** For Footballer: *****"<<endl;
    for(int i=0;i<this->amount;i++){
        this->player[i]->PrintFootballer();
    }

    //Coach:
    cout<<"\n***** For Coach: *****"<<endl;
    coach->PrintCoach();

    //Manager:
    cout<<"\n***** For Manager: *****"<<endl;
    manager->PrintManager();

}

void Team::setStadium(string sname, string scity, int nsits) {
    stadium=new Stadium(sname,scity,nsits);
}

void Team::setManager(string pname,string lname,int id,int vetek) {
    manager=new Manager(pname,lname,id,vetek);

}

int Team::getID(int i) {
    return player[i]->getIDPerson();
}

void Team::addgoal2(int i) {
    player[i]->addGoal();
}

void Team::PrintTeamName() {
    cout<<teamName<<endl;
}

void Team::CoachDetails() {
    coach->PrintCoach();
}

void Team::PlayerName(int i) {
    player[i]->printName();
}

void Team::setPlayer(string pname,string lname,int id,string team,string position,int vetek,int goal,int i) {
    player[i]=new Footballer(pname,lname,id,team,position,vetek,goal);

}

string Team::GetTeamName() {
    return teamName;

}

void Team::setCoach(string pname, string lname, int id, string team, int vetek, int champ) {
    coach=new Coach(pname,lname,id,team,vetek,champ);
}

void Team::setTeamName(string Team) {
    this->teamName=Team;

}


