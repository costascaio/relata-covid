#include "create_paper.h"

Paper* create_paper(bool is_admin){
    return Paper::create_paper(is_admin);
}
