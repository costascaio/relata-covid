#ifndef USERIMPL_H
#define USERIMPL_H

#include "User.h"

/**
 * @brief This class represents the implementation of the User entity.
 * 
 */
class UserImpl : public User
{
public:
    /**
     * @brief Construct a new User Impl object
     * 
     */
    UserImpl();
    /**
     * @brief Destroy the User Impl object
     * 
     */
    ~UserImpl();

    /**
     * @brief Get the user object
     * 
     * @return string 
     */
    string get_user();
    /**
     * @brief Set the user object
     * 
     */
    void set_user(string);

    /**
     * @brief Get the password object
     * 
     * @return string 
     */
    string get_password();
    /**
     * @brief Set the password object
     * 
     */
    void set_password(string);

    /**
     * @brief Get the email object
     * 
     * @return string 
     */
    string get_email();
    /**
     * @brief Set the email object
     * 
     */
    void set_email(string);

    /**
     * @brief Get the paper object
     * 
     * @return Paper* 
     */
    Paper* get_paper();
    /**
     * @brief Set the paper object
     * 
     */
    void set_paper(Paper*);


protected:
    string user;
    string password;
    string email;
    Paper* paper;
};

#endif // USERIMPL_H
