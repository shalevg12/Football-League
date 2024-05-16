//
// Created by macbook on 2019-04-30.
//

#include "Worker.h"

Worker::Worker(string pname,string lname,int id,int vetek):Person(pname,lname,id) {
    this->Vetek=vetek;

}

int Worker::WorkerSalary() {
    return this->Salary;
}

void Worker::PrintWorker() {
    PrintPerson();
    cout<<"Seniority is: "<<this->Vetek<<" Years"<<endl;
    cout<<"Salary is: "<<WorkerSalary()<<endl;


}
int Worker::getVetek() { return Vetek;}

void Worker::setSalary(int salary) {
    this->Salary=salary;
}
