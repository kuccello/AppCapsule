#ifndef ACWEBVIEW_H
#define ACWEBVIEW_H

#include <QtGui>
#include <QWebView>

class ACWebView : public QWebView
{
public:
    ACWebView();
    ACWebView(QWidget* c) : QWebView(c) {}

protected:
    void contextMenuEvent ( QContextMenuEvent * ev );
};

#endif // ACWEBVIEW_H
