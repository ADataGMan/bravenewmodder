#ifndef FILEOPTIONS_H
#define FILEOPTIONS_H

#include <QtGui/QFrame>

namespace Ui {
    class FileOptions;
}

class FileOptions : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(FileOptions)
public:
    explicit FileOptions(QWidget *parent = 0);
    virtual ~FileOptions();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::FileOptions *m_ui;
};

#endif // FILEOPTIONS_H
