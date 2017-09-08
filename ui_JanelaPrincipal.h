/********************************************************************************
** Form generated from reading UI file 'JanelaPrincipal.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAPRINCIPAL_H
#define UI_JANELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "MeuPainelOpenGL.h"

QT_BEGIN_NAMESPACE

class Ui_JanelaPrincipal
{
public:
    QHBoxLayout *horizontalLayout;
    MeuPainelOpenGL *painelGL;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinBoxX;
    QLabel *label_2;
    QSpinBox *spinBoxY;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QLabel *label_3;
    QSpinBox *spinBoxMalha;
    QSpinBox *spinBoxXCirculo;
    QSpinBox *spinBoxYCirculo;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *JanelaPrincipal)
    {
        if (JanelaPrincipal->objectName().isEmpty())
            JanelaPrincipal->setObjectName(QString::fromUtf8("JanelaPrincipal"));
        JanelaPrincipal->resize(558, 384);
        horizontalLayout = new QHBoxLayout(JanelaPrincipal);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        painelGL = new MeuPainelOpenGL(JanelaPrincipal);
        painelGL->setObjectName(QString::fromUtf8("painelGL"));

        horizontalLayout->addWidget(painelGL);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(JanelaPrincipal);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        spinBoxX = new QSpinBox(JanelaPrincipal);
        spinBoxX->setObjectName(QString::fromUtf8("spinBoxX"));
        spinBoxX->setMaximum(99);

        formLayout->setWidget(3, QFormLayout::LabelRole, spinBoxX);

        label_2 = new QLabel(JanelaPrincipal);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        spinBoxY = new QSpinBox(JanelaPrincipal);
        spinBoxY->setObjectName(QString::fromUtf8("spinBoxY"));
        spinBoxY->setMaximum(99);

        formLayout->setWidget(5, QFormLayout::LabelRole, spinBoxY);

        pushButton = new QPushButton(JanelaPrincipal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(50000, 23));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(JanelaPrincipal);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(7, QFormLayout::LabelRole, pushButton_2);

        checkBox = new QCheckBox(JanelaPrincipal);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout->setWidget(8, QFormLayout::LabelRole, checkBox);

        label_3 = new QLabel(JanelaPrincipal);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_3);

        spinBoxMalha = new QSpinBox(JanelaPrincipal);
        spinBoxMalha->setObjectName(QString::fromUtf8("spinBoxMalha"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBoxMalha->sizePolicy().hasHeightForWidth());
        spinBoxMalha->setSizePolicy(sizePolicy1);
        spinBoxMalha->setMinimum(1);
        spinBoxMalha->setValue(10);

        formLayout->setWidget(10, QFormLayout::LabelRole, spinBoxMalha);

        spinBoxXCirculo = new QSpinBox(JanelaPrincipal);
        spinBoxXCirculo->setObjectName(QString::fromUtf8("spinBoxXCirculo"));

        formLayout->setWidget(12, QFormLayout::LabelRole, spinBoxXCirculo);

        spinBoxYCirculo = new QSpinBox(JanelaPrincipal);
        spinBoxYCirculo->setObjectName(QString::fromUtf8("spinBoxYCirculo"));

        formLayout->setWidget(14, QFormLayout::LabelRole, spinBoxYCirculo);

        label_4 = new QLabel(JanelaPrincipal);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(JanelaPrincipal);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(13, QFormLayout::LabelRole, label_5);


        horizontalLayout->addLayout(formLayout);

        horizontalLayout->setStretch(0, 5);

        retranslateUi(JanelaPrincipal);
        QObject::connect(pushButton, SIGNAL(clicked()), painelGL, SLOT(desenhaForma()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), painelGL, SLOT(limpaForma()));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), painelGL, SLOT(desenhaGrades(bool)));
        QObject::connect(spinBoxX, SIGNAL(valueChanged(int)), painelGL, SLOT(alteraX(int)));
        QObject::connect(spinBoxY, SIGNAL(valueChanged(int)), painelGL, SLOT(alteraY(int)));
        QObject::connect(spinBoxMalha, SIGNAL(valueChanged(int)), painelGL, SLOT(alteraMalha(int)));
        QObject::connect(spinBoxXCirculo, SIGNAL(valueChanged(int)), painelGL, SLOT(alteraXCirculo(int)));
        QObject::connect(spinBoxYCirculo, SIGNAL(valueChanged(int)), painelGL, SLOT(alteraYCirculo(int)));

        QMetaObject::connectSlotsByName(JanelaPrincipal);
    } // setupUi

    void retranslateUi(QWidget *JanelaPrincipal)
    {
        JanelaPrincipal->setWindowTitle(QApplication::translate("JanelaPrincipal", "Projeto OpenGL", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("JanelaPrincipal", "Valor de X", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("JanelaPrincipal", "Valor de Y", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("JanelaPrincipal", "Colorir", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("JanelaPrincipal", "Limpar", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("JanelaPrincipal", "Malha", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("JanelaPrincipal", "Tamanho da Malha", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("JanelaPrincipal", "Valor X C\303\255rculo", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("JanelaPrincipal", "Valor Y C\303\255rculo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JanelaPrincipal: public Ui_JanelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAPRINCIPAL_H
