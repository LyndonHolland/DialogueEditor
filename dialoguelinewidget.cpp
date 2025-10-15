#include "dialoguelinewidget.h"

#include <QComboBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>

DialogueLineWidget::DialogueLineWidget(QWidget *parent, const QMap<QString, QString>& speakerMap)
    : QWidget(parent)
    , m_SpeakerMap(speakerMap)
{

    QHBoxLayout* layout = new QHBoxLayout(this);
    setLayout(layout);

    QLineEdit* line = new QLineEdit(this);
    line->setFrame(false);
    line->setMaximumHeight(20);
    line->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
    line->setStyleSheet("QLineEdit { padding: 0px; margin: 0px; }");
    line->setStyleSheet("background-color: #262626; color: #c8c8c8;");

    QComboBox* combo = new QComboBox(this);
    combo->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    combo->setStyleSheet("QComboBox { border: none; padding: 0px; }");
    combo->setStyleSheet("background-color: #262626; color: #c8c8c8;");
    combo->setMaximumWidth(150);
    combo->setMaximumHeight(20);

    layout->addWidget(combo);
    layout->addWidget(line);
    setContentsMargins(0,0,0,0);

}

DialogueLineWidget::~DialogueLineWidget()
{

}
