#include "generate_duplicity_report.h"

int find(vector<Person*>& people, Person* person_duplicity){
    for (int i = 0; i < people.size(); i++){
        if(people[i]->getCPF() == person_duplicity->getCPF()){
            return i;
        }
    }

    return -1;
}

Report* generate_report(vector<Person*>& people_SIVEP, vector<Person*>& people_ESUS){
    int position;
    Report* report = new ReportImpl();
    vector<Person*> people_without_duplicity;
    int duplicity = 0;

    for (int i = 0; i < people_SIVEP.size(); i++) {
        position = find(people_ESUS, people_SIVEP[i]);
        people_without_duplicity.push_back(people_SIVEP[i]);
        if(position != -1){
            people_ESUS.erase(people_ESUS.begin() + position);
            duplicity++;
        }
    }

    for (int i = 0; i < people_ESUS.size(); i++) {
          people_without_duplicity.push_back(people_ESUS[i]);
      }

    report->setPeople(people_without_duplicity);
    report->setDuplicity(duplicity);

    return report;
}
