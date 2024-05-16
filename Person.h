
#include <iostream>
#include <string.h>
#include <typeinfo>
#include <time.h>
using namespace std;
#ifndef AVODA_4_PERSON_H
#define AVODA_4_PERSON_H

#define Games 8
#define SalaryP 6500
#define SalaryC 4500


class Person {
private:

protected:
    string PName;
    string LName;
    int ID;

public:
    Person(string,string,int);
    ~Person();// Still In Progress
    void PrintPerson();
    bool BestMan(int);
    int getIDPerson();
    void printName();
};


#endif //AVODA_4_PERSON_H
