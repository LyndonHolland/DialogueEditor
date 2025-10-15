#ifndef DIALOGUELINEWIDGET_H
#define DIALOGUELINEWIDGET_H

#include <QWidget>


class DialogueLineWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DialogueLineWidget(QWidget *parent, const QMap<QString, QString>& speakerMap);
    ~DialogueLineWidget();

private:
    QMap<QString, QString> m_SpeakerMap;

};

#endif // DIALOGUELINEWIDGET_H
