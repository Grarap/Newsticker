#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'filtersettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERSETTINGS_H
#define UI_FILTERSETTINGS_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <klineedit.h>

QT_BEGIN_NAMESPACE

class Ui_FilterSettings
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QSpacerItem *Spacer9;
    QPushButton *bRemoveFilter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QComboBox *comboFilterAction;
    QLabel *lArticles;
    QComboBox *comboFilterCondition;
    QLineEdit *leFilterExpression;
    QComboBox *cboNewsSources;
    QLabel *label;
    QTreeWidget *filterEntries;
    QPushButton *bAddFilter;

    void setupUi(QWidget *FilterSettings)
    {
        if (FilterSettings->objectName().isEmpty())
            FilterSettings->setObjectName(QString::fromUtf8("FilterSettings"));
        FilterSettings->resize(656, 525);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FilterSettings->sizePolicy().hasHeightForWidth());
        FilterSettings->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(FilterSettings);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(4, 4, 4, 4);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Spacer9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer9, 3, 0, 1, 1);

        bRemoveFilter = new QPushButton(FilterSettings);
        bRemoveFilter->setObjectName(QString::fromUtf8("bRemoveFilter"));
        bRemoveFilter->setEnabled(false);

        gridLayout->addWidget(bRemoveFilter, 3, 2, 1, 1);

        groupBox = new QGroupBox(FilterSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        comboFilterAction = new QComboBox(groupBox);
        comboFilterAction->setObjectName(QString::fromUtf8("comboFilterAction"));

        gridLayout1->addWidget(comboFilterAction, 0, 0, 1, 2);

        lArticles = new QLabel(groupBox);
        lArticles->setObjectName(QString::fromUtf8("lArticles"));
        lArticles->setWordWrap(false);

        gridLayout1->addWidget(lArticles, 0, 2, 1, 1);

        comboFilterCondition = new QComboBox(groupBox);
        comboFilterCondition->setObjectName(QString::fromUtf8("comboFilterCondition"));

        gridLayout1->addWidget(comboFilterCondition, 0, 3, 1, 1);

        leFilterExpression = new QLineEdit(groupBox);
        leFilterExpression->setObjectName(QString::fromUtf8("leFilterExpression"));

        gridLayout1->addWidget(leFilterExpression, 0, 4, 1, 1);

        cboNewsSources = new QComboBox(groupBox);
        cboNewsSources->setObjectName(QString::fromUtf8("cboNewsSources"));

        gridLayout1->addWidget(cboNewsSources, 1, 2, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout1->addWidget(label, 1, 0, 1, 2);


        gridLayout->addWidget(groupBox, 2, 0, 1, 3);

        filterEntries = new QTreeWidget(FilterSettings);
        filterEntries->setObjectName(QString::fromUtf8("filterEntries"));

        gridLayout->addWidget(filterEntries, 1, 0, 1, 3);

        bAddFilter = new QPushButton(FilterSettings);
        bAddFilter->setObjectName(QString::fromUtf8("bAddFilter"));

        gridLayout->addWidget(bAddFilter, 3, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        QWidget::setTabOrder(bAddFilter, bRemoveFilter);

        retranslateUi(FilterSettings);

        QMetaObject::connectSlotsByName(FilterSettings);
    } // setupUi

    void retranslateUi(QWidget *FilterSettings)
    {
#ifndef UI_QT_NO_TOOLTIP
        bRemoveFilter->setToolTip(tr2i18n("Remove selected filter", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        bRemoveFilter->setWhatsThis(tr2i18n("Press this button to remove the selected filter from the list.", 0));
#endif // QT_NO_WHATSTHIS
        bRemoveFilter->setText(tr2i18n("&Remove", 0));
        groupBox->setTitle(tr2i18n("Filter Properties", 0));
        comboFilterAction->clear();
        comboFilterAction->insertItems(0, QStringList()
         << tr2i18n("Hide", 0)
         << tr2i18n("Show", 0)
        );
#ifndef UI_QT_NO_TOOLTIP
        comboFilterAction->setToolTip(tr2i18n("Action for this filter", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        comboFilterAction->setWhatsThis(tr2i18n("Here you can define what should happen if this filter matches (e.g. whether the matching articles should be shown or hidden).", 0));
#endif // QT_NO_WHATSTHIS
        lArticles->setText(tr2i18n("articles whose headlines", 0));
        comboFilterCondition->clear();
        comboFilterCondition->insertItems(0, QStringList()
         << tr2i18n("contain", 0)
         << tr2i18n("do not contain", 0)
         << tr2i18n("equal", 0)
         << tr2i18n("do not equal", 0)
         << tr2i18n("match", 0)
        );
#ifndef UI_QT_NO_TOOLTIP
        comboFilterCondition->setToolTip(tr2i18n("Condition for this filter", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        comboFilterCondition->setWhatsThis(tr2i18n("This combo box lets you specify the condition under which the keyword/expression you entered in the input field at the right will match. You can select one of the following values:<ul>\n"
"<li>contain - the filter matches if the headline contains the keyword.</li>\n"
"<li>does not contain - the filter matches if the headline does not contain the keyword.</li>\n"
"<li>equals - the filter matches if the headline equals the expression.</li>\n"
"<li>does not equal - the filter matches if the headline does not equal the expression.</li>\n"
"<li>matches - the filter matches if the expression matches the headline. The expression you typed at the right will be considered a regular expression in this mode.</li>", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(tr2i18n("in", 0));
        QTreeWidgetItem *___qtreewidgetitem = filterEntries->headerItem();
        ___qtreewidgetitem->setText(3, tr2i18n("Affects", 0));
        ___qtreewidgetitem->setText(2, tr2i18n("Expression", 0));
        ___qtreewidgetitem->setText(1, tr2i18n("Condition", 0));
        ___qtreewidgetitem->setText(0, tr2i18n("Action", 0));
#ifndef UI_QT_NO_TOOLTIP
        bAddFilter->setToolTip(tr2i18n("Add configured filter", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        bAddFilter->setWhatsThis(tr2i18n("Press this button to add the configured filter to the list.", 0));
#endif // QT_NO_WHATSTHIS
        bAddFilter->setText(tr2i18n("&Add", 0));
        Q_UNUSED(FilterSettings);
    } // retranslateUi

};

namespace Ui {
    class FilterSettings: public Ui_FilterSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FILTERSETTINGS_H

