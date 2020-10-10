#ifndef PERSONIMPL_H
#define PERSONIMPL_H

#include "person.h"

class PersonImpl : public Person
{
public:
    PersonImpl();

    ~PersonImpl();

    string getName() const;
    void setName(const string &value);

    string getCPF() const;
    void setCpf(const string &value);

    string getAddress() const;
    void setAddress(const string &value);

    string getCityName() const;
    void setCityName(const string &value);

    string getPhone() const;
    void setPhone(const string &value);

    string getEvolution() const;
    void setEvolution(const string &value);

    string getDateNotification() const;
    void setDateNotification(const string &value);

    string getCEP() const;
    void setCEP(const string &value);

    string getResultTest() const;
    void setResultTest(const string &value);

    string getGender() const;
    void setGender(const string &value);

    string getAge() const;
    void setAge(string value);

    string getDateSymptoms() const;
    void setDateSymptoms(const string &value);

private:
    string name;
    string cpf;
    string address;
    string city_notification;
    string phone;
    string evolution;
    string date_notification;
    string cep;
    string result_test;
    string gender;
    string age;
    string date_symptoms;
};

#endif // PERSON_H
