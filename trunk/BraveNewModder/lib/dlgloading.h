#ifndef DLGLOADING_H
#define DLGLOADING_H

#include <QtGui/QWidget>

namespace Ui {
    class DlgLoading;
}

class DlgLoading : public QWidget {
    Q_OBJECT
    Q_DISABLE_COPY(DlgLoading)
public:
    explicit DlgLoading(QWidget *parent = 0);
    virtual ~DlgLoading();
    void setFileName(QString fileName);

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DlgLoading *m_ui;
    QString _fileName;
};

#endif // DLGLOADING_H
