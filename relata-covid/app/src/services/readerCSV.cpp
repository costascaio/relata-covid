#include "readerCSV.hpp"

vector<string> split(const string &str, const char &sep)
{
    vector<string> vec_aux;
    stringstream ss(str);
    string token;
    while (getline(ss, token, sep))
        vec_aux.push_back(token);

    return vec_aux;
}

vector<Person *> reader_csv(const string &file_name, const char &sep)
{
    vector<Person *> data;
    ifstream file(file_name);
    string line = "";
    bool first_iteration = true;

    while (getline(file, line))
    {
        if (first_iteration)
        {
            first_iteration = false;
            continue;
        }

        vector<string> vec;

        vec = split(line, sep);

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
