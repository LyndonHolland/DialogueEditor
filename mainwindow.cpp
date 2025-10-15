#include "mainwindow.h"
#include "dialoguelinewidget.h"

#include <QLabel>
#include <QPushButton>
#include <QScrollArea>
#include <QSpacerItem>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{


    QWidget *mainWidget = new QWidget(this);
    QHBoxLayout *rootLayout = new QHBoxLayout(mainWidget);

    // -----VBoxA
    QVBoxLayout *VBoxA = new QVBoxLayout(mainWidget);
    VBoxA->addWidget(new QPushButton(this)); //TODO replace this with custom widget which is search/filter function
    VBoxA->addWidget(new QPushButton(this)); //TODO replace this with custom widget which displays all conversations

    // -----VBoxB
    QVBoxLayout *VBoxB = new QVBoxLayout(this);


    //nested HBox in VBoxB
    QHBoxLayout *HBoxAInVBoxB = new QHBoxLayout(this);
    HBoxAInVBoxB->addWidget(CreateDialogueLineWindow(mainWidget));
    QPushButton *tempButton = new QPushButton(this);
    tempButton->setMinimumWidth(500);
    HBoxAInVBoxB->addWidget(tempButton); //TODO replace this with custom widget, which displays event properties for dialgue line selected


    QHBoxLayout *HBoxBInVBoxB = new QHBoxLayout(this);
    HBoxBInVBoxB->addWidget(new QPushButton(this)); //TODO replace this with custom widget, which displays properties for selected conversation
    HBoxBInVBoxB->addWidget(new QPushButton(this)); //TODO replace this with custom widget, which displays all branches for selected conversation

    VBoxB->addLayout(HBoxAInVBoxB);
    VBoxB->addLayout(HBoxBInVBoxB);

    rootLayout->addLayout(VBoxA);
    rootLayout->addLayout(VBoxB);


    setCentralWidget(mainWidget);
    mainWidget->setLayout(rootLayout);


}

MainWindow::~MainWindow()
{

}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);

    if(m_DialogueLineScrollArea)
    {
        m_DialogueLineScrollArea->setMinimumHeight(height() / 2);
        m_DialogueLineScrollArea->setMinimumWidth(width() / 2);
    }
}

void MainWindow::initialiseSpeakersMap()
{
    m_SpeakersMap.insert("Speaker1", "Lyndon");
    m_SpeakersMap.insert("Speaker2", "Arthur");
}

QWidget* MainWindow::CreateDialogueLineWindow(QWidget *mainWidget)
{
    QVBoxLayout *mainVBox = new QVBoxLayout(mainWidget);
    QWidget* mainContainer = new QWidget(this);
    mainContainer->setLayout(mainVBox);
    mainContainer->setStyleSheet("background-color: #1f1f1f;");


    int leftMargin = 10;
    //----Set Conversation Heading----
    QLabel* Heading = new QLabel(this);
    Heading->setText("Branch: 1s");
    QFont font;
    font.setFamily("Arial");  // font family
    font.setPointSize(24);    // font size in points
    font.setBold(true);       // optional
    font.setItalic(false);
    Heading->setFont(font);
    Heading->setContentsMargins(leftMargin, 0, 0, 0);
    Heading->setStyleSheet("color: #c8c8c8;");

    //----Set Dialogue Headings
    QHBoxLayout* dialogueInfo = new QHBoxLayout();
    QLabel* nameLabel = new QLabel();
    QLabel* lineLabel = new QLabel();
    QFont fontSmall;
    font.setFamily("Arial");  // font family
    font.setPointSize(14);    // font size in points
    font.setBold(true);       // optional
    font.setItalic(false);
    nameLabel->setFont(fontSmall);
    nameLabel->setText("Name");
    nameLabel->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    nameLabel->setMaximumWidth(150);
    nameLabel->setContentsMargins(leftMargin, 0, 0, 0);
    nameLabel->setStyleSheet("color: #c8c8c8;");
    lineLabel->setFont(fontSmall);
    lineLabel->setText("Line");
    lineLabel->setContentsMargins(leftMargin, 0, 0, 0);
    lineLabel->setStyleSheet("color: #c8c8c8;");

    dialogueInfo->addWidget(nameLabel);
    dialogueInfo->addWidget(lineLabel);



    m_DialogueLineScrollArea = new QScrollArea(mainWidget);
    m_DialogueLineScrollArea->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    m_DialogueLineScrollArea->setMinimumWidth(900);
    m_DialogueLineScrollArea->setMinimumHeight(1000);
    m_DialogueLineScrollArea->setWidgetResizable(true);
    m_DialogueLineScrollArea->setContentsMargins(0, 0, 0, 0);

    QWidget* container = new QWidget(m_DialogueLineScrollArea);
    container->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);

    QVBoxLayout *layout = new QVBoxLayout(container);
    layout->setSpacing(0);
    layout->setContentsMargins(0, 0, 0, 0);

    for(int i = 0; i < 60; i++)
    {
        layout->addWidget(new DialogueLineWidget(this, m_SpeakersMap));
    }
    layout->addStretch(1);


    m_DialogueLineScrollArea->setWidget(container);

    //------Add in order to MainVBox
    mainVBox->addWidget(Heading);
    mainVBox->addLayout(dialogueInfo);
    mainVBox->addWidget(m_DialogueLineScrollArea, 0, Qt::AlignTop);
    mainVBox->addStretch(1);

    return mainContainer;
}

void MainWindow::onButtonClicked()
{
    qDebug() << "Button was clicked";
}
