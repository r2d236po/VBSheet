#ifndef REFEREE_H
#define REFEREE_H

#include "person.h"

class Referee : public Person
{
public:

    Referee();
    Referee(QString & surnameName, long long & licenceNumb,const QString & ligue);
    Referee(const Referee & personToBeCopied);
    ~Referee();
    QString getLigue() const;
    void setPersonInfo(QString &surnameName,long long &licenceNumb,QString &ligue);
    void setLigue(QString &ligue);

private:
    QString ligue;
    friend QDataStream & operator << (QDataStream & out, const Referee & refereeToPrint);
    friend QDataStream & operator >> (QDataStream & in, Referee & refereeToSet);

};
Q_DECLARE_METATYPE(Referee)
QDataStream & operator << (QDataStream & out, const Referee & refereeToPrint);
QDataStream & operator >> (QDataStream & in, Referee & refereeToSet);

#endif // REFEREE_H
