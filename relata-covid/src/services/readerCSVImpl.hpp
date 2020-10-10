#pragma once

#include "readerCSV.h"

class ReaderCSVImpl : public ReaderCSV
{
private:
    string file_name;
    string sep;

public:
    ReaderCSVImpl();
    ReaderCSVImpl(const string &, const string &);
    ~ReaderCSVImpl();
    vector<Person *> get_data();
};