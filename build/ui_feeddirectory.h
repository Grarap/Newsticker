#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'feeddirectory.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDDIRECTORY_H
#define UI_FEEDDIRECTORY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FeedDirectory
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTreeWidget *feedsTree;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FeedDirectory)
    {
        if (FeedDirectory->objectName().isEmpty())
            FeedDirectory->setObjectName(QString::fromUtf8("FeedDirectory"));
        FeedDirectory->setWindowModality(Qt::ApplicationModal);
        FeedDirectory->resize(425, 343);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(FeedDirectory->sizePolicy().hasHeightForWidth());
        FeedDirectory->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(FeedDirectory);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        verticalLayout->setSpacing(-1);
#endif
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        feedsTree = new QTreeWidget(FeedDirectory);
        feedsTree->setObjectName(QString::fromUtf8("feedsTree"));
        feedsTree->header()->setCascadingSectionResizes(false);
        feedsTree->header()->setDefaultSectionSize(200);

        verticalLayout->addWidget(feedsTree);

        buttonBox = new QDialogButtonBox(FeedDirectory);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(FeedDirectory);
        QObject::connect(buttonBox, SIGNAL(accepted()), FeedDirectory, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FeedDirectory, SLOT(reject()));

        QMetaObject::connectSlotsByName(FeedDirectory);
    } // setupUi

    void retranslateUi(QDialog *FeedDirectory)
    {
        FeedDirectory->setWindowTitle(tr2i18n("Dialog", 0));
        QTreeWidgetItem *___qtreewidgetitem = feedsTree->headerItem();
        ___qtreewidgetitem->setText(1, tr2i18n("url", 0));
        ___qtreewidgetitem->setText(0, tr2i18n("name", 0));
    } // retranslateUi

};

namespace Ui {
    class FeedDirectory: public Ui_FeedDirectory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FEEDDIRECTORY_H

