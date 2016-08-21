#include "teamlistv2.h"
#include "ui_teamlistv2.h"
#include <stdio.h>

TeamlistV2::TeamlistV2(QWidget *parent, Match *ptMAtch) :
    QWidget(parent),
    ui(new Ui::TeamlistV2)
{
    qDebug() << "Create ui Teamlist" << endl;
    ui->setupUi(this);
    ui->tableTeam1->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tableTeam1->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->tableTeam2->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tableTeam2->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->liberosTeam1->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->liberosTeam1->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->liberosTeam2->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->liberosTeam2->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);

    ui->officialTeam1->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->officialTeam1->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->officialTeam2->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->officialTeam2->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

    ui->arbitre->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->arbitre->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
    ui->arbitre->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);

    this->ptMatch = ptMAtch;
    connect(ui->switchInfo,SIGNAL(clicked(bool)),this,SLOT(switchInfoTable()));
    connect(ui->save,SIGNAL(clicked(bool)),this,SLOT(saveAndQuit()));
    connect(ui->cancel,SIGNAL(clicked(bool)),this,SLOT(cancel()));
    connect(ui->switchInfo_2,SIGNAL(clicked(bool)),this,SLOT(switchInfoTable()));
    connect(ui->save_2,SIGNAL(clicked(bool)),this,SLOT(saveAndQuit()));
    connect(ui->cancel2,SIGNAL(clicked(bool)),this,SLOT(cancel()));
    this->updateInfos();
}

