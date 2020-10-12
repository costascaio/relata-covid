#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

/**
 * @brief This class represents a Person
 * 
 */
class Person
{
public:
    /**
     * @brief Get the Name object
     * 
     * @return string 
     */
    virtual string getName() const = 0;
    /**
     * @brief Set the Name object
     * 
     * @param value 
     */
    virtual void setName(const string &value) = 0;

    /**
     * @brief 
     * 
     * @return string 
     */
    virtual string getCPF() const = 0;
    /**
     * @brief Set the Cpf object
     * 
     * @param value 
     */
    virtual void setCpf(const string &value) = 0;

    /**
     * @brief Get the Address object
     * 
     * @return string 
     */
    virtual string getAddress() const = 0;
    /**
     * @brief Set the Address object
     * 
     * @param value 
     */
    virtual void setAddress(const string &value) = 0;

    /**
     * @brief Get the City Name object
     * 
     * @return string 
     */
    virtual string getCityName() const = 0;
    /**
     * @brief Set the City Name object
     * 
     * @param value 
     */
    virtual void setCityName(const string &value) = 0;

    /**
     * @brief Get the Phone object
     * 
     * @return string 
     */
    virtual string getPhone() const = 0;
    /**
     * @brief Set the Phone object
     * 
     * @param value 
     */
    virtual void setPhone(const string &value) = 0;

    /**
     * @brief Get the Evolution object
     * 
     * @return string 
     */
    virtual string getEvolution() const = 0;
    /**
     * @brief Set the Evolution object
     * 
     * @param value 
     */
    virtual void setEvolution(const string &value) = 0;

    /**
     * @brief Get the Date Notification object
     * 
     * @return string 
     */
    virtual string getDateNotification() const = 0;
    /**
     * @brief Set the Date Notification object
     * 
     * @param value 
     */
    virtual void setDateNotification(const string &value) = 0;

    /**
     * @brief 
     * 
     * @return string 
     */
    virtual string getCEP() const = 0;
    /**
     * @brief 
     * 
     * @param value 
     */
    virtual void setCEP(const string &value) = 0;

    /**
     * @brief Get the Result Test object
     * 
     * @return string 
     */
    virtual string getResultTest() const = 0;
    /**
     * @brief Set the Result Test object
     * 
     * @param value 
     */
    virtual void setResultTest(const string &value) = 0;

    /**
     * @brief Get the Gender object
     * 
     * @return string 
     */
    virtual string getGender() const = 0;
    /**
     * @brief Set the Gender object
     * 
     * @param value 
     */
    virtual void setGender(const string &value) = 0;

    /**
     * @brief Get the Age object
     * 
     * @return string 
     */
    virtual string getAge() const = 0;
    /**
     * @brief Set the Age object
     * 
     * @param value 
     */
    virtual void setAge(string value) = 0;

    /**
     * @brief Get the Date Symptoms object
     * 
     * @return string 
     */
    virtual string getDateSymptoms() const = 0;
    /**
     * @brief Set the Date Symptoms object
     * 
     * @param value 
     */
    virtual void setDateSymptoms(const string &value) = 0;

    /**
     * @brief Destroy the Person object
     * 
     */
    virtual ~Person() {};
};

#endif // PERSON_H
