#ifndef CREATE_USER_H
#define CREATE_USER_H

#include "src/entity/user.h"

/**
 * @brief Create a user object
 * 
 * @param email 
 * @param user 
 * @param password 
 * @param paper 
 * @return User* 
 */
User* create_user(string email, string user, string password, Paper* paper);

#endif // CREATE_USER_H
