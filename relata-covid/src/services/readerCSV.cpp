#include "readerCSV.hpp"

void split(const string &str, vector<string> vec, char sep)
{
    stringstream ss(str);
    string token;
    while (getline(ss, token, sep))
        vec.push_back(token);
}

vector<Person *> reader_csv(const string &file_name, const char &sep)
{
    vector<Person *> data;
    ifstream file(file_name);
    string line = "";

    while (getline(file, line))
    {
        vector<string> vec;

        split(line, vec, sep);

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