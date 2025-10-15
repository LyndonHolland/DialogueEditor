#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:

    virtual void resizeEvent(QResizeEvent *event) override;

private:

    void initialiseSpeakersMap();


    QWidget* CreateDialogueLineWindow(QWidget *mainWidget);

    void onButtonClicked();
    QMap<QString, QString> m_SpeakersMap;

    class QScrollArea* m_DialogueLineScrollArea;
};
#endif // MAINWINDOW_H
