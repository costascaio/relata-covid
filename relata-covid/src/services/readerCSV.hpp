#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include "entity/report.h"

using namespace std;

vector<string> split(const string &, const char &);
vector<Person *> reader_csv(const string &, const char &);
