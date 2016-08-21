#ifndef PERSON_H
#define PERSON_H
#include <QString>
#include <QDataStream>
#include <QDebug>

#define DEBUG_ON 0
extern int idPerson;

class Person
{
public:
    Person();
    Person(QString &surnameName, long long &licenceNumb);
    Person(const Person & personToBeCopied);
    ~Person();
    QString  getPersonName()const;
    long long  getLicence()const;
    void setPersonInfo(QString &surnameName,long long &licenceNumb);

protected:
    QString surnameName;
    long long licenceNumb;

    friend QDataStream & operator << (QDataStream & out, const Person & personToPrint);
    friend QDataStream & operator >> (QDataStream & in, Person & personToset);
};

Q_DECLARE_METATYPE(Person)
QDataStream & operator << (QDataStream & out, const Person & personToPrint);
QDataStream & operator >> (QDataStream & in, Person & personToset);
#endif // PERSON_H
