#ifndef REMOVE_USER_H
#define REMOVE_USER_H

#include "src/entity/user.h"
#include <vector>

/**
 * @brief 
 * 
 * @param users 
 * @param user_to_be_removed 
 * @return true 
 * @return false 
 */
bool remove_user(vector<User>& users, User* user_to_be_removed);

#endif // REMOVE_USER_H
