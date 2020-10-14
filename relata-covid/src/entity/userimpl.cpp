#include "userimpl.h"

UserImpl::UserImpl(){}

UserImpl::~UserImpl(){}

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
