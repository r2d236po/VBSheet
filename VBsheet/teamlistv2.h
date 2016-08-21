#ifndef TEAMLISTV2_H
#define TEAMLISTV2_H

#include "match.h"
#include "team.h"
#include "referee.h"

#include <QWidget>
#include <QAbstractButton>

namespace Ui {
class TeamlistV2;
}

class TeamlistV2 : public QWidget
{
    Q_OBJECT

public:
    explicit TeamlistV2(QWidget *parent = nullptr, Match *ptMAtch =nullptr);
    void saveReferees();
    void saveTeam1Infos();
    void saveTeam2Infos();
    void saveAll();

    void setTeam1Infos();
    void setTeam2Infos();
    void setRefereesInfos();
    void setPtMatch(Match * match);
    void updateInfos();
    ~TeamlistV2();

private:
    Ui::TeamlistV2 *ui;
    Match * ptMatch;

public slots:
    void switchInfoTable();
    void saveAndQuit();
    void cancel();
    void setColorButtonRed(bool red);
};

#endif // TEAMLISTV2_H
