#ifndef DIALOGDATABASEMANAGER_H
#define DIALOGDATABASEMANAGER_H

#include <QDialog>
#include <QTreeWidget>
#include <QString>
#include "xmlhandler.h"

namespace Ui {
class DialogDatabaseManager;
}

class DialogDatabaseManager : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDatabaseManager(QWidget *parent = 0);
    ~DialogDatabaseManager();

    void addRootChild();
    int getDbPositionInDbList(int crnItemID);

signals:
    void connectToDB(QString internalDbName);    
private slots:


    void on_pushBtnNewDb_clicked();

    void on_pushBtnDeleteDb_clicked();

    void on_treeWidgetDatabases_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

private:
    int dbCnt = 0;

    Ui::DialogDatabaseManager *ui;
    XmlHandler xmlHandler;
    QList<Database> databasesList;
};

#endif // DIALOGDATABASEMANAGER_H
