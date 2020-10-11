#ifndef GENERATE_DUPLICITY_REPORT_H
#define GENERATE_DUPLICITY_REPORT_H

#include "src/entity/report.h"
#include "src/entity/reportImpl.h"
#include "src/services/readerCSV.hpp"
#include <vector>

using namespace std;

Report* generate_report(vector<Person*>);

#endif // GENERATE_DUPLICITY_REPORT_H
