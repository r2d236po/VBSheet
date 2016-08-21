#include "team.h"

Team::Team()
{
}
Team::Team(const Team &teamToBeCopied)
{
    this->coach = teamToBeCopied.coach;
    this->helpCoach = teamToBeCopied.helpCoach;
    this->helpCoach2 = teamToBeCopied.helpCoach2;
    this->medic = teamToBeCopied.medic;
    this->trainer = teamToBeCopied.trainer;
    for (int i = 0; i < 14; ++i) {
        this->playeurs[i] = teamToBeCopied.playeurs[i];
    }
}
void Team::addPlayer(int index, int number, QString name, long long licenceNumb, bool captain)
{
    this->playeurs[index] = Joueur(number,name,licenceNumb,captain);
}
Joueur * Team::getTabJoueur()
{
    return this->playeurs;
}

Person * Team::getCoach()
{
    return &(this->coach);
}
Person * Team::getHelpCoach()
{
    return &(this->helpCoach);
}
Person * Team::getHelpCoach2()
{
    return &(this->helpCoach2);
}
Person * Team::getTrainer()
{
    return &(this->trainer);
}
Person * Team::getMedic()
{
    return &this->medic;
}
QDataStream & operator << (QDataStream & out, const Team & teamToPrint)
{
    out << teamToPrint.playeurs[0]
        << teamToPrint.playeurs[1]
        << teamToPrint.playeurs[2]
        << teamToPrint.playeurs[3]
        << teamToPrint.playeurs[4]
        << teamToPrint.playeurs[5]
        << teamToPrint.playeurs[6]
        << teamToPrint.playeurs[7]
        << teamToPrint.playeurs[8]
        << teamToPrint.playeurs[9]
        << teamToPrint.playeurs[10]
        << teamToPrint.playeurs[11]
        << teamToPrint.playeurs[12]
        << teamToPrint.playeurs[13]
        << teamToPrint.coach
        << teamToPrint.helpCoach
        << teamToPrint.helpCoach2
        << teamToPrint.trainer
        << teamToPrint.medic;
    return out;
}
QDataStream & operator >> (QDataStream & in, Team & teamToSet)
{
    in >> teamToSet.playeurs[0]
       >> teamToSet.playeurs[1]
       >> teamToSet.playeurs[2]
       >> teamToSet.playeurs[3]
       >> teamToSet.playeurs[4]
       >> teamToSet.playeurs[5]
       >> teamToSet.playeurs[6]
       >> teamToSet.playeurs[7]
       >> teamToSet.playeurs[8]
       >> teamToSet.playeurs[9]
       >> teamToSet.playeurs[10]
       >> teamToSet.playeurs[11]
       >> teamToSet.playeurs[12]
       >> teamToSet.playeurs[13]
       >> teamToSet.coach
       >> teamToSet.helpCoach
       >> teamToSet.helpCoach2
       >> teamToSet.trainer
       >> teamToSet.medic;
    return in;
}
