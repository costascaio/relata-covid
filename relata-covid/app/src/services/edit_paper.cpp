#include "edit_paper.h"

void edit_paper(User* user, bool is_admin){
    user->get_paper()->set_is_admin(is_admin);
}