#include "userimpl.h"

UserImpl::UserImpl(){}

UserImpl::UserImpl(string email, string user, string password, Paper* paper){
    this->email = email;
    this->user = user;
    this->password = password;
    this->paper = paper;
}

UserImpl::~UserImpl(){}

User* UserImpl::create_user(string email, string user, string password, Paper* paper){
    return new UserImpl(email, user, password, paper);
}

User* User::create_user(string email, string user, string password, Paper* paper){
    return UserImpl::create_user(email, user, password, paper);
}

string UserImpl::get_user(){
    return this->user;
}
void UserImpl::set_user(string user){
    this->user = user;
}

string UserImpl::get_password(){
    return this->email;
}
void UserImpl::set_password(string password){
    this->password = password;
}

string UserImpl::get_email(){
    return this->email;
}
void UserImpl::set_email(string email){
    this->email = email;
}

Paper* UserImpl::get_paper(){
    return this->paper;
}
void UserImpl::set_paper(Paper* paper){
    this->paper = paper;
}
