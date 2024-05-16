//
// Created by macbook on 2019-05-19.
//

#include "Stadium.h"

Stadium::Stadium(string NStadium, string NCity, int PSits) {
    this->StadiumName=NStadium;
    this->City=NCity;
    this->Sits=PSits;

}

void Stadium::PrintStadium() {
    cout<<"The Name Of Stadium: "<<this->StadiumName<<endl;
    cout<<"The City is: "<<this->City<<endl;
    cout<<"The Number Of Sits: "<<Sits<<endl;
}