TeamlistV2::~TeamlistV2()
{
    qDebug() << "Delete team list" << endl;
    delete ui;
}
void TeamlistV2::saveTeam1Infos()
{
    int num = 0;
    QString name = "";
    long long licence = 0;
    QTableWidgetItem * item1 = NULL;
    QTableWidgetItem * item2 = NULL;
    QTableWidgetItem * item3 = NULL;
    if(ptMatch !=0 ){
        //team 1 list joueur
        if(ptMatch->getPtTeam1() !=0 ){
            for (int i = 0; i < ui->tableTeam1->rowCount(); ++i)
            {
                num = 0;
                name = "";
                licence = 0;

                item1 = ui->tableTeam1->item(i,0);
                item2 = ui->tableTeam1->item(i,1);
                item3 = ui->tableTeam1->item(i,2);
                if(item1)
                {
                    num = item1->text().toInt();
                }
                if(item2)
                {
                    name = item2->text();
                }
                if(item3)
                {
                    licence = item3->text().toLongLong();
                }
                ptMatch->getPtTeam1()->addPlayer(i,num,name,licence,false);//changer pour voir si captain
            }
            //Liberos
            for (int i = 0; i < ui->liberosTeam1->rowCount(); ++i)
            {
                num = 0;
                name = "";
                licence = 0;

                item1 = ui->liberosTeam1->item(i,0);
                item2 = ui->liberosTeam1->item(i,1);
                item3 = ui->liberosTeam1->item(i,2);
                if(item1)
                {
                    num = item1->text().toInt();
                }
                if(item2)
                {
                    name = item2->text();
                }
                if(item3)
                {
                    licence = item3->text().toLongLong();
                }
                ptMatch->getPtTeam1()->addPlayer(i+12,num,name,licence,false);//changer pour voir si captain
            }
            //Staff1
            name = "";
            licence = 0;
            item1 = ui->officialTeam1->item(0,0);
            item2 = ui->officialTeam1->item(0,1);
            if(item1 !=0 ){
                name = item1->text();
            }
            if(item2 != 0){
                licence = item2->text().toInt();
            }
            this->ptMatch->getPtTeam1()->getCoach()->setPersonInfo(name,licence);
            name = "";
            licence = 0;
            item1 = ui->officialTeam1->item(1,0);
            item2 = ui->officialTeam1->item(1,1);
            if(item1 !=0 ){
                name = item1->text();
            }
            if(item2 != 0){
                licence = item2->text().toInt();
            }
            this->ptMatch->getPtTeam1()->getHelpCoach()->setPersonInfo(name,licence);

            name = "";
            licence = 0;
            item1 = ui->officialTeam1->item(2,0);
            item2 = ui->officialTeam1->item(2,1);
            if(item1 !=0 ){
                name = item1->text();
            }
            if(item2 != 0){
                licence = item2->text().toInt();
            }
            this->ptMatch->getPtTeam1()->getHelpCoach2()->setPersonInfo(name,licence);

            name = "";
            licence = 0;
            item1 = ui->officialTeam1->item(3,0);
            item2 = ui->officialTeam1->item(3,1);
            if(item1 !=0 ){
                name = item1->text();
            }
            if(item2 != 0){
                licence = item2->text().toInt();
            }
            this->ptMatch->getPtTeam1()->getTrainer()->setPersonInfo(name,licence);

            name = "";
            licence = 0;
            item1 = ui->officialTeam1->item(4,0);
            item2 = ui->officialTeam1->item(4,1);
            if(item1 !=0 ){
                name = item1->text();
            }
            if(item2 != 0){
                licence = item2->text().toInt();
            }
            this->ptMatch->getPtTeam1()->getMedic()->setPersonInfo(name,licence);
        }
    }
}
void TeamlistV2::saveTeam2Infos()
{
    int num = 0;
    QString name = "";
    QString ligue = "";
    long long licence = 0;
    QTableWidgetItem * item1 = NULL;
    QTableWidgetItem * item2 = NULL;
    QTableWidgetItem * item3 = NULL;
    if(ptMatch !=0 ){
        //team 2 list joueur
        if(ptMatch->getPtTeam2() !=0 ){
            for (int i = 0; i < ui->tableTeam2->rowCount(); ++i)
            {
                num = 0;
                name = "";
                licence = 0;

                item1 = ui->tableTeam2->item(i,0);
                item2 = ui->tableTeam2->item(i,1);
                item3 = ui->tableTeam2->item(i,2);
                if(item1)
                {
                    num = item1->text().toInt();
                }
                if(item2)
                {
                    name = item2->text();
                }
                if(item3)
                {
                    licence = item3->text().toLongLong();
                }
                ptMatch->getPtTeam2()->addPlayer(i,num,name,licence,false);//changer pour voir si captain

            }

            //Liberos team2
            for (int i = 0; i < ui->liberosTeam2->rowCount(); ++i)
            {
                num = 0;
                name = "";
                licence = 0;

                QTableWidgetItem * item1 = ui->liberosTeam2->item(i,0);
                QTableWidgetItem * item2 = ui->liberosTeam2->item(i,1);
                QTableWidgetItem * item3 = ui->liberosTeam2->item(i,2);
                if(item1)
                {
                    num = item1->text().toInt();
                }
                if(item2)
                {
                    name = item2->text();
                }
                if(item3)
                {
                    licence = item3->text().toLongLong();
                }
                ptMatch->getPtTeam2()->addPlayer(i+12,num,name,licence,false);//changer pour voir si captain
            }

            //Staff2
            name = "";
            licence = 0;
            item1 = ui->officialTeam2->item(0,0);
            item2 = ui->officialTeam2->item(0,1);
            if(item1 !=0 ){
                name = item1->text();
            }
            if(item2 != 0){
                licence = item2->text().toInt();
            }
            this->ptMatch->getPtTeam2()->getCoach()->setPersonInfo(name,licence);

            name = "";
            licence = 0;
            item1 = ui->officialTeam2->item(1,0);
            item2 = ui->officialTeam2->item(1,1);
            if(item1 !=0 ){
                name = item1->text();
            }
            if(item2 != 0){
                licence = item2->text().toInt();
            }
            this->ptMatch->getPtTeam2()->getHelpCoach()->setPersonInfo(name,licence);

            name = "";
            licence = 0;
            item1 = ui->officialTeam2->item(2,0);
            item2 = ui->officialTeam2->item(2,1);
            if(item1 !=0 ){
                name = item1->text();
            }
            if(item2 != 0){
                licence = item2->text().toInt();
            }
            this->ptMatch->getPtTeam2()->getHelpCoach2()->setPersonInfo(name,licence);

            name = "";
            licence = 0;
            item1 = ui->officialTeam2->item(3,0);
            item2 = ui->officialTeam2->item(3,1);
            if(item1 !=0 ){
                name = item1->text();
            }
            if(item2 != 0){
                licence = item2->text().toInt();
            }
            this->ptMatch->getPtTeam2()->getTrainer()->setPersonInfo(name,licence);

            name = "";
            licence = 0;
            item1 = ui->officialTeam2->item(4,0);
            item2 = ui->officialTeam2->item(4,1);
            if(item1 !=0 ){
                name = item1->text();
            }
            if(item2 != 0){
                licence = item2->text().toInt();
            }
        }

    }
}
void TeamlistV2::saveReferees()
{
    QString name = "";
    QString ligue = "";
    long long licence = 0;
    QTableWidgetItem * item1 = NULL;
    QTableWidgetItem * item2 = NULL;
    QTableWidgetItem * item3 = NULL;
    //arbitre
    if(ptMatch !=0 ){
        /*////////////////////////ARBITRE///////////////*/
        name = "";
        licence = 0;
        ligue = "";
        item1 = ui->arbitre->item(0,0);
        item2 = ui->arbitre->item(0,1);
        item3 = ui->arbitre->item(0,2);
        if(item1 !=0 ){
            name = item1->text();
        }
        if(item2 != 0){

            ligue = item2->text();
        }
        if(item3 != 0){
            licence = item3->text().toInt();
        }
        this->ptMatch->getArbitre1()->setPersonInfo(name,licence,ligue);

        name = "";
        licence = 0;
        ligue = "";
        item1 = ui->arbitre->item(1,0);
        item2 = ui->arbitre->item(1,1);
        item3 = ui->arbitre->item(1,2);
        if(item1 !=0 ){
            name = item1->text();
        }
        if(item2 != 0){

            ligue = item2->text();
        }
        if(item3 != 0){
            licence = item3->text().toInt();
        }
        this->ptMatch->getArbitre2()->setPersonInfo(name,licence,ligue);

        name = "";
        licence = 0;
        ligue = "";
        item1 = ui->arbitre->item(2,0);
        item2 = ui->arbitre->item(2,1);
        item3 = ui->arbitre->item(2,2);
        if(item1 != 0){
            name = item1->text();
        }
        if(item2 != 0){

            ligue = item2->text();
        }
        if(item3 != 0){
            licence = item3->text().toInt();
        }
        this->ptMatch->getMarqueur()->setPersonInfo(name,licence,ligue);

        name = "";
        licence = 0;
        ligue = "";
        item1 = ui->arbitre->item(3,0);
        item2 = ui->arbitre->item(3,1);
        item3 = ui->arbitre->item(3,2);
        if(item1 != 0){
            name = item1->text();
        }
        if(item2 != 0){

            ligue = item2->text();
        }
        if(item3 != 0){
            licence = item3->text().toInt();
        }
        this->ptMatch->getMarqueur2()->setPersonInfo(name,licence,ligue);

        name = "";
        licence = 0;
        ligue = "";
        item1 = ui->arbitre->item(4,0);
        item2 = ui->arbitre->item(4,1);
        item3 = ui->arbitre->item(4,2);
        if(item1 != 0){
            name = item1->text();
        }
        if(item2 != 0){

            ligue = item2->text();
        }
        if(item3 != 0){
            licence = item3->text().toInt();
        }
        this->ptMatch->getJugeLigne1()->setPersonInfo(name,licence,ligue);

        name = "";
        licence = 0;
        ligue = "";
        item1 = ui->arbitre->item(5,0);
        item2 = ui->arbitre->item(5,1);
        item3 = ui->arbitre->item(5,2);
        if(item1 != 0){
            name = item1->text();
        }
        if(item2 != 0){

            ligue = item2->text();
        }
        if(item3 != 0){
            licence = item3->text().toInt();
        }
        this->ptMatch->getJugeLigne2()->setPersonInfo(name,licence,ligue);

        name = "";
        licence = 0;
        ligue = "";
        item1 = ui->arbitre->item(6,0);
        item2 = ui->arbitre->item(6,1);
        item3 = ui->arbitre->item(6,2);
        if(item1 != 0){
            name = item1->text();
        }
        if(item2 != 0){

            ligue = item2->text();
        }
        if(item3 != 0){
            licence = item3->text().toInt();
        }
        this->ptMatch->getJugeLigne3()->setPersonInfo(name,licence,ligue);

        name = "";
        licence = 0;
        ligue = "";
        item1 = ui->arbitre->item(7,0);
        item2 = ui->arbitre->item(7,1);
        item3 = ui->arbitre->item(7,2);
        if(item1 != 0){
            name = item1->text();
        }
        if(item2 != 0){

            ligue = item2->text();
        }
        if(item3 != 0){
            licence = item3->text().toInt();
        }
        this->ptMatch->getJugeLigne4()->setPersonInfo(name,licence,ligue);
    }
}
void TeamlistV2::switchInfoTable()
{
    saveAll();
    if(ptMatch->getPtTeam1() !=0){
        for (int i = 0; i < ui->tableTeam1->rowCount(); ++i)
        {
            if(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getNumber() != 0)
            {
                ui->tableTeam2->setItem(i,0, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getNumber())));
            }else ui->tableTeam2->setItem(i,0, new QTableWidgetItem(""));

            ui->tableTeam2->setItem(i,1, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getPersonName()));

            if(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getLicence())
            {
                ui->tableTeam2->setItem(i,2, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getLicence())));
            }else ui->tableTeam2->setItem(i,2, new QTableWidgetItem(""));

        }
        int i =0;

        ui->officialTeam2->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getCoach()->getPersonName()));
        if(this->ptMatch->getPtTeam1()->getCoach()->getLicence() != 0)
        {
            ui->officialTeam2->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getCoach()->getLicence())));
        }else ui->officialTeam2->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam2->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getHelpCoach()->getPersonName()));
        if(this->ptMatch->getPtTeam1()->getHelpCoach()->getLicence() != 0)
        {
            ui->officialTeam2->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getHelpCoach()->getLicence())));
        }else ui->officialTeam2->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam2->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getHelpCoach2()->getPersonName()));
        if(this->ptMatch->getPtTeam1()->getHelpCoach2()->getLicence() != 0)
        {
            ui->officialTeam2->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getHelpCoach2()->getLicence())));
        }else ui->officialTeam2->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam2->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getTrainer()->getPersonName()));
        if(this->ptMatch->getPtTeam1()->getTrainer()->getLicence() != 0)
        {
            ui->officialTeam2->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getTrainer()->getLicence())));
        }else ui->officialTeam2->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam2->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getMedic()->getPersonName()));
        if(this->ptMatch->getPtTeam1()->getMedic()->getLicence() != 0)
        {
            ui->officialTeam2->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getMedic()->getLicence())));
        }else ui->officialTeam2->setItem(i,1, new QTableWidgetItem(""));
        for (int i = 12; i < ui->liberosTeam1->rowCount()+12; ++i)
        {
            if(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getNumber() != 0)
            {
                ui->liberosTeam2->setItem(i-12,0, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getNumber())));
            } else ui->liberosTeam2->setItem(i-12,0, new QTableWidgetItem(""));

            ui->liberosTeam2->setItem(i-12,1, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getPersonName()));

            if(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getLicence() != 0)
            {
                ui->liberosTeam2->setItem(i-12,2, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getLicence())));
            }else ui->liberosTeam2->setItem(i-12,2, new QTableWidgetItem(""));

        }
    }
    if(ptMatch->getPtTeam2() !=0){
        for (int i = 0; i < ui->tableTeam1->rowCount(); ++i)
        {
            if(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getNumber() != 0)
            {
                ui->tableTeam1->setItem(i,0, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getNumber())));
            }else ui->tableTeam1->setItem(i,0, new QTableWidgetItem(""));

            ui->tableTeam1->setItem(i,1, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getPersonName()));

            if(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getLicence())
            {
                ui->tableTeam1->setItem(i,2, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getLicence())));
            }else ui->tableTeam1->setItem(i,2, new QTableWidgetItem(""));

        }
        for (int i = 12; i < ui->liberosTeam2->rowCount()+12; ++i)
        {
            if(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getNumber() != 0)
            {
                ui->liberosTeam1->setItem(i-12,0, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getNumber())));
            }else ui->liberosTeam1->setItem(i-12,0, new QTableWidgetItem(""));

            ui->liberosTeam1->setItem(i-12,1, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getPersonName()));

            if(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getLicence() != 0)
            {
                ui->liberosTeam1->setItem(i-12,2, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getLicence())));
            }else ui->liberosTeam1->setItem(i-12,2, new QTableWidgetItem(""));

        }
        int i =0;

        ui->officialTeam1->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getCoach()->getPersonName()));
        if(this->ptMatch->getPtTeam2()->getCoach()->getLicence() != 0)
        {
            ui->officialTeam1->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getCoach()->getLicence())));
        }else ui->officialTeam1->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam1->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getHelpCoach()->getPersonName()));
        if(this->ptMatch->getPtTeam2()->getHelpCoach()->getLicence() != 0)
        {
            ui->officialTeam1->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getHelpCoach()->getLicence())));
        }else ui->officialTeam1->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam1->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getHelpCoach2()->getPersonName()));
        if(this->ptMatch->getPtTeam2()->getHelpCoach2()->getLicence() != 0)
        {
            ui->officialTeam1->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getHelpCoach2()->getLicence())));
        }else ui->officialTeam1->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam1->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getTrainer()->getPersonName()));
        if(this->ptMatch->getPtTeam2()->getTrainer()->getLicence() != 0)
        {
            ui->officialTeam1->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getTrainer()->getLicence())));
        }else ui->officialTeam1->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam1->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getMedic()->getPersonName()));
        if(this->ptMatch->getPtTeam2()->getMedic()->getLicence() != 0)
        {
            ui->officialTeam1->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getMedic()->getLicence())));
        }else ui->officialTeam1->setItem(i,1, new QTableWidgetItem(""));
    }
}
void TeamlistV2::setTeam1Infos()
{
    if(ptMatch->getPtTeam1() !=0){
        for (int i = 0; i < ui->tableTeam1->rowCount(); ++i)
        {
            if(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getNumber() != 0)
            {
                ui->tableTeam1->setItem(i,0, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getNumber())));
            }else ui->tableTeam1->setItem(i,0, new QTableWidgetItem(""));

            ui->tableTeam1->setItem(i,1, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getPersonName()));

            if(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getLicence())
            {
                ui->tableTeam1->setItem(i,2, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getLicence())));
            }else ui->tableTeam1->setItem(i,2, new QTableWidgetItem(""));

        }
        for (int i = 12; i < ui->liberosTeam1->rowCount()+12; ++i)
        {
            if(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getNumber() != 0)
            {
                ui->liberosTeam1->setItem(i-12,0, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getNumber())));
            } else ui->liberosTeam1->setItem(i-12,0, new QTableWidgetItem(""));

            ui->liberosTeam1->setItem(i-12,1, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getPersonName()));

            if(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getLicence() != 0)
            {
                ui->liberosTeam1->setItem(i-12,2, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getTabJoueur()[i].getLicence())));
            }else ui->liberosTeam1->setItem(i-12,2, new QTableWidgetItem(""));

        }
        int i =0;

        ui->officialTeam1->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getCoach()->getPersonName()));
        if(this->ptMatch->getPtTeam1()->getCoach()->getLicence() != 0)
        {
            ui->officialTeam1->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getCoach()->getLicence())));
        }else ui->officialTeam1->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam1->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getHelpCoach()->getPersonName()));
        if(this->ptMatch->getPtTeam1()->getHelpCoach()->getLicence() != 0)
        {
            ui->officialTeam1->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getHelpCoach()->getLicence())));
        }else ui->officialTeam1->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam1->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getHelpCoach2()->getPersonName()));
        if(this->ptMatch->getPtTeam1()->getHelpCoach2()->getLicence() != 0)
        {
            ui->officialTeam1->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getHelpCoach2()->getLicence())));
        }else ui->officialTeam1->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam1->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getTrainer()->getPersonName()));
        if(this->ptMatch->getPtTeam1()->getTrainer()->getLicence() != 0)
        {
            ui->officialTeam1->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getTrainer()->getLicence())));
        }else ui->officialTeam1->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam1->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam1()->getMedic()->getPersonName()));
        if(this->ptMatch->getPtTeam1()->getMedic()->getLicence() != 0)
        {
            ui->officialTeam1->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam1()->getMedic()->getLicence())));
        }else ui->officialTeam1->setItem(i,1, new QTableWidgetItem(""));
        ++i;

    }
}
void TeamlistV2::setTeam2Infos()
{
    if(ptMatch->getPtTeam2() !=0){
        for (int i = 0; i < ui->tableTeam2->rowCount(); ++i)
        {
            if(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getNumber() != 0)
            {
                ui->tableTeam2->setItem(i,0, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getNumber())));
            }else ui->tableTeam2->setItem(i,0, new QTableWidgetItem(""));

            ui->tableTeam2->setItem(i,1, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getPersonName()));

            if(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getLicence())
            {
                ui->tableTeam2->setItem(i,2, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getLicence())));
            }else ui->tableTeam2->setItem(i,2, new QTableWidgetItem(""));

        }
        for (int i = 12; i < ui->liberosTeam2->rowCount()+12; ++i)
        {
            if(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getNumber() != 0)
            {
                ui->liberosTeam2->setItem(i-12,0, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getNumber())));
            }else ui->liberosTeam2->setItem(i-12,0, new QTableWidgetItem(""));

            ui->liberosTeam2->setItem(i-12,1, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getPersonName()));

            if(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getLicence() != 0)
            {
                ui->liberosTeam2->setItem(i-12,2, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getTabJoueur()[i].getLicence())));
            }else ui->liberosTeam2->setItem(i-12,2, new QTableWidgetItem(""));

        }
        int i =0;

        ui->officialTeam2->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getCoach()->getPersonName()));
        if(this->ptMatch->getPtTeam2()->getCoach()->getLicence() != 0)
        {
            ui->officialTeam2->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getCoach()->getLicence())));
        }else ui->officialTeam2->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam2->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getHelpCoach()->getPersonName()));
        if(this->ptMatch->getPtTeam2()->getHelpCoach()->getLicence() != 0)
        {
            ui->officialTeam2->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getHelpCoach()->getLicence())));
        }else ui->officialTeam2->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam2->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getHelpCoach2()->getPersonName()));
        if(this->ptMatch->getPtTeam2()->getHelpCoach2()->getLicence() != 0)
        {
            ui->officialTeam2->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getHelpCoach2()->getLicence())));
        }else ui->officialTeam2->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam2->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getTrainer()->getPersonName()));
        if(this->ptMatch->getPtTeam2()->getTrainer()->getLicence() != 0)
        {
            ui->officialTeam2->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getTrainer()->getLicence())));
        }else ui->officialTeam2->setItem(i,1, new QTableWidgetItem(""));
        ++i;

        ui->officialTeam2->setItem(i,0, new QTableWidgetItem(this->ptMatch->getPtTeam2()->getMedic()->getPersonName()));
        if(this->ptMatch->getPtTeam2()->getMedic()->getLicence() != 0)
        {
            ui->officialTeam2->setItem(i,1, new QTableWidgetItem(QString::number(this->ptMatch->getPtTeam2()->getMedic()->getLicence())));
        }else ui->officialTeam2->setItem(i,1, new QTableWidgetItem(""));
        ++i;
    }



}
void TeamlistV2::setRefereesInfos()
{
    ui->arbitre->setItem(0,0,new QTableWidgetItem(this->ptMatch->getArbitre1()->getPersonName()));
    ui->arbitre->setItem(0,1,new QTableWidgetItem(this->ptMatch->getArbitre1()->getLigue()));
    ui->arbitre->setItem(0,2,new QTableWidgetItem(QString::number(this->ptMatch->getArbitre1()->getLicence())));

    ui->arbitre->setItem(1,0,new QTableWidgetItem(this->ptMatch->getArbitre2()->getPersonName()));
    ui->arbitre->setItem(1,1,new QTableWidgetItem(this->ptMatch->getArbitre2()->getLigue()));
    ui->arbitre->setItem(1,2,new QTableWidgetItem(QString::number(this->ptMatch->getArbitre2()->getLicence())));

    ui->arbitre->setItem(2,0,new QTableWidgetItem(this->ptMatch->getMarqueur()->getPersonName()));
    ui->arbitre->setItem(2,1,new QTableWidgetItem(this->ptMatch->getMarqueur()->getLigue()));
    ui->arbitre->setItem(2,2,new QTableWidgetItem(QString::number(this->ptMatch->getMarqueur()->getLicence())));

    ui->arbitre->setItem(3,0,new QTableWidgetItem(this->ptMatch->getMarqueur2()->getPersonName()));
    ui->arbitre->setItem(3,1,new QTableWidgetItem(this->ptMatch->getMarqueur2()->getLigue()));
    ui->arbitre->setItem(3,2,new QTableWidgetItem(QString::number(this->ptMatch->getMarqueur2()->getLicence())));

    ui->arbitre->setItem(4,0,new QTableWidgetItem(this->ptMatch->getJugeLigne1()->getPersonName()));
    ui->arbitre->setItem(4,1,new QTableWidgetItem(this->ptMatch->getJugeLigne1()->getLigue()));
    ui->arbitre->setItem(4,2,new QTableWidgetItem(QString::number(this->ptMatch->getJugeLigne1()->getLicence())));

    ui->arbitre->setItem(5,0,new QTableWidgetItem(this->ptMatch->getJugeLigne2()->getPersonName()));
    ui->arbitre->setItem(5,1,new QTableWidgetItem(this->ptMatch->getJugeLigne2()->getLigue()));
    ui->arbitre->setItem(5,2,new QTableWidgetItem(QString::number(this->ptMatch->getJugeLigne2()->getLicence())));

    ui->arbitre->setItem(6,0,new QTableWidgetItem(this->ptMatch->getJugeLigne3()->getPersonName()));
    ui->arbitre->setItem(6,1,new QTableWidgetItem(this->ptMatch->getJugeLigne3()->getLigue()));
    ui->arbitre->setItem(6,2,new QTableWidgetItem(QString::number(this->ptMatch->getJugeLigne3()->getLicence())));

    ui->arbitre->setItem(7,0,new QTableWidgetItem(this->ptMatch->getJugeLigne4()->getPersonName()));
    ui->arbitre->setItem(7,1,new QTableWidgetItem(this->ptMatch->getJugeLigne4()->getLigue()));
    ui->arbitre->setItem(7,2,new QTableWidgetItem(QString::number(this->ptMatch->getJugeLigne4()->getLicence())));

}
void TeamlistV2::saveAll()
{
    if(ptMatch){
        this->saveTeam1Infos();
        this->saveTeam2Infos();
        this->saveReferees();
        ptMatch->setSaveFlag(true);
    }
}
void TeamlistV2::saveAndQuit()
{
    saveAll();
    ptMatch->setSaveFlag(true);
}
void TeamlistV2::updateInfos()
{
    if(ptMatch){
        this->setTeam1Infos();
        this->setTeam2Infos();
        this->setRefereesInfos();
        if(this->ptMatch->getTeam1() != "")
        {
            ui->LOCAUX->setText(this->ptMatch->getTeam1());
        }else
        {
            ui->LOCAUX->setText("LOCAUX");
        }
        if(this->ptMatch->getTeam2() != "")
        {
            ui->VISITEUR->setText((this->ptMatch->getTeam2()));
        }else
        {
            ui->VISITEUR->setText("VISITEURS");
        }
    }
}
void TeamlistV2::cancel()
{
    updateInfos();
}
void TeamlistV2::setPtMatch(Match * Match){
    this->ptMatch = Match;
}

void TeamlistV2::setColorButtonRed(bool red)
{
    if(red)
    {
        ui->save->setStyleSheet("background-color: red;");
        ui->save_2->setStyleSheet("background-color: red;");
    }else
    {
        ui->save->setStyleSheet("background-color: light-grey;");
        ui->save_2->setStyleSheet("background-color: light-grey;");
    }
}
