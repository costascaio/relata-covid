#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <boost/algorithm/string.hpp>
#include "entity/report.h"

using namespace std;

class ReaderCSV
{
    virtual vector<Person *> get_data() const = 0;
};
