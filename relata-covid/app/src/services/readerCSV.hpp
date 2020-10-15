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

/**
 * @brief this functionality split a string.
 * 
 * @return vector<string> 
 */
vector<string> split(const string &, const char &);
/**
 * @brief this functionality reads a csv file.
 * 
 * @return vector<Person *> 
 */
vector<Person *> reader_csv(const string &, const char &);
