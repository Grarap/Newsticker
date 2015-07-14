#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'feedsettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDSETTINGS_H
#define UI_FEEDSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "knuminput.h"

QT_BEGIN_NAMESPACE

class Ui_FeedSettings
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_3;
    KIntSpinBox *kcfg_UpdateInterval;
    QGridLayout *gridLayout;
    QListWidget *feedListWidget;
    QPushButton *addButton;
    QPushButton *removeButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *getFeedsButton;
    QLabel *feedTitleLabel;
    QLabel *feedUrlLabel;
    QLabel *feedDescriptionLabel;
    QSpinBox *spMaxItems;
    QLabel *label_5;

    void setupUi(QWidget *FeedSettings)
    {
        if (FeedSettings->objectName().isEmpty())
            FeedSettings->setObjectName(QString::fromUtf8("FeedSettings"));
        FeedSettings->resize(649, 323);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FeedSettings->sizePolicy().hasHeightForWidth());
        FeedSettings->setSizePolicy(sizePolicy);
        FeedSettings->setMaximumSize(QSize(16777215, 16777215));
        FeedSettings->setAutoFillBackground(false);
        gridLayout_3 = new QGridLayout(FeedSettings);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(FeedSettings);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(FeedSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        kcfg_UpdateInterval = new KIntSpinBox(FeedSettings);
        kcfg_UpdateInterval->setObjectName(QString::fromUtf8("kcfg_UpdateInterval"));
        sizePolicy1.setHeightForWidth(kcfg_UpdateInterval->sizePolicy().hasHeightForWidth());
        kcfg_UpdateInterval->setSizePolicy(sizePolicy1);
        kcfg_UpdateInterval->setAccelerated(true);
        kcfg_UpdateInterval->setMinimum(15);
        kcfg_UpdateInterval->setMaximum(10080);

        gridLayout_2->addWidget(kcfg_UpdateInterval, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 8, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        feedListWidget = new QListWidget(FeedSettings);
        feedListWidget->setObjectName(QString::fromUtf8("feedListWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(feedListWidget->sizePolicy().hasHeightForWidth());
        feedListWidget->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(feedListWidget, 1, 0, 1, 3);

        addButton = new QPushButton(FeedSettings);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 2, 0, 1, 1);

        removeButton = new QPushButton(FeedSettings);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        gridLayout->addWidget(removeButton, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        getFeedsButton = new QPushButton(FeedSettings);
        getFeedsButton->setObjectName(QString::fromUtf8("getFeedsButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(getFeedsButton->sizePolicy().hasHeightForWidth());
        getFeedsButton->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(getFeedsButton, 0, 0, 1, 3);


        gridLayout_3->addLayout(gridLayout, 0, 0, 8, 1);

        feedTitleLabel = new QLabel(FeedSettings);
        feedTitleLabel->setObjectName(QString::fromUtf8("feedTitleLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(feedTitleLabel->sizePolicy().hasHeightForWidth());
        feedTitleLabel->setSizePolicy(sizePolicy5);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        feedTitleLabel->setFont(font);

        gridLayout_3->addWidget(feedTitleLabel, 0, 1, 1, 2);

        feedUrlLabel = new QLabel(FeedSettings);
        feedUrlLabel->setObjectName(QString::fromUtf8("feedUrlLabel"));
        sizePolicy5.setHeightForWidth(feedUrlLabel->sizePolicy().hasHeightForWidth());
        feedUrlLabel->setSizePolicy(sizePolicy5);
        feedUrlLabel->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(119, 119, 121, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        feedUrlLabel->setPalette(palette);

        gridLayout_3->addWidget(feedUrlLabel, 3, 1, 1, 2);

        feedDescriptionLabel = new QLabel(FeedSettings);
        feedDescriptionLabel->setObjectName(QString::fromUtf8("feedDescriptionLabel"));
        sizePolicy.setHeightForWidth(feedDescriptionLabel->sizePolicy().hasHeightForWidth());
        feedDescriptionLabel->setSizePolicy(sizePolicy);
        feedDescriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        feedDescriptionLabel->setWordWrap(true);

        gridLayout_3->addWidget(feedDescriptionLabel, 4, 1, 1, 2);

        spMaxItems = new QSpinBox(FeedSettings);
        spMaxItems->setObjectName(QString::fromUtf8("spMaxItems"));
        sizePolicy1.setHeightForWidth(spMaxItems->sizePolicy().hasHeightForWidth());
        spMaxItems->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(spMaxItems, 1, 2, 1, 1);

        label_5 = new QLabel(FeedSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 1, 1, 1);


        retranslateUi(FeedSettings);

        QMetaObject::connectSlotsByName(FeedSettings);
    } // setupUi

    void retranslateUi(QWidget *FeedSettings)
    {
        label->setText(tr2i18n("Update interval:", 0));
        label_3->setText(tr2i18n("Minutes", 0));
        kcfg_UpdateInterval->setSuffix(QString());
        kcfg_UpdateInterval->setPrefix(QString());
        addButton->setText(tr2i18n("&Add", 0));
        removeButton->setText(tr2i18n("&Remove", 0));
        getFeedsButton->setText(tr2i18n("Get Feeds from NetNewsTicker.org", 0));
        feedTitleLabel->setText(tr2i18n("Feed Title", 0));
        feedUrlLabel->setText(tr2i18n("FeedURL", 0));
        feedDescriptionLabel->setText(tr2i18n("FeedDescription", 0));
        label_5->setText(tr2i18n("Max displayed items for this feed", 0));
        Q_UNUSED(FeedSettings);
    } // retranslateUi

};

namespace Ui {
    class FeedSettings: public Ui_FeedSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FEEDSETTINGS_H

