/********************************************************************************
** Form generated from reading UI file 'teamlist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMLIST_H
#define UI_TEAMLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teamList
{
public:
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *LOCAUX;
    QLabel *VISITEUR;
    QSplitter *splitter;
    QTableWidget *tableTeam1;
    QTableWidget *tableTeam2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter_2;
    QTableWidget *liberosTeam1;
    QTableWidget *liberosTeam2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_3;
    QTableWidget *officialTeam1;
    QTableWidget *officialTeam2;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *arbitre;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *switchInfo;
    QPushButton *save;
    QPushButton *quit;

    void setupUi(QDialog *teamList)
    {
        if (teamList->objectName().isEmpty())
            teamList->setObjectName(QStringLiteral("teamList"));
        teamList->resize(900, 600);
        verticalLayout_4 = new QVBoxLayout(teamList);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        splitter_4 = new QSplitter(teamList);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter_4);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        LOCAUX = new QLabel(groupBox);
        LOCAUX->setObjectName(QStringLiteral("LOCAUX"));

        horizontalLayout->addWidget(LOCAUX, 0, Qt::AlignHCenter);

        VISITEUR = new QLabel(groupBox);
        VISITEUR->setObjectName(QStringLiteral("VISITEUR"));

        horizontalLayout->addWidget(VISITEUR, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tableTeam1 = new QTableWidget(splitter);
        if (tableTeam1->columnCount() < 3)
            tableTeam1->setColumnCount(3);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        tableTeam1->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        tableTeam1->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font);
        tableTeam1->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableTeam1->rowCount() < 12)
            tableTeam1->setRowCount(12);
        tableTeam1->setObjectName(QStringLiteral("tableTeam1"));
        tableTeam1->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableTeam1->setAlternatingRowColors(true);
        tableTeam1->setRowCount(12);
        splitter->addWidget(tableTeam1);
        tableTeam1->horizontalHeader()->setCascadingSectionResizes(true);
        tableTeam1->horizontalHeader()->setDefaultSectionSize(150);
        tableTeam1->horizontalHeader()->setMinimumSectionSize(10);
        tableTeam1->horizontalHeader()->setStretchLastSection(false);
        tableTeam1->verticalHeader()->setVisible(false);
        tableTeam1->verticalHeader()->setHighlightSections(true);
        tableTeam1->verticalHeader()->setStretchLastSection(false);
        tableTeam2 = new QTableWidget(splitter);
        if (tableTeam2->columnCount() < 3)
            tableTeam2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font);
        tableTeam2->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font);
        tableTeam2->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem5->setFont(font);
        tableTeam2->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        if (tableTeam2->rowCount() < 12)
            tableTeam2->setRowCount(12);
        tableTeam2->setObjectName(QStringLiteral("tableTeam2"));
        tableTeam2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableTeam2->setAlternatingRowColors(true);
        tableTeam2->setRowCount(12);
        splitter->addWidget(tableTeam2);
        tableTeam2->horizontalHeader()->setCascadingSectionResizes(true);
        tableTeam2->horizontalHeader()->setDefaultSectionSize(150);
        tableTeam2->horizontalHeader()->setMinimumSectionSize(10);
        tableTeam2->horizontalHeader()->setStretchLastSection(false);
        tableTeam2->verticalHeader()->setVisible(false);
        tableTeam2->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(splitter);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        splitter_2 = new QSplitter(groupBox_2);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        liberosTeam1 = new QTableWidget(splitter_2);
        if (liberosTeam1->columnCount() < 3)
            liberosTeam1->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font);
        liberosTeam1->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font);
        liberosTeam1->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font);
        liberosTeam1->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        if (liberosTeam1->rowCount() < 2)
            liberosTeam1->setRowCount(2);
        liberosTeam1->setObjectName(QStringLiteral("liberosTeam1"));
        liberosTeam1->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        liberosTeam1->setAlternatingRowColors(true);
        liberosTeam1->setRowCount(2);
        splitter_2->addWidget(liberosTeam1);
        liberosTeam1->horizontalHeader()->setCascadingSectionResizes(true);
        liberosTeam1->horizontalHeader()->setDefaultSectionSize(150);
        liberosTeam1->horizontalHeader()->setMinimumSectionSize(10);
        liberosTeam1->horizontalHeader()->setStretchLastSection(false);
        liberosTeam1->verticalHeader()->setVisible(false);
        liberosTeam1->verticalHeader()->setHighlightSections(true);
        liberosTeam1->verticalHeader()->setStretchLastSection(false);
        liberosTeam2 = new QTableWidget(splitter_2);
        if (liberosTeam2->columnCount() < 3)
            liberosTeam2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFont(font);
        liberosTeam2->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font);
        liberosTeam2->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setFont(font);
        liberosTeam2->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        if (liberosTeam2->rowCount() < 2)
            liberosTeam2->setRowCount(2);
        liberosTeam2->setObjectName(QStringLiteral("liberosTeam2"));
        liberosTeam2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        liberosTeam2->setAlternatingRowColors(true);
        liberosTeam2->setRowCount(2);
        splitter_2->addWidget(liberosTeam2);
        liberosTeam2->horizontalHeader()->setCascadingSectionResizes(true);
        liberosTeam2->horizontalHeader()->setDefaultSectionSize(150);
        liberosTeam2->horizontalHeader()->setMinimumSectionSize(10);
        liberosTeam2->horizontalHeader()->setStretchLastSection(false);
        liberosTeam2->verticalHeader()->setVisible(false);
        liberosTeam2->verticalHeader()->setStretchLastSection(false);

        horizontalLayout_3->addWidget(splitter_2);


        verticalLayout_2->addWidget(groupBox_2);

        splitter_4->addWidget(widget);
        groupBox_3 = new QGroupBox(splitter_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        splitter_3 = new QSplitter(groupBox_3);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        officialTeam1 = new QTableWidget(splitter_3);
        if (officialTeam1->columnCount() < 2)
            officialTeam1->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFont(font);
        officialTeam1->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setFont(font);
        officialTeam1->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        if (officialTeam1->rowCount() < 5)
            officialTeam1->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        officialTeam1->setVerticalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        officialTeam1->setVerticalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        officialTeam1->setVerticalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        officialTeam1->setVerticalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        officialTeam1->setVerticalHeaderItem(4, __qtablewidgetitem18);
        officialTeam1->setObjectName(QStringLiteral("officialTeam1"));
        officialTeam1->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        officialTeam1->setAlternatingRowColors(true);
        officialTeam1->setShowGrid(true);
        officialTeam1->setSortingEnabled(false);
        officialTeam1->setRowCount(5);
        splitter_3->addWidget(officialTeam1);
        officialTeam1->horizontalHeader()->setCascadingSectionResizes(true);
        officialTeam1->horizontalHeader()->setDefaultSectionSize(150);
        officialTeam1->horizontalHeader()->setMinimumSectionSize(10);
        officialTeam1->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        officialTeam1->horizontalHeader()->setStretchLastSection(false);
        officialTeam1->verticalHeader()->setVisible(true);
        officialTeam1->verticalHeader()->setCascadingSectionResizes(false);
        officialTeam1->verticalHeader()->setHighlightSections(true);
        officialTeam1->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        officialTeam1->verticalHeader()->setStretchLastSection(false);
        officialTeam2 = new QTableWidget(splitter_3);
        if (officialTeam2->columnCount() < 2)
            officialTeam2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem19->setFont(font);
        officialTeam2->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem20->setFont(font);
        officialTeam2->setHorizontalHeaderItem(1, __qtablewidgetitem20);
        if (officialTeam2->rowCount() < 5)
            officialTeam2->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        officialTeam2->setVerticalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        officialTeam2->setVerticalHeaderItem(1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        officialTeam2->setVerticalHeaderItem(2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        officialTeam2->setVerticalHeaderItem(3, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        officialTeam2->setVerticalHeaderItem(4, __qtablewidgetitem25);
        officialTeam2->setObjectName(QStringLiteral("officialTeam2"));
        officialTeam2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        officialTeam2->setAlternatingRowColors(true);
        officialTeam2->setRowCount(5);
        splitter_3->addWidget(officialTeam2);
        officialTeam2->horizontalHeader()->setCascadingSectionResizes(true);
        officialTeam2->horizontalHeader()->setDefaultSectionSize(150);
        officialTeam2->horizontalHeader()->setMinimumSectionSize(10);
        officialTeam2->horizontalHeader()->setStretchLastSection(false);
        officialTeam2->verticalHeader()->setVisible(true);
        officialTeam2->verticalHeader()->setStretchLastSection(false);

        verticalLayout_3->addWidget(splitter_3);

        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        arbitre = new QTableWidget(groupBox_4);
        if (arbitre->columnCount() < 3)
            arbitre->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem26->setFont(font);
        arbitre->setHorizontalHeaderItem(0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem27->setFont(font);
        arbitre->setHorizontalHeaderItem(1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem28->setFont(font);
        arbitre->setHorizontalHeaderItem(2, __qtablewidgetitem28);
        if (arbitre->rowCount() < 8)
            arbitre->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        arbitre->setVerticalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        arbitre->setVerticalHeaderItem(1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        arbitre->setVerticalHeaderItem(2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        arbitre->setVerticalHeaderItem(3, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        arbitre->setVerticalHeaderItem(4, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        arbitre->setVerticalHeaderItem(5, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        arbitre->setVerticalHeaderItem(6, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        arbitre->setVerticalHeaderItem(7, __qtablewidgetitem36);
        arbitre->setObjectName(QStringLiteral("arbitre"));
        arbitre->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        arbitre->setAlternatingRowColors(true);
        arbitre->setShowGrid(true);
        arbitre->setSortingEnabled(false);
        arbitre->setRowCount(8);
        arbitre->horizontalHeader()->setCascadingSectionResizes(true);
        arbitre->horizontalHeader()->setDefaultSectionSize(150);
        arbitre->horizontalHeader()->setMinimumSectionSize(10);
        arbitre->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        arbitre->horizontalHeader()->setStretchLastSection(false);
        arbitre->verticalHeader()->setVisible(true);
        arbitre->verticalHeader()->setCascadingSectionResizes(false);
        arbitre->verticalHeader()->setHighlightSections(true);
        arbitre->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        arbitre->verticalHeader()->setStretchLastSection(false);

        horizontalLayout_2->addWidget(arbitre);


        verticalLayout_3->addWidget(groupBox_4);

        widget_2 = new QWidget(groupBox_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        switchInfo = new QPushButton(widget_2);
        switchInfo->setObjectName(QStringLiteral("switchInfo"));

        horizontalLayout_4->addWidget(switchInfo);

        save = new QPushButton(widget_2);
        save->setObjectName(QStringLiteral("save"));

        horizontalLayout_4->addWidget(save);

        quit = new QPushButton(widget_2);
        quit->setObjectName(QStringLiteral("quit"));

        horizontalLayout_4->addWidget(quit);


        verticalLayout_3->addWidget(widget_2);

        splitter_4->addWidget(groupBox_3);

        verticalLayout_4->addWidget(splitter_4);


        retranslateUi(teamList);

        QMetaObject::connectSlotsByName(teamList);
    } // setupUi

    void retranslateUi(QDialog *teamList)
    {
        teamList->setWindowTitle(QApplication::translate("teamList", "Team Information", 0));
        groupBox->setTitle(QApplication::translate("teamList", "EQUIPES", 0));
        LOCAUX->setText(QApplication::translate("teamList", "LOCAUX", 0));
        VISITEUR->setText(QApplication::translate("teamList", "VISITEUR", 0));
        QTableWidgetItem *___qtablewidgetitem = tableTeam1->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("teamList", "N\302\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableTeam1->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("teamList", "NOM Pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableTeam1->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("teamList", "N\302\260 Licence", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableTeam2->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("teamList", "N\302\260", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableTeam2->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("teamList", "NOM Pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableTeam2->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("teamList", "N\302\260 Licence", 0));
        groupBox_2->setTitle(QApplication::translate("teamList", "LIBEROS", 0));
        QTableWidgetItem *___qtablewidgetitem6 = liberosTeam1->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("teamList", "N\302\260", 0));
        QTableWidgetItem *___qtablewidgetitem7 = liberosTeam1->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("teamList", "NOM Pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem8 = liberosTeam1->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("teamList", "N\302\260 Licence", 0));
        QTableWidgetItem *___qtablewidgetitem9 = liberosTeam2->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("teamList", "N\302\260", 0));
        QTableWidgetItem *___qtablewidgetitem10 = liberosTeam2->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("teamList", "NOM Pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem11 = liberosTeam2->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("teamList", "N\302\260 Licence", 0));
        groupBox_3->setTitle(QApplication::translate("teamList", "OFFICIELS", 0));
        QTableWidgetItem *___qtablewidgetitem12 = officialTeam1->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("teamList", "NOM Pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem13 = officialTeam1->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("teamList", "N\302\260 Licence", 0));
        QTableWidgetItem *___qtablewidgetitem14 = officialTeam1->verticalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("teamList", "E", 0));
        QTableWidgetItem *___qtablewidgetitem15 = officialTeam1->verticalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("teamList", "EA1", 0));
        QTableWidgetItem *___qtablewidgetitem16 = officialTeam1->verticalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("teamList", "EA2", 0));
        QTableWidgetItem *___qtablewidgetitem17 = officialTeam1->verticalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("teamList", "S", 0));
        QTableWidgetItem *___qtablewidgetitem18 = officialTeam1->verticalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("teamList", "M", 0));
        QTableWidgetItem *___qtablewidgetitem19 = officialTeam2->horizontalHeaderItem(0);
        ___qtablewidgetitem19->setText(QApplication::translate("teamList", "NOM Pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem20 = officialTeam2->horizontalHeaderItem(1);
        ___qtablewidgetitem20->setText(QApplication::translate("teamList", "N\302\260 Licence", 0));
        QTableWidgetItem *___qtablewidgetitem21 = officialTeam2->verticalHeaderItem(0);
        ___qtablewidgetitem21->setText(QApplication::translate("teamList", "E", 0));
        QTableWidgetItem *___qtablewidgetitem22 = officialTeam2->verticalHeaderItem(1);
        ___qtablewidgetitem22->setText(QApplication::translate("teamList", "EA1", 0));
        QTableWidgetItem *___qtablewidgetitem23 = officialTeam2->verticalHeaderItem(2);
        ___qtablewidgetitem23->setText(QApplication::translate("teamList", "EA2", 0));
        QTableWidgetItem *___qtablewidgetitem24 = officialTeam2->verticalHeaderItem(3);
        ___qtablewidgetitem24->setText(QApplication::translate("teamList", "S", 0));
        QTableWidgetItem *___qtablewidgetitem25 = officialTeam2->verticalHeaderItem(4);
        ___qtablewidgetitem25->setText(QApplication::translate("teamList", "M", 0));
        groupBox_4->setTitle(QApplication::translate("teamList", "ARBITRE", 0));
        QTableWidgetItem *___qtablewidgetitem26 = arbitre->horizontalHeaderItem(0);
        ___qtablewidgetitem26->setText(QApplication::translate("teamList", "NOM Pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem27 = arbitre->horizontalHeaderItem(1);
        ___qtablewidgetitem27->setText(QApplication::translate("teamList", "Ligue", 0));
        QTableWidgetItem *___qtablewidgetitem28 = arbitre->horizontalHeaderItem(2);
        ___qtablewidgetitem28->setText(QApplication::translate("teamList", "N\302\260 Licence", 0));
        QTableWidgetItem *___qtablewidgetitem29 = arbitre->verticalHeaderItem(0);
        ___qtablewidgetitem29->setText(QApplication::translate("teamList", "1er", 0));
        QTableWidgetItem *___qtablewidgetitem30 = arbitre->verticalHeaderItem(1);
        ___qtablewidgetitem30->setText(QApplication::translate("teamList", "2\303\250me", 0));
        QTableWidgetItem *___qtablewidgetitem31 = arbitre->verticalHeaderItem(2);
        ___qtablewidgetitem31->setText(QApplication::translate("teamList", "Marqueur", 0));
        QTableWidgetItem *___qtablewidgetitem32 = arbitre->verticalHeaderItem(3);
        ___qtablewidgetitem32->setText(QApplication::translate("teamList", "Marqueur 2", 0));
        QTableWidgetItem *___qtablewidgetitem33 = arbitre->verticalHeaderItem(4);
        ___qtablewidgetitem33->setText(QApplication::translate("teamList", "Juge ligne 1", 0));
        QTableWidgetItem *___qtablewidgetitem34 = arbitre->verticalHeaderItem(5);
        ___qtablewidgetitem34->setText(QApplication::translate("teamList", "Juge ligne 2", 0));
        QTableWidgetItem *___qtablewidgetitem35 = arbitre->verticalHeaderItem(6);
        ___qtablewidgetitem35->setText(QApplication::translate("teamList", "Juge ligne 3", 0));
        QTableWidgetItem *___qtablewidgetitem36 = arbitre->verticalHeaderItem(7);
        ___qtablewidgetitem36->setText(QApplication::translate("teamList", "Juge ligne 4", 0));
        switchInfo->setText(QApplication::translate("teamList", "Inverser les informations", 0));
        save->setText(QApplication::translate("teamList", "Sauvegarder et Quitter", 0));
        quit->setText(QApplication::translate("teamList", "Quitter", 0));
    } // retranslateUi

};

namespace Ui {
    class teamList: public Ui_teamList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMLIST_H
