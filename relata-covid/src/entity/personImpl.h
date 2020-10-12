#ifndef PERSONIMPL_H
#define PERSONIMPL_H

#include "person.h"
/**
 * @brief This classs represents a Person impelementation
 * 
 */
class PersonImpl : public Person
{
public:
    /**
     * @brief Construct a new Person Impl object
     * 
     */
    PersonImpl();
    /**
     * @brief Destroy the Person Impl object
     * 
     */
    ~PersonImpl();
    /**
     * @brief Get the Name object
     * 
     * @return string 
     */
    string getName() const;
    /**
     * @brief Set the Name object
     * 
     * @param value 
     */
    void setName(const string &value);

    /**
     * @brief 
     * 
     * @return string 
     */
    string getCPF() const;
    /**
     * @brief Set the Cpf object
     * 
     * @param value 
     */
    void setCpf(const string &value);

    /**
     * @brief Get the Address object
     * 
     * @return string 
     */
    string getAddress() const;
    /**
     * @brief Set the Address object
     * 
     * @param value 
     */
    void setAddress(const string &value);
    
    /**
     * @brief Get the City Name object
     * 
     * @return string 
     */
    string getCityName() const;
    /**
     * @brief Set the City Name object
     * 
     * @param value 
     */
    void setCityName(const string &value);

    /**
     * @brief Get the Phone object
     * 
     * @return string 
     */
    string getPhone() const;
    /**
     * @brief Set the Phone object
     * 
     * @param value 
     */
    void setPhone(const string &value);

    /**
     * @brief Get the Evolution object
     * 
     * @return string 
     */
    string getEvolution() const;
    /**
     * @brief Set the Evolution object
     * 
     * @param value 
     */
    void setEvolution(const string &value);

    /**
     * @brief Get the Date Notification object
     * 
     * @return string 
     */
    string getDateNotification() const;
    /**
     * @brief Set the Date Notification object
     * 
     * @param value 
     */
    void setDateNotification(const string &value);

    /**
     * @brief 
     * 
     * @return string 
     */
    string getCEP() const;
    /**
     * @brief 
     * 
     * @param value 
     */
    void setCEP(const string &value);

    /**
     * @brief Get the Result Test object
     * 
     * @return string 
     */
    string getResultTest() const;
    /**
     * @brief Set the Result Test object
     * 
     * @param value 
     */
    void setResultTest(const string &value);

    /**
     * @brief Get the Gender object
     * 
     * @return string 
     */
    string getGender() const;
    /**
     * @brief Set the Gender object
     * 
     * @param value 
     */
    void setGender(const string &value);

    /**
     * @brief Get the Age object
     * 
     * @return string 
     */
    string getAge() const;
    /**
     * @brief Set the Age object
     * 
     * @param value 
     */
    void setAge(string value);

    /**
     * @brief Get the Date Symptoms object
     * 
     * @return string 
     */
    string getDateSymptoms() const;
    /**
     * @brief Set the Date Symptoms object
     * 
     * @param value 
     */
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
