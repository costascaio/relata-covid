#ifndef REPORT_H
#define REPORT_H

#include <vector>
#include "person.h"

/**
 * @brief This class represents the Report
 * 
 */
class Report
{
public:
    /**
     * @brief Create a Report object
     * 
     * @return Report* 
     */
    static Report *createReport();

    /**
     * @brief Get the People object
     * 
     * @return vector<Person *>& 
     */
    virtual vector<Person *> &getPeople() = 0;
    /**
     * @brief Set the People object
     * 
     * @param value 
     */
    virtual void setPeople(const vector<Person *> &value) = 0;

    /**
     * @brief Get the Duplicity object
     * 
     * @return int 
     */
    virtual int getDuplicity() const = 0;
    /**
     * @brief Set the Duplicity object
     * 
     * @param value 
     */
    virtual void setDuplicity(int value) = 0;

    /**
     * @brief Create a Person object
     * 
     * @param name 
     * @param cpf 
     * @param address 
     * @param city_notification 
     * @param phone 
     * @param evolution 
     * @param date_notification 
     * @param cep 
     * @param result_test 
     * @param gender 
     * @param age 
     * @param date_symptoms 
     * @return Person* 
     */
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

    /**
     * @brief Destroy the Report object
     * 
     */
    virtual ~Report() {};

protected:
    /**
     * @brief 
     * 
     * @param person 
     */
    virtual void add(Person *person) = 0;
};

#endif // REPORT_H
