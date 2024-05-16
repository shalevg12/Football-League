//
// Created by macbook on 2019-05-19.
//

#include "Ligat_HaAl.h"

Ligat_HaAl::Ligat_HaAl() {
    Coach *pCoach;
    Manager *pManager;
    TeamList = new Team *[5];
    for (int i = 0; i < 5; i++) {
        this->TeamList[i] = new Team();
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 15; j++) {
            TeamList[i]->setPlayer(SetFirstName(rand() % 24 + 1), SetLastName(rand() % 24 + 1), rand() % 99999 + i,
                                   SetNameTeam(i), SetPosition(j), j, rand()%20, j);
            AmountWorkers++;
        }
    }

    for (int i = 0; i < 5; i++) {
        TeamList[i]->setCoach(SetFirstName(rand() % 24 + 1), SetLastName((rand() % 24 + 1)), rand() % 99999 + i,
                              SetNameTeam(i), i, i);
        AmountWorkers++;
        TeamList[i]->setTeamName(SetNameTeam(i));
        AmountWorkers++;
        TeamList[i]->setStadium(SetNameStadium(i), SetCityStadium(i), 15000);
        AmountWorkers++;
        TeamList[i]->setManager(SetFirstName(rand() % 24 + 1), SetLastName(rand() % 24 + 1), rand() % 99999 + i, i);
        AmountWorkers++;
    }
    GameList = new Game*();/*
    for(int i=0;i<4;i++){
        GameList[i]->setReferee(SetFirstName(rand()%24+1),SetLastName(rand()%24+1),rand()%9999+i,i,rand()%12+i,rand()%10+i,i);
    }


    for (int i = 0; i < 4; i++) {
        GameList[i]=new Game();
        GameList[i]->setGame(TeamList[i], TeamList[i + 1]);
}
*/
    }


string Ligat_HaAl::SetFirstName(int Name)
{
    if (Name == 0)return "Shalev";
    if (Name == 1)return "Benzi";
    if (Name == 2)return "Yonatan";
    if (Name == 3)return "Gali";
    if (Name == 4)return "Eliran";
    if (Name == 5)return "Micha";
    if (Name == 6)return "Shacy";
    if (Name == 7)return "Biram";
    if (Name == 8)return "Eerez";
    if (Name == 9)return "Alon";
    if (Name == 10)return "Lior";
    if (Name == 11)return "Naor";
    if (Name == 12)return "Timor";
    if (Name == 13)return "Bar";
    if (Name == 14)return "Jonny";
    if (Name == 15)return "Yuval";
    if (Name == 16)return "Shmuel";
    if (Name == 17)return "Aviram";
    if (Name == 18)return "Moshe";
    if (Name == 19)return "Gabriel";
    if (Name == 20)return "Mishael";
    if (Name == 21)return "Sharon";
    if (Name == 22)return "Ron";
    if (Name == 23)return "Avi";
    if (Name == 24)return "Yotam";

    else return "No Name!";

}
string Ligat_HaAl::SetLastName(int Name)
{
    if (Name == 0)return "Gabay";
    if (Name == 1)return "Shelly";
    if (Name == 2)return "Hemo";
    if (Name == 3)return "Buzaglo";
    if (Name == 4)return "Abutbul";
    if (Name == 5)return "Cohen";
    if (Name == 6)return "Shushan";
    if (Name == 7)return "Arbel";
    if (Name == 8)return "Feldman";
    if (Name == 9)return "Assayag";
    if (Name ==10)return "Ben Hemo";
    if (Name ==11)return "Ben Ezra";
    if (Name ==12)return "Vitzman";
    if (Name == 13)return "Perez";
    if (Name == 14)return "Revi";
    if (Name == 15)return "Medavdev";
    if (Name == 16)return "Eliasi";
    if (Name == 17)return "Ben Shabat";
    if (Name == 18)return "Atia";
    if (Name == 19)return "Moyal";
    if (Name == 20)return "Zohar";
    if (Name == 21)return "Fitusi";
    if (Name == 22)return "Algerisi";
    if (Name == 23)return "Metodi";
    if (Name == 24)return "Shnider";

    else return "No Name!";
}

