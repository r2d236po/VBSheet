#ifndef MATCH_H
#define MATCH_H
#include <QString>
#include <QDate>
#include <QFile>
#include <QVariant>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QSettings>
#include <QStandardPaths>

#include "team.h"
#include "person.h"
#include "referee.h"


class Match
{
public:
    Match();
    Match(const Match & copie);
    ~Match();

    QString getCompName() const;
    QString getTown() const;
    QString getHall() const;
    QString getPool() const;
    QString getCategory() const;
    QString getTeam1() const;
    QString getTeam2() const;
    int getMatchNumber() const;
    bool getManBool() const;
    bool getSeniorBool() const;
    bool getSaveFlag() const;
    Team * getPtTeam1();
    Team * getPtTeam2();
    Referee * getArbitre1();
    Referee * getArbitre2();
    Referee * getMarqueur();
    Referee * getMarqueur2();
    Referee * getJugeLigne1();
    Referee * getJugeLigne2();
    Referee * getJugeLigne3();
    Referee * getJugeLigne4();
    QDateTime * getDate();



    void setCompName(QString name);
    void setTown(QString town);
    void setHall(QString hall);
    void setPool(QString  pool);
    void setCategory(QString category);
    void setMatchNumber(int matchNumber);
    void setManOrWoman(bool man, bool woman);
    void setCategory (bool senior);
    void setDate(QDateTime date);
    void setTeam1(QString teamName);
    void setTeam2(QString teamName);
    void setSaveFlag(bool b);
    void saveMatch();
    void saveMatch(QString &saveLocation);

    void writeInfoInFlux(QFile &file);
    static void initmatchSystem();
private:
    QString name;
    QString town;
    QString hall;
    QString pool;
    QString category;
    QString nameTeam1;
    QString nameTeam2;

    int matchNumber;
    bool man;
    bool woman;
    bool senior;
    bool needToBeSave;
    QDateTime date;
    Team team1;
    Team team2;

    Referee arbitre1;
    Referee arbitre2;
    Referee marqueur;
    Referee marqueur2;
    Referee jugeLigne1;
    Referee jugeLigne2;
    Referee jugeLigne3;
    Referee jugeLigne4;

    friend QDataStream & operator << (QDataStream & out, const Match & matchToPrint);
    friend QDataStream & operator >> (QDataStream & in, Match & matchToPrint);
};

Q_DECLARE_METATYPE(Match)
QDataStream & operator << (QDataStream & out, const Match & matchToPrint);
QDataStream & operator >> (QDataStream & in, Match & matchToPrint);

#endif // MATCH_H


