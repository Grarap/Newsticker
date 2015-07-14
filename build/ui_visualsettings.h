#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'visualsettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALSETTINGS_H
#define UI_VISUALSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "kcolorcombo.h"
#include "kfontrequester.h"

QT_BEGIN_NAMESPACE

class Ui_VisualSettings
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLabel *label;
    KColorCombo *kcfg_Color;
    QLabel *label_2;
    KFontRequester *kcfg_Font;
    QCheckBox *kcfg_UIStyle;
    QLabel *label_5;
    QCheckBox *kcfg_ScrollHorizontal;
    QSpinBox *kcfg_ScrollingSpeed;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *kcfg_ScrollingDistance;
    QLabel *label_8;

    void setupUi(QWidget *VisualSettings)
    {
        if (VisualSettings->objectName().isEmpty())
            VisualSettings->setObjectName(QString::fromUtf8("VisualSettings"));
        VisualSettings->resize(524, 212);
        gridLayout = new QGridLayout(VisualSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 3, 1, 1);

        label = new QLabel(VisualSettings);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        kcfg_Color = new KColorCombo(VisualSettings);
        kcfg_Color->setObjectName(QString::fromUtf8("kcfg_Color"));

        gridLayout->addWidget(kcfg_Color, 0, 1, 1, 1);

        label_2 = new QLabel(VisualSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        kcfg_Font = new KFontRequester(VisualSettings);
        kcfg_Font->setObjectName(QString::fromUtf8("kcfg_Font"));

        gridLayout->addWidget(kcfg_Font, 2, 1, 1, 3);

        kcfg_UIStyle = new QCheckBox(VisualSettings);
        kcfg_UIStyle->setObjectName(QString::fromUtf8("kcfg_UIStyle"));

        gridLayout->addWidget(kcfg_UIStyle, 7, 0, 1, 1);

        label_5 = new QLabel(VisualSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        kcfg_ScrollHorizontal = new QCheckBox(VisualSettings);
        kcfg_ScrollHorizontal->setObjectName(QString::fromUtf8("kcfg_ScrollHorizontal"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(kcfg_ScrollHorizontal->sizePolicy().hasHeightForWidth());
        kcfg_ScrollHorizontal->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_ScrollHorizontal, 3, 0, 1, 4);

        kcfg_ScrollingSpeed = new QSpinBox(VisualSettings);
        kcfg_ScrollingSpeed->setObjectName(QString::fromUtf8("kcfg_ScrollingSpeed"));

        gridLayout->addWidget(kcfg_ScrollingSpeed, 5, 1, 1, 1);

        label_3 = new QLabel(VisualSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 3, 1, 1);

        label_4 = new QLabel(VisualSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        kcfg_ScrollingDistance = new QSpinBox(VisualSettings);
        kcfg_ScrollingDistance->setObjectName(QString::fromUtf8("kcfg_ScrollingDistance"));

        gridLayout->addWidget(kcfg_ScrollingDistance, 6, 1, 1, 1);

        label_8 = new QLabel(VisualSettings);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 6, 3, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        label->setBuddy(kcfg_Color);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(kcfg_Color, kcfg_ScrollHorizontal);
        QWidget::setTabOrder(kcfg_ScrollHorizontal, kcfg_UIStyle);

        retranslateUi(VisualSettings);

        QMetaObject::connectSlotsByName(VisualSettings);
    } // setupUi

    void retranslateUi(QWidget *VisualSettings)
    {
        label->setText(tr2i18n("Color:", "color of the scrolling text"));
        kcfg_Color->clear();
        kcfg_Color->insertItems(0, QStringList()
         << tr2i18n("Custom...", 0)
        );
        label_2->setText(tr2i18n("Font:", 0));
        kcfg_UIStyle->setText(tr2i18n("KDE 3.5 Style", 0));
        label_5->setText(tr2i18n("Redraw frequency", 0));
        kcfg_ScrollHorizontal->setText(tr2i18n("Scroll Horizontal", 0));
        label_3->setText(tr2i18n("Updates / Second", 0));
        label_4->setText(tr2i18n("Distance per redraw", 0));
        label_8->setText(tr2i18n("Pixels", 0));
        Q_UNUSED(VisualSettings);
    } // retranslateUi

};

namespace Ui {
    class VisualSettings: public Ui_VisualSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VISUALSETTINGS_H

