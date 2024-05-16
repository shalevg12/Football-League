//
// Created by macbook on 2019-05-01.
//

#ifndef AVODA_4_MANAGER_H
#define AVODA_4_MANAGER_H

#include "Worker.h"


class Manager: public Worker {
public:
    Manager(string,string,int,int);
    ~Manager();
    int SalaryManager();
    bool ExellenceManager();
    void PrintManager();
};


#endif //AVODA_4_MANAGER_H
