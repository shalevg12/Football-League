//
// Created by macbook on 2019-05-01.
//

#include "Manager.h"

Manager::Manager(string pname, string lname, int id, int vetek): Worker(pname,lname,id,vetek) {

}

int Manager::SalaryManager() {
    setSalary(SalaryC*3+getVetek()*500);
    return WorkerSalary();
}

bool Manager::ExellenceManager() {
    if(getVetek()>4)
        return true;
    return false;
}

void Manager::PrintManager(){
    SalaryManager();
    PrintWorker();
}

