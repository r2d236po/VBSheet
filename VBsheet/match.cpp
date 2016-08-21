#include "match.h"


Match::Match()
{
    category = "";
    date = QDateTime::currentDateTime();
    hall = "";
    man = true;
    matchNumber = 0;
    name = "";
    pool = "";
    senior = true;
    category = "";
    town = "";
    woman = false;
    needToBeSave = false;
}
Match::Match(const Match & copie)
{
    name = copie.name;
    town = copie.town;
    hall = copie.hall;
    pool = copie.pool;
    category = copie.category;
    nameTeam1 = copie.nameTeam1;
    nameTeam2 = copie.nameTeam2;
    matchNumber = copie.matchNumber;
    man = copie.man;
    woman = copie.woman;
    senior = copie.senior;
    date = copie.date;
    team1 = copie.team1;
    team2 = copie.team2;
    arbitre1 = copie.arbitre1;
    arbitre2 = copie.arbitre2;
    marqueur = copie.marqueur;
    marqueur2 = copie.marqueur2;
    jugeLigne1 = copie.jugeLigne1;
    jugeLigne2 = copie.jugeLigne2;
    jugeLigne3 = copie.jugeLigne3;
    jugeLigne4 = copie.jugeLigne4;
    needToBeSave = copie.needToBeSave;

}
Match::~Match()
{
}
QString Match::getCompName() const
{
    return this->name;
}
QString Match::getTown() const
{
    return this->town;
}
QString Match::getHall() const
{
    return this->hall;
}
QString Match::getPool() const
{
    return this->pool;
}
QString Match::getCategory() const
{
    return this->category;
}
QString Match::getTeam1() const
{
    return this->nameTeam1;
}
QString Match::getTeam2() const
{
    return this->nameTeam2;
}
int Match::getMatchNumber() const
{
    return this->matchNumber;
}
bool Match::getManBool() const
{
    return this->man;
}
bool Match::getSeniorBool() const
{
    return this->senior;
}
bool Match::getSaveFlag() const
{
    return needToBeSave;
}
void Match::setCompName(QString name)
{
    this->name = name;
}
void Match::setTown(QString town)
{
    this->town = town;
}
void Match::setHall(QString hall)
{
    this->hall = hall;
}
void Match::setPool(QString pool)
{
    this->pool = pool;
}
void Match::setMatchNumber(int matchNumber)
{
    this->matchNumber = matchNumber;
}
void Match::setManOrWoman(bool man,bool woman)
{
    this->man = man;
    this->woman = woman;
}
void Match::setCategory(QString category)
{
    this->senior = false;
    this->category = category;
}
void Match::setCategory(bool senior)
{
    this->senior = senior;
    this->category = "";
}
void Match::setDate(QDateTime date)
{
    this->date = date;
}
void Match::setTeam1(QString teamName)
{
    this->nameTeam1 = teamName;
}
void Match::setTeam2(QString teamName)
{
    this->nameTeam2 = teamName;
}
void Match::setSaveFlag(bool b)
{
    needToBeSave = b;
}
Team * Match::getPtTeam1()
{
    return &(this->team1);
}
Team * Match::getPtTeam2()
{
    return &(this->team2);
}
Referee * Match::getArbitre1()
{
    return &(this->arbitre1);
}
Referee * Match::getArbitre2()
{
    return &(this->arbitre2);
}
Referee * Match::getMarqueur()
{
    return &(this->marqueur);
}
Referee * Match::getMarqueur2()
{
    return &(this->marqueur2);
}
Referee * Match::getJugeLigne1()
{
    return &(this->jugeLigne1);
}
Referee * Match::getJugeLigne2()
{
    return &(this->jugeLigne2);
}
Referee * Match::getJugeLigne3()
{
    return &(this->jugeLigne3);
}
Referee * Match::getJugeLigne4()
{
    return &(this->jugeLigne4);
}
QDateTime * Match::getDate()
{
    return &(this->date);
}
void Match::writeInfoInFlux(QFile & file)
{
    QTextStream flux(&file);
    flux.setCodec("UTF-8");
    flux << "Fichier de sauvegarde du Match : " << this->getTeam1() << " / " << this->getTeam2() << endl;
    flux << this->getCompName() << endl;
    flux << this->getTown() << endl;
    flux << this->getPool() << endl;
    flux << this->getCategory() << endl;
    flux << this->getTeam1() << endl;
    flux << this->getTeam2() << endl;
    flux << this->date.toString("dd.MM.yyyy") << endl;
    flux << this->getManBool() << endl;
    flux << this->getSeniorBool() << endl;
    flux << this->getArbitre1();
}
QDataStream & operator << (QDataStream & out, const Match & matchToPrint)
{
    out << matchToPrint.name
    << matchToPrint.town
    << matchToPrint.hall
    << matchToPrint.pool
    << matchToPrint.matchNumber
    << matchToPrint.category
    << matchToPrint.nameTeam1
    << matchToPrint.nameTeam2
    << matchToPrint.date
    << matchToPrint.man
    << matchToPrint.senior
    << matchToPrint.arbitre1
    << matchToPrint.arbitre2
    << matchToPrint.marqueur
    << matchToPrint.marqueur2
    << matchToPrint.jugeLigne1
    << matchToPrint.jugeLigne2
    << matchToPrint.jugeLigne3
    << matchToPrint.jugeLigne4
    << matchToPrint.team1
    << matchToPrint.team2;
    return out;
}
QDataStream & operator >> (QDataStream & in, Match & matchToSet)
{
    in >> matchToSet.name;
    in >> matchToSet.town;
    in >> matchToSet.hall;
    in >> matchToSet.pool;
    in >> matchToSet.matchNumber;
    in >> matchToSet.category;
    in >> matchToSet.nameTeam1;
    in >> matchToSet.nameTeam2;
    in >> matchToSet.date;
    in >> matchToSet.man;
    in >> matchToSet.senior;
    in >> matchToSet.arbitre1;
    in >> matchToSet.arbitre2;
    in >> matchToSet.marqueur;
    in >> matchToSet.marqueur2;
    in >> matchToSet.jugeLigne1;
    in >> matchToSet.jugeLigne2;
    in >> matchToSet.jugeLigne3;
    in >> matchToSet.jugeLigne4;
    in >> matchToSet.team1;
    in >> matchToSet.team2;
    return in;
}
void Match::initmatchSystem()
{
    qRegisterMetaTypeStreamOperators<Match>("Match");
    qMetaTypeId<Match>();				// Teste la validité de la classe Contact
}
void Match::saveMatch()
{
    QString saveLocation = QFileDialog::getOpenFileName(0,QObject::tr("Ouvrir un match existant"),QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),0);
    QSettings fichier_ecrire(saveLocation, QSettings::IniFormat);
    fichier_ecrire.setValue("Match", qVariantFromValue(*this));
    fichier_ecrire.sync();
}
void Match::saveMatch(QString &saveLocation)
{
    QSettings fichier_ecrire(saveLocation, QSettings::IniFormat);
    fichier_ecrire.setValue("Match", qVariantFromValue(*this));
    fichier_ecrire.sync();
}
