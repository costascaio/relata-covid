#include "paperimpl.h"

PaperImpl::PaperImpl(){}


PaperImpl::~PaperImpl(){}

bool PaperImpl::get_is_admin(){
    return this->is_admin;
}

void PaperImpl::set_is_admin(bool is_admin){
    this->is_admin = is_admin;
}
