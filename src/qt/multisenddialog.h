#ifndef MULTISENDDIALOG_H
#define MULTISENDDIALOG_H

#include <QDialog>

namespace Ui {
class StakeForMultisendDialog;
}
class WalletModel;
class QLineEdit;
class StakeForMultisendDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StakeForMultisendDialog(QWidget *parent = 0);
    ~StakeForMultisendDialog();

    void setModel(WalletModel *model);
	void setAddress(const QString &address);
	void setAddress(const QString &address, QLineEdit *addrEdit);
private slots:
	void on_viewButton_clicked();
    void on_addButton_clicked();
    void on_deleteButton_clicked();
	void on_activateButton_clicked();
	void on_disableButton_clicked();
	void on_addressBookButton_clicked();

	
private:
    Ui::StakeForMultisendDialog *ui;
	WalletModel *model;
};

#endif // MULTISENDDIALOG_H