string Ligat_HaAl::SetPosition(int Position) {
    if (Position==0||Position==1) return "GoalKeeper";
    if (Position==2||Position==3) return "Back";
    if (Position==4||Position==5||Position==6||Position==7) return "Deefender";
    if (Position==8||Position==9||Position==10||Position==11) return "Midlefielder";
    if (Position==12||Position==13||Position==14) return "Forward";

    else return "No Position!";
}


string Ligat_HaAl::SetNameTeam(int Tname)
{
    if (Tname == 0)return "Hapoel Beer Sheva";
    if (Tname == 1)return "Macabi Haifa";
    if (Tname == 2)return "Beitar Jerusalem";
    if (Tname == 3)return "Macabi Petaj Tikva";
    if (Tname == 4)return "Macabi Tel Aviv";

    else return "No Name!";
}

string Ligat_HaAl::SetNameStadium(int Sname) {
    if (Sname==0) return "Terner";
    if (Sname==1) return "SamiOfer";
    if (Sname==2) return "Teddy";
    if (Sname==3) return "Hamoshava";
    if (Sname==4) return "Blumfild";

    else return "No Stadium";
}

string Ligat_HaAl::SetCityStadium(int Scity) {
    if (Scity==0) return "Beer Sheva";
    if (Scity==1) return "Haifa";
    if (Scity==2) return "Jerusalem";
    if (Scity==3) return "Petah Tikva";
    if (Scity==4) return "Tel Aviv";

    else return "No City!";
}






void Ligat_HaAl::Menu() {
    int FutureGame=0;
    cout << "Enter Option:" << endl;
    cout<< "1.Add Footballer\n2.Add Referee\n3.Print Team Details\n4.Print Referee Details\n5.Print Future Games Details\n6.Print Worker Salary\n7.Add Goal\n8.Add Judgment Errors\n9.Print Outstanding People\n10.Print Table\n11.Print Footballer Detail With Smallest Salary\n12.Exit"<< endl;
    cout << "Choose: ";
    cin >> opt;
    switch (opt) {

        case 1:
            for(int i=0;i<5;i++) {
                cout << i+1<<". "<< TeamList[i]->GetTeamName()<<endl;
            }
            Footballer *TempP;
            cout<<"Choose: ";
            cin>>chooseTeam;

            cout<<"Set New Footballer:"<<endl;

            cout << "Set First Name:" << endl;
            cin >> RPName;
            cout << "Set Last Name:" << endl;
            cin >> RLName;
            cout<<"Set Seniority:"<<endl;
            cin>>RVetek;
            cout<<"Goals Amount:"<<endl;
            cin>>goals2;
            cout<<"Set role:"<<endl;
            cin>>role;



            TeamList[chooseTeam-1]->addFootballer(TempP);

            TeamList[chooseTeam-1]->printDetails();

            break;

        case 2:
            cout<<"Set New Referee:"<<endl;

            cout << "Set First Name:" << endl;
            cin >> RPName;
            cout << "Set Last Name:" << endl;
            cin >> RLName;
            cout<<"Set Seniority:"<<endl;
            cin>>RVetek;
            cout<<"Set Mistakes:"<<endl;
            cin>>RMistakes;
            cout<<"Games Amount:"<<endl;
            cin>>RGame;

            WorkerList[AmountWorkers]=new Referee(RPName,RLName,RID,RVetek,RMistakes,RGame);
            AmountWorkers++;

            break;

        case 3:
            cout<<"Enter Team: "<<endl;
            for(int i=0;i<5;i++){
                cout<<i+1<<". "<<TeamList[i]->GetTeamName()<<endl;
            }
            cout<<"Choose: ";
            cin>>chooseTeam;
            TeamList[chooseTeam-1]->printDetails();

            break;


        case 4:
            for(int i=0;i<4+AmountWorkers;i++){
                GameList[i]->PrintRefere(i);
            }
            break;

        case 5:
            GameList[FutureGame]->PrintGame();

    }



    }

