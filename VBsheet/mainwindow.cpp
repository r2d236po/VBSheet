#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),ptCurrentMatch(new Match),uiPrematch(NULL),uiTeamlist(NULL),currentSaveorOpenLocation("")
{
    ui->setupUi(this);
    connect(ui->actionQuitter, SIGNAL(triggered(bool)), this, SLOT(exit()));
    connect(qApp,SIGNAL(aboutToQuit()),this,SLOT(exit()));
    connect(ui->actionEditer_un_match,SIGNAL(triggered(bool)),this,SLOT(openMatch()));
    connect(ui->actionInfos_match,SIGNAL(triggered(bool)),this,SLOT(setUiInfosMatch()));
    connect(ui->actionTeam_dition,SIGNAL(triggered(bool)),this,SLOT(setUiTeamList()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openMatch()
{
    currentSaveorOpenLocation = QFileDialog::getOpenFileName(this,tr("Ouvrir un match existant"),QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),0);
    QSettings fichier_lire(currentSaveorOpenLocation,QSettings::IniFormat);
    *(ptCurrentMatch) = fichier_lire.value("Match",qVariantFromValue(Match())).value<Match>();
    setUiTeamList();
}
void MainWindow::save()
{
    if(currentSaveorOpenLocation != ""){
        ptCurrentMatch->saveMatch(currentSaveorOpenLocation);
    }else
    {
        ptCurrentMatch->saveMatch();
    }
    ptCurrentMatch->setSaveFlag(false);
}
void MainWindow::exit()
{
    if(ptCurrentMatch->getSaveFlag()){
        save();
        this->ptCurrentMatch = nullptr;
    }
    close();
}
void MainWindow::setUiTeamList()
{
    if(!uiTeamlist)
    {
        if(uiPrematch)
        {
            uiPrematch->saveInfos();
            qDebug() << "save Infos" << endl;
        }
        if(ptCurrentMatch)
        {
            uiTeamlist = new TeamlistV2(this,ptCurrentMatch);
        }
        qDebug() << "Setup ui team list" << endl;
        this->setCentralWidget(uiTeamlist);
        uiPrematch = NULL;
    }
}

void MainWindow::setUiInfosMatch()
{
    if(!uiPrematch)
    {
        if(uiTeamlist)
        {
            qDebug() << "save TeamList" << endl;
            uiTeamlist->saveAll();
        }
        if(ptCurrentMatch)
        {
            uiPrematch = new Prematch(this,ptCurrentMatch);
        }
        qDebug() << "Setup ui Info match" << endl;
        this->setCentralWidget(uiPrematch);
        uiTeamlist = NULL;
    }
}
void MainWindow::setSaveFlag(bool b)
{
    ptCurrentMatch->setSaveFlag(b);
}
