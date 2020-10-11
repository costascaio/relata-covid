#include "remove_report.h"

bool remove_duplicity_report(Report* report){
    for(auto &person : report->getPeople()){
        delete person;
    }

    delete report;
    return true;
}
