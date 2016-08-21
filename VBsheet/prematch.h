#ifndef PREMATCH_H
#define PREMATCH_H

#include <QWidget>
#include <QAbstractButton>
#include "match.h"

namespace Ui {
class Prematch;
}

class Prematch : public QWidget
{
    Q_OBJECT

public:
    explicit Prematch(QWidget *parent = 0, Match *ptMatch = nullptr);
    void setPtMatch(Match * match);
    ~Prematch();

public slots:
    void saveInfos();
    void updatesInfos();

private:
    Ui::Prematch *ui;
    Match * ptMatch;
};

#endif // PREMATCH_H
