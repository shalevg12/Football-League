//
// Created by macbook on 2019-04-30.
//

#include "Person.h"

Person::Person(string pname,string lastname,int id) {
    this->PName=pname;
    this->LName=lastname;
    this->ID=id;

}

void Person::PrintPerson() {

    cout<<"Private Name is: "<<this->PName<<endl;
    cout<<"Last Name is: "<<this->LName<<endl;
    cout<<"ID is: "<<this->ID<<endl;
}

bool Person::BestMan(int Best) {
    if(Best==true)
        return 1;
    return 0;
}


int Person::getIDPerson() {
    return this->ID;
}

void Person::printName() {
    cout<<PName<<endl;
}