#ifndef REPORTIMPL_H
#define REPORTIMPL_H

#include <vector>
#include "report.h"
#include "person.h"

class ReportImpl : public Report
{
public:
    ReportImpl();
    ~ReportImpl();

    vector<Person *> &getPeople() ;
    void setPeople(const vector<Person *> &value);

    int getDuplicity() const;
    void setDuplicity(int value);

    static Report *createReport();
    Person *createPerson(string name,
                         string cpf,
                         string address,
                         string city_notification,
                         string phone,
                         string evolution,
                         string date_notification,
                         string cep,
                         string result_test,
                         string gender,
                         int age,
                         string date_symptoms);

protected:
    void add(Person* person);
private:
    vector<Person *> people;
    int duplicity;
};

#endif // REPORT_H
