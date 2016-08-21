#include "person.h"

int idPerson = 0;

Person::Person()
{
    this->surnameName = "";
    this->licenceNumb = 0;
}
Person::Person(QString &surnameName, long long &licenceNumb)
{
    this->surnameName = surnameName;
    this->licenceNumb = licenceNumb;
}
Person::Person(const Person & personToBeCopied)
{
    this->surnameName = personToBeCopied.surnameName;
    this->licenceNumb = personToBeCopied.licenceNumb;
}
Person::~Person()
{

}
void Person::setPersonInfo(QString & surnameName,long long &licenceNumb)
{
    this->surnameName = surnameName;
    this->licenceNumb = licenceNumb;
}
QString Person::getPersonName() const
{
    return this->surnameName;
}
long long Person::getLicence() const
{
    return this->licenceNumb;
}

QDataStream & operator << (QDataStream & out, const Person & personToPrint)
{
    out << personToPrint.surnameName
        << personToPrint.licenceNumb;
    return out;
}

QDataStream & operator >> (QDataStream & in, Person & personToset)
{
    in >> personToset.surnameName;
    in >> personToset.licenceNumb;
    return in;
}
