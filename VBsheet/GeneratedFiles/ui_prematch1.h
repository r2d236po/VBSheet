/********************************************************************************
** Form generated from reading UI file 'prematch1.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREMATCH1_H
#define UI_PREMATCH1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prematch1
{
public:
    QAction *actionQuitter;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *Partie1;
    QSplitter *splitter;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name;
    QLineEdit *town;
    QLineEdit *hall;
    QLineEdit *pool;
    QSpinBox *matchNumber;
    QFrame *line;
    QSplitter *splitter_3;
    QCheckBox *man;
    QCheckBox *woman;
    QSplitter *splitter_2;
    QCheckBox *senior;
    QLabel *label_6;
    QLineEdit *category;
    QSplitter *splitter_4;
    QLabel *label_7;
    QDateTimeEdit *date;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *team1;
    QLabel *label_9;
    QLineEdit *team2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *prematch1)
    {
        if (prematch1->objectName().isEmpty())
            prematch1->setObjectName(QStringLiteral("prematch1"));
        prematch1->setWindowModality(Qt::WindowModal);
        prematch1->setEnabled(true);
        prematch1->resize(614, 413);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(prematch1->sizePolicy().hasHeightForWidth());
        prematch1->setSizePolicy(sizePolicy);
        prematch1->setSizeGripEnabled(false);
        prematch1->setModal(true);
        actionQuitter = new QAction(prematch1);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        verticalLayout_4 = new QVBoxLayout(prematch1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        Partie1 = new QVBoxLayout();
        Partie1->setObjectName(QStringLiteral("Partie1"));
        splitter = new QSplitter(prematch1);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4, 0, Qt::AlignHCenter);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3, 0, Qt::AlignHCenter);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2, 0, Qt::AlignHCenter);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5, 0, Qt::AlignHCenter);

        splitter->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        name = new QLineEdit(layoutWidget_3);
        name->setObjectName(QStringLiteral("name"));

        verticalLayout_2->addWidget(name);

        town = new QLineEdit(layoutWidget_3);
        town->setObjectName(QStringLiteral("town"));

        verticalLayout_2->addWidget(town);

        hall = new QLineEdit(layoutWidget_3);
        hall->setObjectName(QStringLiteral("hall"));

        verticalLayout_2->addWidget(hall);

        pool = new QLineEdit(layoutWidget_3);
        pool->setObjectName(QStringLiteral("pool"));

        verticalLayout_2->addWidget(pool);

        matchNumber = new QSpinBox(layoutWidget_3);
        matchNumber->setObjectName(QStringLiteral("matchNumber"));
        matchNumber->setWrapping(false);
        matchNumber->setAlignment(Qt::AlignCenter);
        matchNumber->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        matchNumber->setProperty("showGroupSeparator", QVariant(false));
        matchNumber->setMaximum(999);

        verticalLayout_2->addWidget(matchNumber);

        splitter->addWidget(layoutWidget_3);

        Partie1->addWidget(splitter);

        line = new QFrame(prematch1);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        Partie1->addWidget(line);

        splitter_3 = new QSplitter(prematch1);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setLayoutDirection(Qt::LeftToRight);
        splitter_3->setOrientation(Qt::Horizontal);
        splitter_3->setOpaqueResize(true);
        splitter_3->setChildrenCollapsible(true);
        man = new QCheckBox(splitter_3);
        man->setObjectName(QStringLiteral("man"));
        man->setChecked(true);
        splitter_3->addWidget(man);
        woman = new QCheckBox(splitter_3);
        woman->setObjectName(QStringLiteral("woman"));
        splitter_3->addWidget(woman);

        Partie1->addWidget(splitter_3);

        splitter_2 = new QSplitter(prematch1);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        senior = new QCheckBox(splitter_2);
        senior->setObjectName(QStringLiteral("senior"));
        splitter_2->addWidget(senior);
        label_6 = new QLabel(splitter_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(label_6);
        category = new QLineEdit(splitter_2);
        category->setObjectName(QStringLiteral("category"));
        category->setAutoFillBackground(false);
        category->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(category);

        Partie1->addWidget(splitter_2);

        splitter_4 = new QSplitter(prematch1);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);
        splitter_4->addWidget(label_7);
        date = new QDateTimeEdit(splitter_4);
        date->setObjectName(QStringLiteral("date"));
        date->setAlignment(Qt::AlignCenter);
        date->setCalendarPopup(true);
        splitter_4->addWidget(date);

        Partie1->addWidget(splitter_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_8 = new QLabel(prematch1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        team1 = new QLineEdit(prematch1);
        team1->setObjectName(QStringLiteral("team1"));

        horizontalLayout->addWidget(team1);

        label_9 = new QLabel(prematch1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout->addWidget(label_9);

        team2 = new QLineEdit(prematch1);
        team2->setObjectName(QStringLiteral("team2"));

        horizontalLayout->addWidget(team2);


        Partie1->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(prematch1);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        Partie1->addWidget(buttonBox);


        verticalLayout_4->addLayout(Partie1);

        QWidget::setTabOrder(name, town);
        QWidget::setTabOrder(town, hall);
        QWidget::setTabOrder(hall, pool);
        QWidget::setTabOrder(pool, matchNumber);
        QWidget::setTabOrder(matchNumber, man);
        QWidget::setTabOrder(man, woman);
        QWidget::setTabOrder(woman, senior);
        QWidget::setTabOrder(senior, category);
        QWidget::setTabOrder(category, team1);
        QWidget::setTabOrder(team1, team2);

        retranslateUi(prematch1);

        QMetaObject::connectSlotsByName(prematch1);
    } // setupUi

    void retranslateUi(QDialog *prematch1)
    {
        prematch1->setWindowTitle(QApplication::translate("prematch1", "Prematch Etape 1", 0));
        actionQuitter->setText(QApplication::translate("prematch1", "Quitter", 0));
#ifndef QT_NO_TOOLTIP
        actionQuitter->setToolTip(QApplication::translate("prematch1", "Quitter le programme", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("prematch1", "Nom de la comp\303\251tition", 0));
        label_4->setText(QApplication::translate("prematch1", "Ville", 0));
        label_3->setText(QApplication::translate("prematch1", "Salle", 0));
        label_2->setText(QApplication::translate("prematch1", "Poule", 0));
        label_5->setText(QApplication::translate("prematch1", "Match n\302\260", 0));
        man->setText(QApplication::translate("prematch1", "Hommes", 0));
        woman->setText(QApplication::translate("prematch1", "Femmes", 0));
        senior->setText(QApplication::translate("prematch1", "Senior", 0));
        label_6->setText(QApplication::translate("prematch1", "Cat\303\251gorie :", 0));
        category->setPlaceholderText(QApplication::translate("prematch1", "Autre", 0));
        label_7->setText(QApplication::translate("prematch1", "Date :", 0));
        label_8->setText(QApplication::translate("prematch1", "Equipe 1 (locaux) :", 0));
        label_9->setText(QApplication::translate("prematch1", "Equipe 2 (visiteurs) :", 0));
    } // retranslateUi

};

namespace Ui {
    class prematch1: public Ui_prematch1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREMATCH1_H
