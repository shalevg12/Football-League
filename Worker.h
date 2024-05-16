//
// Created by macbook on 2019-04-30.
//

#ifndef AVODA_4_WORKER_H
#define AVODA_4_WORKER_H

#include "Person.h"

class Worker:public Person {
private:
    int Salary;
protected:
    int Vetek;
public:
    Worker(string,string,int,int);
    ~Worker(); // Still In Progress
    int WorkerSalary();
    void setSalary(int);
    int getVetek();
    void PrintWorker();


};


#endif //AVODA_4_WORKER_H
