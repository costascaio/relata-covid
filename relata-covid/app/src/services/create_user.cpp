#include "create_user.h"

User* create_user(string email, string user, string password, Paper* paper){
    return User::create_user(email, user, password, paper);
}