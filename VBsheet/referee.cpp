#include "referee.h"

Referee::Referee() :ligue("")
{

#if DEBUG_ON
    idPerson++;
    qDebug() << "creation Referee IdO : " << QString::number(idPerson);
#endif
    this->licenceNumb = 0;
    this->surnameName = "";
}

Referee::Referee(QString &surnameName, long long &licenceNumb, const QString &ligue)
{

#if DEBUG_ON
    idPerson++;
    qDebug() << "creation Referee IdO : " << QString::number(idPerson);
#endif
    this->surnameName = surnameName;
    this->licenceNumb = licenceNumb;
    this->ligue = ligue;
}

Referee::Referee(const Referee & personToBeCopied)
{

#if DEBUG_ON
    idPerson++;
    qDebug() << "creation Referee IdO : " << QString::number(idPerson);
#endif
    this->surnameName = personToBeCopied.surnameName;
    this->licenceNumb = personToBeCopied.licenceNumb;
    this->ligue = personToBeCopied.ligue;
}
Referee::~Referee()
{

#if DEBUG_ON
    idPerson--;
    qDebug() << "destruction Referee IdO : " << QString::number(idPerson);
#endif

}


QString Referee::getLigue() const
{
    return this->ligue;
}

void Referee::setLigue(QString &ligue)
{
    this->ligue = ligue;
}
void Referee::setPersonInfo(QString &surnameName, long long &licenceNumb,QString &ligue)
{
    this->surnameName = surnameName;
    this->licenceNumb = licenceNumb;
    this->ligue = ligue;
}
QDataStream & operator << (QDataStream & out, const Referee & refereeToPrint)
{
    out << refereeToPrint.surnameName
        << refereeToPrint.licenceNumb
        << refereeToPrint.ligue;
    return out;
}
QDataStream & operator >> (QDataStream & in, Referee & refereeToSet)
{
    in >> refereeToSet.surnameName
            >> refereeToSet.licenceNumb
            >> refereeToSet.ligue;
    return in;
}
