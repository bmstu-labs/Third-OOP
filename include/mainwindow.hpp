#pragma once

#include <QtWidgets>

class MainWindow : public QMainWindow {
    Q_OBJECT

/* Widgets */
private:
    QLineEdit *enterLine;
    QVBoxLayout *centralLayout;

/* Private methods */
private:
    void widgets_setup();

    void slots_connect();

/* Slots */
private slots:

/* Public methods */
public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow() = default;
};
