#include "export_duplicity_report.h"

void export_duplicity_report(Report *report)
{
    fstream fout;

    fout.open("duplicity_report.csv", ios::out | ios::app);

    vector<Person *> peoples = report->getPeople();

    int number_duplicity = report->getDuplicity();

    vector<string> columns = {
        "Name",
        "CPF",
        "Address",
        "City Notification",
        "Phone",
        "Evolution",
        "Date Notification",
        "CEP",
        "Result  Test",
        "Gender",
        "Age",
        "Date Simptoms"
        "Number Of Duplicities"};

    for (string column : columns)
    {
        fout << column << ", ";
    }
    fout << "\n";

    for (int i = 0; i < peoples.size(); i++)
    {
        if (i == 0)
        {
            fout << peoples[i]->getName() << ", "
                 << peoples[i]->getCEP() << ", "
                 << peoples[i]->getAddress() << ", "
                 << peoples[i]->getCityName() << ", "
                 << peoples[i]->getPhone() << ", "
                 << peoples[i]->getEvolution() << ", "
                 << peoples[i]->getDateNotification() << ", "
                 << peoples[i]->getCEP() << ", "
                 << peoples[i]->getResultTest() << ", "
                 << peoples[i]->getGender() << ", "
                 << peoples[i]->getAge() << ", "
                 << peoples[i]->getDateSymptoms() << ", "
                 << number_duplicity
                 << "\n";
        }
        else
        {
            fout << peoples[i]->getName() << ", "
                 << peoples[i]->getCEP() << ", "
                 << peoples[i]->getAddress() << ", "
                 << peoples[i]->getCityName() << ", "
                 << peoples[i]->getPhone() << ", "
                 << peoples[i]->getEvolution() << ", "
                 << peoples[i]->getDateNotification() << ", "
                 << peoples[i]->getCEP() << ", "
                 << peoples[i]->getResultTest() << ", "
                 << peoples[i]->getGender() << ", "
                 << peoples[i]->getAge() << ", "
                 << peoples[i]->getDateSymptoms()
                 << "\n";
        }
    }

    fout.close();
}
