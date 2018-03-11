#ifndef DBW_DBWAPP_H
#define DBW_DBWAPP_H

#include <wx/wx.h>

class GridPane;

class DBWApp : public wxApp {
    bool OnInit();

    wxFrame *frame;
    GridPane *gridPane;
};

#endif //DBW_DBWAPP_H
