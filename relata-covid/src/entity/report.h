#ifndef REPORT_H
#define REPORT_H

#include <vector>
#include "person.h"

class Report
{
public:
    static Report *createReport();

    virtual vector<Person *> &getPeople() = 0;
    virtual void setPeople(const vector<Person *> &value) = 0;

    virtual int getDuplicity() const = 0;
    virtual void setDuplicity(int value) = 0;

    virtual Person *createPerson(string name,
                                 string cpf,
                                 string address,
                                 string city_notification,
                                 string phone,
                                 string evolution,
                                 string date_notification,
                                 string cep,
                                 string result_test,
                                 string gender,
                                 string age,
                                 string date_symptoms) = 0;

    ~Report();

protected:
    virtual void add(Person *person) = 0;
};

#endif // REPORT_H
