#ifndef EDIT_USER_H
#define EDIT_USER_H

#include "src/entity/user.h"
#include <vector>

/**
 * @brief 
 * 
 * @param user 
 * @param username 
 * @param email 
 * @param password 
 * @param paper 
 * @return User* 
 */
User* edit_user(User* user, string username, string email, string password, Paper* paper);

#endif // EDIT_USER_H
