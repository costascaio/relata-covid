#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <boost/algorithm/string.hpp>
#include "entity/report.h"

using namespace std;

vector<Person *> reader_csv(const string &, const string &);
