#include "define_paper.h"

void define_paper(User* user, bool is_admin){
    user->get_paper()->set_is_admin(is_admin);
}
