#include "reportImpl.h"
#include "personImpl.h"

ReportImpl::ReportImpl()
{
}

vector<Person *> &ReportImpl::getPeople()
{
    return people;
}

void ReportImpl::setPeople(const vector<Person *> &value)
{
    people = value;
}

int ReportImpl::getDuplicity() const
{
    return duplicity;
}

void ReportImpl::setDuplicity(int value)
{
    duplicity = value;
}

Report *Report::createReport()
{
    return new ReportImpl();
}

Person *ReportImpl::createPerson(string name,
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
                                 string date_symptoms)
{
    Person *p = new PersonImpl();
    p->setName(name);
    p->setCpf(cpf);
    p->setAddress(address);
    p->setCityName(city_notification);
    p->setPhone(phone);
    p->setEvolution(evolution);
    p->setDateNotification(date_notification);
    p->setCEP(cep);
    p->setResultTest(result_test);
    p->setGender(gender);
    p->setAge(age);
    p->setDateSymptoms(date_symptoms);

    this->add(p);

    return p;
}

void ReportImpl::add(Person *p)
{
    this->people.push_back(p);
}
