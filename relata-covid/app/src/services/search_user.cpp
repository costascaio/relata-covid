#include "search_user.h"

User* search_user(vector<User*>& users, string user){
    for (auto &search_user : users){
        if(search_user->get_user() == user){
            return search_user;
        }
    }
    return nullptr;
}