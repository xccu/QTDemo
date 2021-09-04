
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//类的前置声明
class QLineEdit;
class QDialog;
class QLabel;

#include <QMainWindow>
#pragma execution_character_set("utf-8")

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void newFile();                         // 新建操作
    bool maybeSave();                       // 判断是否需要保存
    bool save();                            // 保存操作
    bool saveAs();                          // 另存为操作
    bool saveFile(const QString &fileName); // 保存文件
    bool loadFile(const QString &fileName); // 加载文件

protected:
    void closeEvent(QCloseEvent *event); // 关闭事件

private slots:
    void on_action_New_triggered();
    void on_action_Save_triggered();
    void on_action_SaveAs_triggered();
    void on_action_Open_triggered();
    void on_action_Close_triggered();
    void on_action_Exit_triggered();
    void on_action_Undo_triggered();
    void on_action_Cut_triggered();
    void on_action_Copy_triggered();
    void on_action_Paste_triggered();
    void on_action_Find_triggered();
    void showFindText(); //私有槽声明

private:
    Ui::MainWindow *ui;
    bool isUntitled;            // 为真表示文件没有保存过，为假表示文件已经被保存过了
    QString curFile;            // 保存当前文件的路径
    QAction *openAction;
    QLineEdit *findLineEdit;
    QDialog *findDlg;           //对话框对象
    QLabel *statusLabel;        //标签对象
    QLabel *permanentLabel;
};

#endif // MAINWINDOW_H
