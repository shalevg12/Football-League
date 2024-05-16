//
// Created by macbook on 2019-05-16.
//

#include "Game.h"

Game::Game() {
    date->SetDay(rand() % 30 + 1);
    date->SetMonth(rand() % 12 + 1);
    date->SetYear(rand() % 2021 + 2019);
    this->GoalsTeam2=0;
    this->GoalsTeam1=0;
   // RefereeList=new Referee*[4];
    this->Winner="";


}

void Game::UpdateGoal(int id) {
    for(int i=0;i<15;i++){
        if(id==team1->getID(i)) {
            team1->addgoal2(i);
            this->GoalsTeam1++;
        }
        if(id==team2->getID(i)){
            team2->addgoal2(i);
            this->GoalsTeam2++;
        }
    }
}




void Game::PrintGame() {

    //Date:
    cout<<date->GetDay()<<"."<<date->GetMonth()<<"."<<date->GetYear()<<endl;

    //Team 1 VS Team 2:
    cout<<"*****     ";
    team1->PrintTeamName();
    cout<<"  VS  ";
    team2->PrintTeamName();
    cout<<"     *****";

    //Players:
    cout<<"For Team 1:"<<endl;
    for(int i=0;i<15;i++){
        team1->PlayerName(i);
    }
    cout<<"For Team 2:"<<endl;
    for(int i=0;i<15;i++){
        team2->PlayerName(i);
    }


    //Coach Details:
    cout<<"For Team 1:\n Coach:\n"<<endl;
    team1->CoachDetails();
    cout<<"For Team 2:\n Coach:\n"<<endl;
    team2->CoachDetails();

    //End Match:
    if(GoalsTeam2>GoalsTeam1) {
        cout << "The Winner Team is: ";
        team2->PrintTeamName();
        cout<<endl;
    }
    else {
        cout << "The Winner Team is:";
        team1->PrintTeamName();
        cout<<endl;
    }

    if(GoalsTeam1==GoalsTeam2)
        cout<<"No Winners! It's a TIE!"<<endl;

    cout<<"The Score is: "<<this->GoalsTeam1<<" - "<<this->GoalsTeam2<<endl;
}

void Game::setReferee(string pname, string lname, int id, int vetek, int mis, int games,int i) {
    RefereeList[i]=new Referee(pname,lname,id,vetek,mis,games);

}

void Game::PrintRefere(int i) {
    RefereeList[0]->PrintReferee();
}

void Game::setGame(Team *Fteam, Team *Steam) {
    team1=Fteam;
    team2=Steam;
}






