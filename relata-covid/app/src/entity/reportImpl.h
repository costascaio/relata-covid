#ifndef REPORTIMPL_H
#define REPORTIMPL_H

#include <vector>
#include "report.h"
#include "person.h"

/**
 * @brief This Class is the implementation from the Report
 * 
 */
class ReportImpl : public Report
{
public:
    /**
     * @brief Construct a new Report Impl object
     * 
     */
    ReportImpl();
    /**
     * @brief Destroy the Report Impl object
     * 
     */
    ~ReportImpl();

    /**
     * @brief Get the People object
     * 
     * @return vector<Person *>& 
     */
    vector<Person *> &getPeople();
    /**
     * @brief Set the People object
     * 
     * @param value 
     */
    void setPeople(const vector<Person *> &value);
    /**
     * @brief Get the Duplicity object
     * 
     * @return int 
     */
    int getDuplicity() const;
    /**
     * @brief Set the Duplicity object
     * 
     * @param value 
     */
    void setDuplicity(int value);

    /**
     * @brief Create a Report object
     * 
     * @return Report* 
     */
    static Report *createReport();
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
                         string age,
                         string date_symptoms);

protected:
    /**
     * @brief 
     * 
     * @param person 
     */
    void add(Person *person);

private:
    /**
     * @brief 
     * 
     */
    vector<Person *> people;
    int duplicity;
};

#endif // REPORT_H
