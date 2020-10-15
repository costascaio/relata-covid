#include "personImpl.h"

PersonImpl::PersonImpl() {}

PersonImpl::~PersonImpl(){}

string PersonImpl::getName() const
{
    return name;
}

void PersonImpl::setName(const string &value)
{
    name = value;
}

string PersonImpl::getCPF() const
{
    return cpf;
}

void PersonImpl::setCpf(const string &value)
{
    cpf = value;
}

string PersonImpl::getAddress() const
{
    return address;
}

void PersonImpl::setAddress(const string &value)
{
    address = value;
}

string PersonImpl::getCityName() const
{
    return city_notification;
}

void PersonImpl::setCityName(const string &value)
{
    city_notification = value;
}

string PersonImpl::getPhone() const
{
    return phone;
}

void PersonImpl::setPhone(const string &value)
{
    phone = value;
}

string PersonImpl::getEvolution() const
{
    return evolution;
}

void PersonImpl::setEvolution(const string &value)
{
    evolution = value;
}

string PersonImpl::getDateNotification() const
{
    return date_notification;
}

void PersonImpl::setDateNotification(const string &value)
{
    date_notification = value;
}

string PersonImpl::getCEP() const
{
    return cep;
}

void PersonImpl::setCEP(const string &value)
{
    cep = value;
}

string PersonImpl::getResultTest() const
{
    return result_test;
}

void PersonImpl::setResultTest(const string &value)
{
    result_test = value;
}

string PersonImpl::getGender() const
{
    return gender;
}

void PersonImpl::setGender(const string &value)
{
    gender = value;
}

string PersonImpl::getAge() const
{
    return age;
}

void PersonImpl::setAge(string value)
{
    age = value;
}

string PersonImpl::getDateSymptoms() const
{
    return date_symptoms;
}

void PersonImpl::setDateSymptoms(const string &value)
{
    date_symptoms = value;
}
