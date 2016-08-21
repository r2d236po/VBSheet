#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QStandardPaths>
#include <QSettings>
#include "match.h"
#include "prematch.h"
#include "teamlistv2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    bool needToSave = false;
    void save();
    void setSaveFlag(bool b);
    ~MainWindow();

public slots:
    void openMatch();
    void exit();
    void setUiTeamList();
    void setUiInfosMatch();

private:
    Ui::MainWindow *ui;
    Match * ptCurrentMatch;
    Prematch * uiPrematch;
    TeamlistV2 * uiTeamlist;
    QString currentSaveorOpenLocation;
};

#endif // MAINWINDOW_H
