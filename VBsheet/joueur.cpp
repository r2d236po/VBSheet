#include "joueur.h"

Joueur::Joueur()
{

#if DEBUG_ON
    idPerson++;
    qDebug() << "creation Joueur IdO : " << QString::number(idPerson);
#endif
    this->number = 0;
    this->surnameName = "";
    this->licenceNumb = 0;
    this->captain =false;
}
Joueur::Joueur(int &number, QString &name, long long &licenceNumb, bool &captain)
{

#if DEBUG_ON
    idPerson++;
    qDebug() << "creation Joueur IdO : " << QString::number(idPerson);
#endif
    this->number = number;
    this->surnameName = name;
    this->licenceNumb = licenceNumb;
    this->captain =captain;
}
Joueur::Joueur(const Joueur &  joueurToBeCopied)
{

#if DEBUG_ON
    idPerson++;
    qDebug() << "creation Joueur IdO : " << QString::number(idPerson);
#endif
    this->number = joueurToBeCopied.number;
    this->surnameName = joueurToBeCopied.surnameName;
    this->licenceNumb = joueurToBeCopied.licenceNumb;
    this->captain = joueurToBeCopied.captain;
}
Joueur::~Joueur()
{

#if DEBUG_ON
    idPerson--;
    qDebug() << "destruction Joueur IdO : " << QString::number(idPerson);
#endif

}

int Joueur::getNumber() const
{
    return this->number;
}
QDataStream & operator << (QDataStream & out, const Joueur & joueurToPrint)
{
    out << joueurToPrint.surnameName
        << joueurToPrint.licenceNumb
        << joueurToPrint.number
        << joueurToPrint.captain;
    return out;
}
QDataStream & operator >> (QDataStream & in, Joueur &joueurToSet)
{
    in >> joueurToSet.surnameName
            >> joueurToSet.licenceNumb
            >> joueurToSet.number
            >> joueurToSet.captain;
    return in;
}
