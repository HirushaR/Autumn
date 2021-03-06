/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFind;
    QAction *actionAscii;
    QAction *actionHex;
    QAction *actionStrings;
    QAction *actionAbout;
    QAction *actionGoTo;
    QAction *actionFullScreen;
    QAction *actionAsm;
    QAction *actionC;
    QAction *actionCpluspluss;
    QAction *actionHtml;
    QAction *actionJava;
    QAction *actionCss;
    QAction *actionFind_Next;
    QAction *actionFind_Previous;
    QAction *actionReplace;
    QAction *actionDelete_line;
    QAction *actionRemove_word;
    QAction *actionToggle_comment;
    QAction *actionOverview;
    QAction *actionDark;
    QAction *actionSolarized_Dark;
    QAction *actionNext_Word;
    QAction *actionPrev_Word;
    QAction *actionJoin_Lines;
    QAction *actionMove_Line_Up;
    QAction *actionSwap_line_down;
    QAction *actionMenubar;
    QAction *actionSolarized;
    QAction *action4;
    QAction *action8;
    QAction *action2;
    QAction *actionClose_All;
    QAction *actionTommorrow;
    QAction *actionTommorrow_Night;
    QAction *actionRandomized;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget;
    QTabWidget *tabWidget;
    QPlainTextEdit *fileOverview;
    QVBoxLayout *verticalLayout_3;
    QWidget *findReplaceBar;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *findLabel;
    QLineEdit *findLineEdit;
    QLabel *replaceLabel;
    QLineEdit *replaceLineEdit;
    QPushButton *replaceButton;
    QPushButton *replaceAllButton;
    QPushButton *findButton;
    QPushButton *findPrevButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *statusBar;
    QHBoxLayout *horizontalLayout;
    QLabel *statusMsgLabel;
    QTextBrowser *textBrowser;
    QLabel *labelFileType;
    QMenuBar *menuBar;
    QMenu *menuEdit;
    QMenu *menuSearch;
    QMenu *menuTools;
    QMenu *menuAbout;
    QMenu *menuView;
    QMenu *menuTemplates;
    QMenu *menuFile;
    QMenu *menuPreferences;
    QMenu *menuTheme;
    QMenu *menuTab_Width;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(961, 569);
        MainWindow->setMinimumSize(QSize(450, 300));
        MainWindow->setStyleSheet(QString::fromUtf8("font: 10pt \"Noto Sans\";"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setCheckable(false);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        actionAscii = new QAction(MainWindow);
        actionAscii->setObjectName(QString::fromUtf8("actionAscii"));
        actionHex = new QAction(MainWindow);
        actionHex->setObjectName(QString::fromUtf8("actionHex"));
        actionStrings = new QAction(MainWindow);
        actionStrings->setObjectName(QString::fromUtf8("actionStrings"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionGoTo = new QAction(MainWindow);
        actionGoTo->setObjectName(QString::fromUtf8("actionGoTo"));
        actionFullScreen = new QAction(MainWindow);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        actionAsm = new QAction(MainWindow);
        actionAsm->setObjectName(QString::fromUtf8("actionAsm"));
        actionC = new QAction(MainWindow);
        actionC->setObjectName(QString::fromUtf8("actionC"));
        actionCpluspluss = new QAction(MainWindow);
        actionCpluspluss->setObjectName(QString::fromUtf8("actionCpluspluss"));
        actionHtml = new QAction(MainWindow);
        actionHtml->setObjectName(QString::fromUtf8("actionHtml"));
        actionJava = new QAction(MainWindow);
        actionJava->setObjectName(QString::fromUtf8("actionJava"));
        actionCss = new QAction(MainWindow);
        actionCss->setObjectName(QString::fromUtf8("actionCss"));
        actionFind_Next = new QAction(MainWindow);
        actionFind_Next->setObjectName(QString::fromUtf8("actionFind_Next"));
        actionFind_Previous = new QAction(MainWindow);
        actionFind_Previous->setObjectName(QString::fromUtf8("actionFind_Previous"));
        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName(QString::fromUtf8("actionReplace"));
        actionDelete_line = new QAction(MainWindow);
        actionDelete_line->setObjectName(QString::fromUtf8("actionDelete_line"));
        actionRemove_word = new QAction(MainWindow);
        actionRemove_word->setObjectName(QString::fromUtf8("actionRemove_word"));
        actionToggle_comment = new QAction(MainWindow);
        actionToggle_comment->setObjectName(QString::fromUtf8("actionToggle_comment"));
        actionOverview = new QAction(MainWindow);
        actionOverview->setObjectName(QString::fromUtf8("actionOverview"));
        actionDark = new QAction(MainWindow);
        actionDark->setObjectName(QString::fromUtf8("actionDark"));
        actionSolarized_Dark = new QAction(MainWindow);
        actionSolarized_Dark->setObjectName(QString::fromUtf8("actionSolarized_Dark"));
        actionNext_Word = new QAction(MainWindow);
        actionNext_Word->setObjectName(QString::fromUtf8("actionNext_Word"));
        actionPrev_Word = new QAction(MainWindow);
        actionPrev_Word->setObjectName(QString::fromUtf8("actionPrev_Word"));
        actionJoin_Lines = new QAction(MainWindow);
        actionJoin_Lines->setObjectName(QString::fromUtf8("actionJoin_Lines"));
        actionMove_Line_Up = new QAction(MainWindow);
        actionMove_Line_Up->setObjectName(QString::fromUtf8("actionMove_Line_Up"));
        actionSwap_line_down = new QAction(MainWindow);
        actionSwap_line_down->setObjectName(QString::fromUtf8("actionSwap_line_down"));
        actionMenubar = new QAction(MainWindow);
        actionMenubar->setObjectName(QString::fromUtf8("actionMenubar"));
        actionSolarized = new QAction(MainWindow);
        actionSolarized->setObjectName(QString::fromUtf8("actionSolarized"));
        action4 = new QAction(MainWindow);
        action4->setObjectName(QString::fromUtf8("action4"));
        action8 = new QAction(MainWindow);
        action8->setObjectName(QString::fromUtf8("action8"));
        action2 = new QAction(MainWindow);
        action2->setObjectName(QString::fromUtf8("action2"));
        actionClose_All = new QAction(MainWindow);
        actionClose_All->setObjectName(QString::fromUtf8("actionClose_All"));
        actionTommorrow = new QAction(MainWindow);
        actionTommorrow->setObjectName(QString::fromUtf8("actionTommorrow"));
        actionTommorrow_Night = new QAction(MainWindow);
        actionTommorrow_Night->setObjectName(QString::fromUtf8("actionTommorrow_Night"));
        actionRandomized = new QAction(MainWindow);
        actionRandomized->setObjectName(QString::fromUtf8("actionRandomized"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: #262626;\n"
""));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 0);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(-1, 2, -1, -1);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(50, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Anonymous Pro"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        listWidget->setFont(font);
        listWidget->setLayoutDirection(Qt::RightToLeft);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: #073642;\n"
"margin-top: 28px;\n"
"padding-left: 5px;\n"
"color: #839496;\n"
"border: none;\n"
"font: 11pt \"Anonymous Pro\";"));
        listWidget->setFrameShape(QFrame::StyledPanel);
        listWidget->setLayoutMode(QListView::SinglePass);
        listWidget->setSpacing(0);
        listWidget->setGridSize(QSize(0, 15));
        listWidget->setUniformItemSizes(false);
        listWidget->setSelectionRectVisible(true);

        horizontalLayout_3->addWidget(listWidget);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Noto Sans"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);

        horizontalLayout_3->addWidget(tabWidget);

        fileOverview = new QPlainTextEdit(centralWidget);
        fileOverview->setObjectName(QString::fromUtf8("fileOverview"));
        fileOverview->setEnabled(true);
        fileOverview->setMaximumSize(QSize(110, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Anonymous Pro"));
        font2.setPointSize(1);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        fileOverview->setFont(font2);
        fileOverview->setStyleSheet(QString::fromUtf8("font-family: \"Anonymous Pro\";\n"
"font-size: 1pt;\n"
"color: rgb(255, 255, 255);\n"
"margin-top: 28px;\n"
"background-color: #073642;\n"
"border: 0px;"));
        fileOverview->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fileOverview->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fileOverview->setUndoRedoEnabled(false);
        fileOverview->setLineWrapMode(QPlainTextEdit::NoWrap);
        fileOverview->setReadOnly(true);
        fileOverview->setTabStopWidth(4);

        horizontalLayout_3->addWidget(fileOverview);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        findReplaceBar = new QWidget(centralWidget);
        findReplaceBar->setObjectName(QString::fromUtf8("findReplaceBar"));
        findReplaceBar->setMaximumSize(QSize(16777215, 60));
        findReplaceBar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"padding:10px;"));
        horizontalLayout_2 = new QHBoxLayout(findReplaceBar);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        findLabel = new QLabel(findReplaceBar);
        findLabel->setObjectName(QString::fromUtf8("findLabel"));
        findLabel->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(findLabel);

        findLineEdit = new QLineEdit(findReplaceBar);
        findLineEdit->setObjectName(QString::fromUtf8("findLineEdit"));
        findLineEdit->setMinimumSize(QSize(0, 20));
        findLineEdit->setMaximumSize(QSize(250, 25));
        findLineEdit->setStyleSheet(QString::fromUtf8("background-color: #073642;\n"
"border-color: #e3e3e3;\n"
"font-size: 11pt;\n"
"color:#e0e0e0;\n"
"padding: 0;\n"
"margin: 0 5px;"));
        findLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(findLineEdit);

        replaceLabel = new QLabel(findReplaceBar);
        replaceLabel->setObjectName(QString::fromUtf8("replaceLabel"));
        replaceLabel->setMaximumSize(QSize(100, 16777215));
        replaceLabel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(replaceLabel);

        replaceLineEdit = new QLineEdit(findReplaceBar);
        replaceLineEdit->setObjectName(QString::fromUtf8("replaceLineEdit"));
        replaceLineEdit->setMinimumSize(QSize(0, 20));
        replaceLineEdit->setMaximumSize(QSize(250, 25));
        replaceLineEdit->setStyleSheet(QString::fromUtf8("background-color: #073642;\n"
"border-color: #e3e3e3;\n"
"color:#e0e0e0;\n"
"font-size: 11pt;\n"
"padding: 0;\n"
"margin: 0 5px;"));
        replaceLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(replaceLineEdit);

        replaceButton = new QPushButton(findReplaceBar);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setMinimumSize(QSize(90, 0));
        replaceButton->setMaximumSize(QSize(200, 25));
        replaceButton->setStyleSheet(QString::fromUtf8("border: 1px solid #e3e3e3;\n"
"border-radius: 3px 3px 3px 3px;\n"
"padding: 2px 5px;\n"
"background-color: #073642;\n"
"color:#e0e0e0;\n"
"margin: 0 2px;"));

        horizontalLayout_2->addWidget(replaceButton);

        replaceAllButton = new QPushButton(findReplaceBar);
        replaceAllButton->setObjectName(QString::fromUtf8("replaceAllButton"));
        replaceAllButton->setMinimumSize(QSize(90, 0));
        replaceAllButton->setMaximumSize(QSize(200, 25));
        replaceAllButton->setStyleSheet(QString::fromUtf8("border: 1px solid #e3e3e3;\n"
"border-radius: 3px 3px 3px 3px;\n"
"padding: 2px 5px;\n"
"background-color: #073642;\n"
"color:#e0e0e0;\n"
"margin: 0 2px;"));

        horizontalLayout_2->addWidget(replaceAllButton);

        findButton = new QPushButton(findReplaceBar);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setMinimumSize(QSize(90, 0));
        findButton->setMaximumSize(QSize(200, 25));
        findButton->setStyleSheet(QString::fromUtf8("border: 1px solid #e3e3e3;\n"
"border-radius: 3px 3px 3px 3px;\n"
"padding: 2px 5px;\n"
"background-color: #073642;\n"
"color:#e0e0e0;\n"
"margin: 0 2px;"));

        horizontalLayout_2->addWidget(findButton);

        findPrevButton = new QPushButton(findReplaceBar);
        findPrevButton->setObjectName(QString::fromUtf8("findPrevButton"));
        findPrevButton->setMinimumSize(QSize(90, 0));
        findPrevButton->setMaximumSize(QSize(200, 25));
        findPrevButton->setStyleSheet(QString::fromUtf8("border: 1px solid #e3e3e3;\n"
"border-radius: 3px 3px 3px 3px;\n"
"padding: 2px 5px;\n"
"background-color: #073642;\n"
"color:#e0e0e0;\n"
"margin: 0 2px;"));

        horizontalLayout_2->addWidget(findPrevButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(findReplaceBar);

        statusBar = new QWidget(centralWidget);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setMaximumSize(QSize(16777215, 25));
        statusBar->setFont(font1);
        statusBar->setStyleSheet(QString::fromUtf8("background-color: #404f4f;\n"
"color:white;"));
        horizontalLayout = new QHBoxLayout(statusBar);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        statusMsgLabel = new QLabel(statusBar);
        statusMsgLabel->setObjectName(QString::fromUtf8("statusMsgLabel"));
        statusMsgLabel->setFont(font1);
        statusMsgLabel->setStyleSheet(QString::fromUtf8("color: white;\n"
"margin-left: 10px;"));

        horizontalLayout->addWidget(statusMsgLabel);

        textBrowser = new QTextBrowser(statusBar);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMaximumSize(QSize(100000, 20));
        textBrowser->setFont(font1);
        textBrowser->setStyleSheet(QString::fromUtf8("color: rgb(252, 252, 252);\n"
"background-color: rgba(255, 255, 255, 0);"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setLineWrapMode(QTextEdit::NoWrap);

        horizontalLayout->addWidget(textBrowser);

        labelFileType = new QLabel(statusBar);
        labelFileType->setObjectName(QString::fromUtf8("labelFileType"));
        labelFileType->setFont(font1);
        labelFileType->setStyleSheet(QString::fromUtf8("padding-right: 10px;"));

        horizontalLayout->addWidget(labelFileType);


        verticalLayout_2->addWidget(statusBar);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 961, 22));
        menuBar->setFont(font1);
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuSearch = new QMenu(menuBar);
        menuSearch->setObjectName(QString::fromUtf8("menuSearch"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTemplates = new QMenu(menuBar);
        menuTemplates->setObjectName(QString::fromUtf8("menuTemplates"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuPreferences = new QMenu(menuBar);
        menuPreferences->setObjectName(QString::fromUtf8("menuPreferences"));
        menuTheme = new QMenu(menuPreferences);
        menuTheme->setObjectName(QString::fromUtf8("menuTheme"));
        menuTab_Width = new QMenu(menuPreferences);
        menuTab_Width->setObjectName(QString::fromUtf8("menuTab_Width"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(tabWidget, listWidget);
        QWidget::setTabOrder(listWidget, textBrowser);
        QWidget::setTabOrder(textBrowser, fileOverview);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuSearch->menuAction());
        menuBar->addAction(menuTemplates->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuPreferences->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionDelete_line);
        menuEdit->addAction(actionRemove_word);
        menuEdit->addAction(actionToggle_comment);
        menuEdit->addAction(actionJoin_Lines);
        menuEdit->addAction(actionMove_Line_Up);
        menuEdit->addAction(actionSwap_line_down);
        menuSearch->addAction(actionFind);
        menuSearch->addAction(actionReplace);
        menuSearch->addAction(actionGoTo);
        menuSearch->addAction(actionFind_Next);
        menuSearch->addAction(actionFind_Previous);
        menuTools->addAction(actionAscii);
        menuTools->addAction(actionHex);
        menuTools->addAction(actionStrings);
        menuAbout->addAction(actionAbout);
        menuView->addAction(actionFullScreen);
        menuView->addAction(actionOverview);
        menuView->addAction(actionMenubar);
        menuTemplates->addAction(actionAsm);
        menuTemplates->addAction(actionC);
        menuTemplates->addAction(actionCpluspluss);
        menuTemplates->addAction(actionCss);
        menuTemplates->addAction(actionHtml);
        menuTemplates->addAction(actionJava);
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionClose_All);
        menuFile->addAction(actionExit);
        menuPreferences->addAction(menuTab_Width->menuAction());
        menuPreferences->addAction(menuTheme->menuAction());
        menuTheme->addAction(actionDark);
        menuTheme->addAction(actionSolarized);
        menuTheme->addAction(actionSolarized_Dark);
        menuTheme->addAction(actionTommorrow);
        menuTheme->addAction(actionTommorrow_Night);
        menuTheme->addAction(actionRandomized);
        menuTab_Width->addAction(action2);
        menuTab_Width->addAction(action4);
        menuTab_Width->addAction(action8);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAscii->setText(QCoreApplication::translate("MainWindow", "Ascii", nullptr));
        actionHex->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        actionStrings->setText(QCoreApplication::translate("MainWindow", "Strings", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About Geist", nullptr));
        actionGoTo->setText(QCoreApplication::translate("MainWindow", "GoTo", nullptr));
#if QT_CONFIG(shortcut)
        actionGoTo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFullScreen->setText(QCoreApplication::translate("MainWindow", "Fullscreen", nullptr));
#if QT_CONFIG(shortcut)
        actionFullScreen->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAsm->setText(QCoreApplication::translate("MainWindow", "asm", nullptr));
        actionC->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        actionCpluspluss->setText(QCoreApplication::translate("MainWindow", "cplusplus", nullptr));
        actionHtml->setText(QCoreApplication::translate("MainWindow", "html", nullptr));
        actionJava->setText(QCoreApplication::translate("MainWindow", "java", nullptr));
        actionCss->setText(QCoreApplication::translate("MainWindow", "css", nullptr));
        actionFind_Next->setText(QCoreApplication::translate("MainWindow", "Find Next", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_Next->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_Previous->setText(QCoreApplication::translate("MainWindow", "Find Previous", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_Previous->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReplace->setText(QCoreApplication::translate("MainWindow", "Replace", nullptr));
#if QT_CONFIG(shortcut)
        actionReplace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete_line->setText(QCoreApplication::translate("MainWindow", "Remove line", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete_line->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRemove_word->setText(QCoreApplication::translate("MainWindow", "Remove word", nullptr));
#if QT_CONFIG(shortcut)
        actionRemove_word->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggle_comment->setText(QCoreApplication::translate("MainWindow", "Toggle comment", nullptr));
#if QT_CONFIG(shortcut)
        actionToggle_comment->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+/", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOverview->setText(QCoreApplication::translate("MainWindow", "Overview", nullptr));
        actionDark->setText(QCoreApplication::translate("MainWindow", "Monokai", nullptr));
        actionSolarized_Dark->setText(QCoreApplication::translate("MainWindow", "Solarized Dark", nullptr));
        actionNext_Word->setText(QCoreApplication::translate("MainWindow", "Next Word", nullptr));
        actionPrev_Word->setText(QCoreApplication::translate("MainWindow", "Prev Word", nullptr));
        actionJoin_Lines->setText(QCoreApplication::translate("MainWindow", "Join Lines", nullptr));
#if QT_CONFIG(shortcut)
        actionJoin_Lines->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMove_Line_Up->setText(QCoreApplication::translate("MainWindow", "Swap Line Up", nullptr));
#if QT_CONFIG(shortcut)
        actionMove_Line_Up->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSwap_line_down->setText(QCoreApplication::translate("MainWindow", "Swap Line Down", nullptr));
#if QT_CONFIG(shortcut)
        actionSwap_line_down->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMenubar->setText(QCoreApplication::translate("MainWindow", "Menubar", nullptr));
#if QT_CONFIG(shortcut)
        actionMenubar->setShortcut(QCoreApplication::translate("MainWindow", "Alt+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSolarized->setText(QCoreApplication::translate("MainWindow", "Solarized", nullptr));
        action4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        action8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        action2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        actionClose_All->setText(QCoreApplication::translate("MainWindow", "Close All", nullptr));
        actionTommorrow->setText(QCoreApplication::translate("MainWindow", "Tomorrow", nullptr));
        actionTommorrow_Night->setText(QCoreApplication::translate("MainWindow", "Tomorrow Night", nullptr));
        actionRandomized->setText(QCoreApplication::translate("MainWindow", "Randomized", nullptr));
#if QT_CONFIG(tooltip)
        actionRandomized->setToolTip(QCoreApplication::translate("MainWindow", "Random Selection", nullptr));
#endif // QT_CONFIG(tooltip)
        findLabel->setText(QCoreApplication::translate("MainWindow", "Find:", nullptr));
#if QT_CONFIG(tooltip)
        findLineEdit->setToolTip(QCoreApplication::translate("MainWindow", "Search", nullptr));
#endif // QT_CONFIG(tooltip)
        replaceLabel->setText(QCoreApplication::translate("MainWindow", "Replace:", nullptr));
        replaceButton->setText(QCoreApplication::translate("MainWindow", "Replace", nullptr));
        replaceAllButton->setText(QCoreApplication::translate("MainWindow", "Replace all", nullptr));
#if QT_CONFIG(tooltip)
        findButton->setToolTip(QCoreApplication::translate("MainWindow", "Find next", nullptr));
#endif // QT_CONFIG(tooltip)
        findButton->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
#if QT_CONFIG(tooltip)
        findPrevButton->setToolTip(QCoreApplication::translate("MainWindow", "Find Previous", nullptr));
#endif // QT_CONFIG(tooltip)
        findPrevButton->setText(QCoreApplication::translate("MainWindow", "Find Prev", nullptr));
        statusMsgLabel->setText(QString());
        labelFileType->setText(QString());
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuSearch->setTitle(QCoreApplication::translate("MainWindow", "Search", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuTemplates->setTitle(QCoreApplication::translate("MainWindow", "Templates", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuPreferences->setTitle(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
        menuTheme->setTitle(QCoreApplication::translate("MainWindow", "Theme", nullptr));
        menuTab_Width->setTitle(QCoreApplication::translate("MainWindow", "Tab Width", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
