#include "remove_user.h"

bool remove_user(vector<User*>& users, User* user_to_be_removed){
    int count = 0;
    for (auto &user : users){
        if(user->get_user() == user_to_be_removed->get_user()){
            users.erase(users.begin() + count);
            return true;
        }
    }
    return false;
}