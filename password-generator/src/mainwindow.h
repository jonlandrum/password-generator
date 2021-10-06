#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QStandardPaths>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    // -- Public Methods ------------------------------------------------------
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
    void closeEvent(QCloseEvent* event);

    // -- Public Fields -------------------------------------------------------
    static QString ORG_NAME;
    static QString ORG_DOMAIN;
    static QString APP_NAME;

private slots:
    void on_actionExit_triggered(bool triggered);
    void on_upperCheckBox_toggled(bool checked);
    void on_lowerCheckBox_toggled(bool checked);
    void on_numberCheckBox_toggled(bool checked);
    void on_specialCheckBox_toggled(bool checked);
    void on_lengthCheckBox_toggled(bool checked);
    void on_passwordLineEdit_focused(bool hasFocus);
    void on_generatePasswordButton_clicked();

private:
    // -- Private Methods -----------------------------------------------------
    void loadSettings();
    void saveSettings();
//    void showAbout();
//    void showLicense();

    // -- Private Fields ------------------------------------------------------
    Ui::MainWindow* ui;
    QSettings* settings;
    const QString UPPER_CHK = "upperChecked";
    const QString UPPER_VAL = "upperValue";
    const QString LOWER_CHK = "lowerChecked";
    const QString LOWER_VAL = "lowerValue";
    const QString NUMBER_CHK = "numberChecked";
    const QString NUMBER_VAL = "numberValue";
    const QString SPECIAL_CHK = "specialChecked";
    const QString SPECIAL_VAL = "specialValue";
    const QString LENGTH_CHK = "lengthChecked";
    const QString LENGTH_VAL = "lengthValue";
};
#endif // MAINWINDOW_H
