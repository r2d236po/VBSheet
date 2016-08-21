#ifndef TEAM_H
#define TEAM_H
#include <QVector>
#include "joueur.h"
#include "person.h"
#include "referee.h"

class Team
{
public:
    Team();
    Team(const Team &teamToBeCopied);
    void addPlayer(int index,int number,QString name,long long licenceNumb,bool captain);
    Joueur * getTabJoueur();
    Person * getCoach();
    Person * getHelpCoach();
    Person * getHelpCoach2();
    Person * getTrainer();
    Person * getMedic();
private:
    Joueur playeurs[14];
    Person coach;
    Person helpCoach;
    Person helpCoach2;
    Person trainer;
    Person medic;

    friend QDataStream & operator << (QDataStream & out, const Team & teamToPrint);
    friend QDataStream & operator >> (QDataStream & in, Team & teamToSet);

};
Q_DECLARE_METATYPE(Team)
QDataStream & operator << (QDataStream & out, const Team & teamToPrint);
QDataStream & operator >> (QDataStream & in, Team & teamToSet);
#endif // TEAM_H
