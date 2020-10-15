#include "edit_user.h"

User* edit_user(User* user, string username, string email, string password, Paper* paper){
    user->set_email(email);
    user->set_paper(paper);
    user->set_password(password);
    user->set_user(username);
    return user;
}
