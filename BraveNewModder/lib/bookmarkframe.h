#ifndef BOOKMARKFRAME_H
#define BOOKMARKFRAME_H

#include <QtGui/QFrame>

namespace Ui {
    class BookmarkFrame;
}

class BookmarkFrame : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(BookmarkFrame)
public:
    explicit BookmarkFrame(QWidget *parent = 0);
    virtual ~BookmarkFrame();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::BookmarkFrame *m_ui;
};

#endif // BOOKMARKS_H
