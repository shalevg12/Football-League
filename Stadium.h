//
// Created by macbook on 2019-05-19.
//

#ifndef AVODA_4_STADIUM_H
#define AVODA_4_STADIUM_H

#include <iostream>
#include <string.h>
using namespace std;


class Stadium {
private:
    string StadiumName;
    string City;
    int Sits;
public:
    Stadium(string,string,int);
    ~Stadium();
    void PrintStadium();




};


#endif //AVODA_4_STADIUM_H
