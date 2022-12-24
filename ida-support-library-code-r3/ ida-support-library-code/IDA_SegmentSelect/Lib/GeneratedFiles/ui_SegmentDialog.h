/********************************************************************************
** Form generated from reading UI file 'SegmentDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGMENTDIALOG_H
#define UI_SEGMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SegSelectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *topFrame;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *segmentTable;
    QFrame *bottomFrame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SegSelectDialog)
    {
        if (SegSelectDialog->objectName().isEmpty())
            SegSelectDialog->setObjectName(QStringLiteral("SegSelectDialog"));
        SegSelectDialog->setWindowModality(Qt::WindowModal);
        SegSelectDialog->resize(588, 204);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SegSelectDialog->sizePolicy().hasHeightForWidth());
        SegSelectDialog->setSizePolicy(sizePolicy);
        SegSelectDialog->setMinimumSize(QSize(400, 120));
        SegSelectDialog->setSizeIncrement(QSize(0, 0));
        SegSelectDialog->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        SegSelectDialog->setFont(font);
        SegSelectDialog->setWindowTitle(QStringLiteral(""));
        SegSelectDialog->setSizeGripEnabled(true);
        SegSelectDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SegSelectDialog);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 9);
        topFrame = new QFrame(SegSelectDialog);
        topFrame->setObjectName(QStringLiteral("topFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topFrame->sizePolicy().hasHeightForWidth());
        topFrame->setSizePolicy(sizePolicy1);
        topFrame->setFrameShape(QFrame::StyledPanel);
        topFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(topFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        segmentTable = new QTableWidget(topFrame);
        if (segmentTable->columnCount() < 6)
            segmentTable->setColumnCount(6);
        QFont font1;
        font1.setStyleStrategy(QFont::PreferAntialias);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setText(QStringLiteral("Names"));
        __qtablewidgetitem->setTextAlignment(Qt::AlignJustify|Qt::AlignBottom);
        __qtablewidgetitem->setFont(font1);
        segmentTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setText(QStringLiteral("Type"));
        __qtablewidgetitem1->setTextAlignment(Qt::AlignJustify|Qt::AlignBottom);
        __qtablewidgetitem1->setFont(font1);
        segmentTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setText(QStringLiteral("Flags"));
        __qtablewidgetitem2->setTextAlignment(Qt::AlignJustify|Qt::AlignBottom);
        __qtablewidgetitem2->setFont(font1);
        segmentTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setText(QStringLiteral("Start"));
        __qtablewidgetitem3->setTextAlignment(Qt::AlignJustify|Qt::AlignBottom);
        __qtablewidgetitem3->setFont(font1);
        segmentTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setText(QStringLiteral("End"));
        __qtablewidgetitem4->setTextAlignment(Qt::AlignJustify|Qt::AlignBottom);
        __qtablewidgetitem4->setFont(font1);
        segmentTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setText(QStringLiteral("Size"));
        __qtablewidgetitem5->setTextAlignment(Qt::AlignJustify|Qt::AlignBottom);
        __qtablewidgetitem5->setFont(font1);
        segmentTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        segmentTable->setObjectName(QStringLiteral("segmentTable"));
        segmentTable->setEnabled(true);
        sizePolicy1.setHeightForWidth(segmentTable->sizePolicy().hasHeightForWidth());
        segmentTable->setSizePolicy(sizePolicy1);
        segmentTable->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamily(QStringLiteral("Noto Sans"));
        font2.setPointSize(8);
        segmentTable->setFont(font2);
#ifndef QT_NO_TOOLTIP
        segmentTable->setToolTip(QStringLiteral("Check the segment(s) you want to process."));
#endif // QT_NO_TOOLTIP
        segmentTable->setFrameShape(QFrame::StyledPanel);
        segmentTable->setFrameShadow(QFrame::Plain);
        segmentTable->setMidLineWidth(0);
        segmentTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        segmentTable->setTabKeyNavigation(false);
        segmentTable->setProperty("showDropIndicator", QVariant(false));
        segmentTable->setDragDropOverwriteMode(false);
        segmentTable->setSelectionMode(QAbstractItemView::SingleSelection);
        segmentTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        segmentTable->setTextElideMode(Qt::ElideRight);
        segmentTable->setShowGrid(false);
        segmentTable->setWordWrap(false);
        segmentTable->horizontalHeader()->setHighlightSections(false);
        segmentTable->verticalHeader()->setVisible(false);
        segmentTable->verticalHeader()->setHighlightSections(false);

        horizontalLayout_2->addWidget(segmentTable);


        verticalLayout->addWidget(topFrame);

        bottomFrame = new QFrame(SegSelectDialog);
        bottomFrame->setObjectName(QStringLiteral("bottomFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bottomFrame->sizePolicy().hasHeightForWidth());
        bottomFrame->setSizePolicy(sizePolicy2);
        bottomFrame->setFrameShape(QFrame::StyledPanel);
        bottomFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(bottomFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 4, 5, 3);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(bottomFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setMinimumSize(QSize(0, 26));
        buttonBox->setMaximumSize(QSize(16777215, 26));
        QFont font3;
        font3.setFamily(QStringLiteral("Noto Sans"));
        font3.setPointSize(10);
        buttonBox->setFont(font3);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);
        buttonBox->setCenterButtons(false);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(bottomFrame);


        retranslateUi(SegSelectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SegSelectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SegSelectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SegSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *SegSelectDialog)
    {
        Q_UNUSED(SegSelectDialog);
    } // retranslateUi

};

namespace Ui {
    class SegSelectDialog: public Ui_SegSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGMENTDIALOG_H
