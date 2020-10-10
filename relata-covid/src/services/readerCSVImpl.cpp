#include "readerCSVImpl.hpp"

ReaderCSVImpl::ReaderCSVImpl()
{
    file_name = "";
    sep = ',';
}

ReaderCSVImpl::ReaderCSVImpl(const string &file_name, const string &sep)
{
    this->file_name = file_name;
    this->sep = sep;
}

ReaderCSVImpl::~ReaderCSVImpl() {}

vector<Person *> ReaderCSVImpl::get_data()
{
    vector<Person *> data;
    ifstream file(file_name);
    string line = "";

    while (getline(file, line))
    {
        vector<string> vec;

        boost::split(vec, line, boost::is_any_of(sep));

        Report *r = Report::createReport();

        Person *p = r->createPerson(
            vec[0],
            vec[1],
            vec[2],
            vec[3],
            vec[4],
            vec[5],
            vec[6],
            vec[7],
            vec[8],
            vec[9],
            vec[10],
            vec[11]);

        data.push_back(p);
    }

    file.close();

    return data;
}