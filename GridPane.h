#ifndef DBW_GRIDPANE_H
#define DBW_GRIDPANE_H

#include <wx/wx.h>

class GridPane : public wxPanel
{
public:
    GridPane(wxFrame* parent);

    void paintEvent(wxPaintEvent &evt);
    void paintNow();

    void render(wxDC &dc);

    // some useful events
    /*
     void mouseMoved(wxMouseEvent &event);
     void mouseDown(wxMouseEvent &event);
     void mouseWheelMoved(wxMouseEvent &event);
     void mouseReleased(wxMouseEvent &event);
     void rightClick(wxMouseEvent &event);
     void mouseLeftWindow(wxMouseEvent &event);
     void keyPressed(wxKeyEvent &event);
     void keyReleased(wxKeyEvent &event);
     */

    DECLARE_EVENT_TABLE()
};


#endif //DBW_GRIDPANE_H
