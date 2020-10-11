#include "generate_duplicity_report.h"

int find(vector<Person*> people, Person* person_duplicity, int it){
    int position = 0;
    for (int i = it + 1; i < people.size(); i++){
        position++;
        if(people[i]->getCPF() == person_duplicity->getCPF()){
            return position;
        }
    }

    return -1;
}

Report* generate_report(vector<Person*> people){
    int it, position;
    Report* report = new ReportImpl();
    int duplicity = 0;

    for (int i = 0; i < people.size(); i++) {
        position = find(people, people[i], it);
        if(position != -1){
            people.erase(people.begin() + position);
        }
        it++;
    }

    report->setDuplicity(duplicity);
    report->setPeople(people);

    return report;
}
