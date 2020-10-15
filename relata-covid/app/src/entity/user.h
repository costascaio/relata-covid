#ifndef USER_H
#define USER_H

#include <string>
#include "paper.h"

using namespace std;

/**
 * @brief 
 * 
 */
class User
{
public:
    /**
     * @brief Create a paper object
     * 
     * @return Paper* 
     */
    static User* create_user(string, string, string, Paper*);

    /**
     * @brief Get the user object
     * 
     * @return string 
     */
    virtual string get_user() = 0;
    /**
     * @brief Set the user object
     * 
     */
    virtual void set_user(string) = 0;

    /**
     * @brief Get the password object
     * 
     * @return string 
     */
    virtual string get_password() = 0;
    /**
     * @brief Set the password object
     * 
     */
    virtual void set_password(string) = 0;

    /**
     * @brief Get the email object
     * 
     * @return string 
     */
    virtual string get_email() = 0;
    /**
     * @brief Set the email object
     * 
     */
    virtual void set_email(string) = 0;

    /**
     * @brief Get the paper object
     * 
     * @return Paper* 
     */
    virtual Paper* get_paper() = 0;
    /**
     * @brief Set the paper object
     * 
     */
    virtual void set_paper(Paper*) = 0;

    /**
     * @brief Destroy the User object
     * 
     */
    virtual ~User(){}
};


#endif // USER_H
