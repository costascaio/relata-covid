#ifndef GENERATE_DUPLICITY_REPORT_H
#define GENERATE_DUPLICITY_REPORT_H

#include "src/entity/report.h"
#include "src/entity/reportImpl.h"
#include "src/services/readerCSV.hpp"
#include <vector>

using namespace std;

/**
 * @brief this functionality generates a duplicity report.
 * 
 * @return Report* 
 */
Report* generate_report(vector<Person*>&, vector<Person*>&);

#endif // GENERATE_DUPLICITY_REPORT_H
