#include "paperimpl.h"

PaperImpl::PaperImpl(){}

PaperImpl::PaperImpl(bool is_admin){
    this->is_admin = is_admin;
}

Paper* PaperImpl::create_paper(bool is_admin){
    return new PaperImpl(is_admin);
}

Paper* Paper::create_paper(bool is_admin){
    return PaperImpl::create_paper(is_admin);
}

PaperImpl::~PaperImpl(){}

bool PaperImpl::get_is_admin(){
    return this->is_admin;
}

void PaperImpl::set_is_admin(bool is_admin){
    this->is_admin = is_admin;
}
