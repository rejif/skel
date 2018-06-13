#include "mwindow.h"

MWindow::MWindow(QWidget *parent):QMainWindow(parent){
    setWindowTitle(tr("skel"));
    resize(720,480);
}
MWindow::~MWindow(){}
