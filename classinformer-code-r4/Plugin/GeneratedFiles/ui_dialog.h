/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainCIDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox1;
    QCheckBox *checkBox2;
    QCheckBox *checkBox3;
    QLabel *linkLabel;
    QLabel *image;
    QLabel *versionLabel;
    QPushButton *pushButton1;

    void setupUi(QDialog *MainCIDialog)
    {
        if (MainCIDialog->objectName().isEmpty())
            MainCIDialog->setObjectName(QString::fromUtf8("MainCIDialog"));
        MainCIDialog->resize(292, 311);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainCIDialog->sizePolicy().hasHeightForWidth());
        MainCIDialog->setSizePolicy(sizePolicy);
        MainCIDialog->setMinimumSize(QSize(292, 311));
        MainCIDialog->setMaximumSize(QSize(292, 311));
        MainCIDialog->setWindowTitle(QString::fromUtf8("Class Informer"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/classinf/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainCIDialog->setWindowIcon(icon);
#if QT_CONFIG(tooltip)
        MainCIDialog->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        MainCIDialog->setModal(true);
        buttonBox = new QDialogButtonBox(MainCIDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(120, 272, 156, 24));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);
        buttonBox->setCenterButtons(false);
        checkBox1 = new QCheckBox(MainCIDialog);
        checkBox1->setObjectName(QString::fromUtf8("checkBox1"));
        checkBox1->setGeometry(QRect(15, 94, 121, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans"));
        font.setPointSize(10);
        checkBox1->setFont(font);
#if QT_CONFIG(tooltip)
        checkBox1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        checkBox2 = new QCheckBox(MainCIDialog);
        checkBox2->setObjectName(QString::fromUtf8("checkBox2"));
        checkBox2->setGeometry(QRect(15, 122, 256, 17));
        checkBox2->setFont(font);
#if QT_CONFIG(tooltip)
        checkBox2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        checkBox3 = new QCheckBox(MainCIDialog);
        checkBox3->setObjectName(QString::fromUtf8("checkBox3"));
        checkBox3->setGeometry(QRect(15, 148, 151, 17));
        checkBox3->setFont(font);
#if QT_CONFIG(tooltip)
        checkBox3->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        linkLabel = new QLabel(MainCIDialog);
        linkLabel->setObjectName(QString::fromUtf8("linkLabel"));
        linkLabel->setGeometry(QRect(15, 225, 141, 16));
        linkLabel->setFont(font);
        linkLabel->setFrameShadow(QFrame::Sunken);
        linkLabel->setTextFormat(Qt::AutoText);
        linkLabel->setOpenExternalLinks(true);
        image = new QLabel(MainCIDialog);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(0, 0, 292, 74));
#if QT_CONFIG(tooltip)
        image->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        image->setTextFormat(Qt::PlainText);
        image->setPixmap(QPixmap(QString::fromUtf8(":/classinf/banner.png")));
        image->setTextInteractionFlags(Qt::NoTextInteraction);
        versionLabel = new QLabel(MainCIDialog);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setGeometry(QRect(225, 44, 61, 24));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Noto Sans"));
        font1.setPointSize(9);
        versionLabel->setFont(font1);
#if QT_CONFIG(tooltip)
        versionLabel->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        versionLabel->setTextFormat(Qt::PlainText);
        versionLabel->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton1 = new QPushButton(MainCIDialog);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        pushButton1->setGeometry(QRect(15, 186, 129, 27));
        pushButton1->setFont(font);
#if QT_CONFIG(tooltip)
        pushButton1->setToolTip(QString::fromUtf8("<html><head/><body><p>Optionally select wich segments to scan for strings.</p></body></html>"));
#endif // QT_CONFIG(tooltip)
        pushButton1->setText(QString::fromUtf8("SELECT SEGMENTS"));
        pushButton1->setAutoDefault(false);

        retranslateUi(MainCIDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MainCIDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MainCIDialog, SLOT(reject()));
        QObject::connect(pushButton1, SIGNAL(pressed()), MainCIDialog, SLOT(segmentSelect()));

        QMetaObject::connectSlotsByName(MainCIDialog);
    } // setupUi

    void retranslateUi(QDialog *MainCIDialog)
    {
        checkBox1->setText(QCoreApplication::translate("MainCIDialog", "Place structures", nullptr));
        checkBox2->setText(QCoreApplication::translate("MainCIDialog", "Process static initializers && terminators", nullptr));
        checkBox3->setText(QCoreApplication::translate("MainCIDialog", "Audio on completion", nullptr));
        linkLabel->setText(QCoreApplication::translate("MainCIDialog", "<a href=\"http://www.macromonkey.com/bb/index.php/topic,13.0.html\" style=\"color:#AA00FF;\">Class Informer Fourm</a>", nullptr));
        image->setText(QString());
        versionLabel->setText(QCoreApplication::translate("MainCIDialog", "Version: 2.6\n"
"By Sirmabus", nullptr));
        (void)MainCIDialog;
    } // retranslateUi

};

namespace Ui {
    class MainCIDialog: public Ui_MainCIDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
