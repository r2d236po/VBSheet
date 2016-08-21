#include "prematch.h"
#include "ui_prematch.h"

Prematch::Prematch(QWidget *parent, Match *ptMatch) :
    QWidget(parent),
    ui(new Ui::Prematch)
{

    qDebug() << "Create ui Prematch" << endl;
    ui->setupUi(this);
    ui->date->setDateTime(QDateTime::currentDateTime());
    connect(ui->man,SIGNAL(clicked(bool)),ui->woman,SLOT(toggle()));
    connect(ui->woman,SIGNAL(clicked(bool)),ui->man,SLOT(toggle()));
    connect(ui->senior,SIGNAL(clicked(bool)),ui->category,SLOT(setDisabled(bool)));
    connect(ui->senior,SIGNAL(pressed()),ui->category,SLOT(clear()));
    connect(ui->cancel,SIGNAL(clicked(bool)),this,SLOT(updatesInfos()));
    connect(ui->sauvegarder,SIGNAL(clicked(bool)),this,SLOT(saveInfos()));
    this->ptMatch = ptMatch;
    this->updatesInfos();
}
Prematch::~Prematch()
{

    qDebug() << "Delete ui prematch" << endl;
    delete ui;
}
void Prematch::updatesInfos(){
    if(ptMatch!= nullptr){
        ui->name->setText(ptMatch->getCompName());
        ui->town->setText(ptMatch->getTown());
        ui->hall->setText(ptMatch->getHall());
        ui->pool->setText(ptMatch->getPool());
        ui->matchNumber->setValue(ptMatch->getMatchNumber());
        ui->man->setChecked(ptMatch->getManBool());
        ui->woman->setChecked(!ptMatch->getManBool());
        ui->senior->setChecked(ptMatch->getSeniorBool());
        if(!ptMatch->getSeniorBool()){
            ui->category->setText(ptMatch->getCategory());
            ui->category->setEnabled(true);
        }else ui->category->clear();
        ui->date->setDateTime(*(ptMatch->getDate()));
        ui->team1->setText(ptMatch->getTeam1());
        ui->team2->setText(ptMatch->getTeam2());
    }
}
void Prematch::saveInfos()
{
    if(ptMatch)
    {
        this->ptMatch->setCompName(ui->name->text());
        this->ptMatch->setTown(ui->town->text());
        this->ptMatch->setHall(ui->hall->text());
        this->ptMatch->setPool(ui->pool->text());
        this->ptMatch->setMatchNumber(ui->matchNumber->value());
        this->ptMatch->setManOrWoman(ui->man->isChecked(),ui->woman->isChecked());
        this->ptMatch->setDate(ui->date->dateTime());
        this->ptMatch->setTeam1(ui->team1->text());
        this->ptMatch->setTeam2(ui->team2->text());

        if(ui->senior->isChecked())
        {
            this->ptMatch->setCategory(true);
        }else
        {
            this->ptMatch->setCategory(false);
            this->ptMatch->setCategory(ui->category->text());
        }
    }
}
void Prematch::setPtMatch(Match * Match){
    this->ptMatch = Match;
}

