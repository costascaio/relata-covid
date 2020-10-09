#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
public:
    virtual string getName() const = 0;
    virtual void setName(const string &value) = 0;

    virtual string getCPF() const = 0;
    virtual void setCpf(const string &value) = 0;

    virtual string getAddress() const = 0;
    virtual void setAddress(const string &value) = 0;

    virtual string getCityName() const = 0;
    virtual void setCityName(const string &value) = 0;

    virtual string getPhone() const = 0;
    virtual void setPhone(const string &value) = 0;

    virtual string getEvolution() const = 0;
    virtual void setEvolution(const string &value) = 0;

    virtual string getDateNotification() const = 0;
    virtual void setDateNotification(const string &value) = 0;

    virtual string getCEP() const = 0;
    virtual void setCEP(const string &value) = 0;

    virtual string getResultTest() const = 0;
    virtual void setResultTest(const string &value) = 0;

    virtual string getGender() const = 0;
    virtual void setGender(const string &value) = 0;

    virtual int getAge() const = 0;
    virtual void setAge(int value) = 0;

    virtual string getDateSymptoms() const = 0;
    virtual void setDateSymptoms(const string &value) = 0;
};

#endif // PERSON_H
