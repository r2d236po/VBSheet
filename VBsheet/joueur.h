#ifndef JOUEUR_H
#define JOUEUR_H
#include "person.h"

class Joueur : public Person
{
public:
    Joueur();
    Joueur(int &number,QString &name,long long &licenceNumb,bool &captain);
    Joueur(const Joueur &joueurToBeCopied);
    ~Joueur();
    int getNumber() const;
private:
    int number;
    bool captain;

    friend QDataStream & operator << (QDataStream & out, const Joueur & joueurToPrint);
    friend QDataStream & operator >> (QDataStream & in, Joueur & joueurToSet);
};
Q_DECLARE_METATYPE(Joueur)
QDataStream & operator << (QDataStream & out, const Joueur & joueurToPrint);
QDataStream & operator >> (QDataStream & in, Joueur & joueurToSet);
#endif // JOUEUR_H


