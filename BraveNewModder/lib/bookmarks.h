#ifndef BOOKMARKS_H
#define BOOKMARKS_H

#include <QtGui/QFrame>

namespace Ui {
    class bookmarks;
}

class bookmarks : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(bookmarks)
public:
    explicit bookmarks(QWidget *parent = 0);
    virtual ~bookmarks();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::bookmarks *m_ui;
};

#endif // BOOKMARKS_H
