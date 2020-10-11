#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include "src/entity/report.h"

using namespace std;

void split(const string &, vector<string>, char);
vector<Person *> reader_csv(const string &, const char &);
