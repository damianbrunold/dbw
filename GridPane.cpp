#include "GridPane.h"

BEGIN_EVENT_TABLE(GridPane, wxPanel)
// some useful events
/*
 EVT_MOTION(GridPane::mouseMoved)
 EVT_LEFT_DOWN(GridPane::mouseDown)
 EVT_LEFT_UP(GridPane::mouseReleased)
 EVT_RIGHT_DOWN(GridPane::rightClick)
 EVT_LEAVE_WINDOW(GridPane::mouseLeftWindow)
 EVT_KEY_DOWN(GridPane::keyPressed)
 EVT_KEY_UP(GridPane::keyReleased)
 EVT_MOUSEWHEEL(GridPane::mouseWheelMoved)
 */
EVT_PAINT(GridPane::paintEvent)
END_EVENT_TABLE()


// some useful events
/*
 void GridPane::mouseMoved(wxMouseEvent &event) {}
 void GridPane::mouseDown(wxMouseEvent &event) {}
 void GridPane::mouseWheelMoved(wxMouseEvent &event) {}
 void GridPane::mouseReleased(wxMouseEvent &event) {}
 void GridPane::rightClick(wxMouseEvent &event) {}
 void GridPane::mouseLeftWindow(wxMouseEvent &event) {}
 void GridPane::keyPressed(wxKeyEvent &event) {}
 void GridPane::keyReleased(wxKeyEvent &event) {}
 */

GridPane::GridPane(wxFrame* parent)
        : wxPanel(parent)
{
}

void GridPane::paintEvent(wxPaintEvent &evt)
{
    wxPaintDC dc(this);
    render(dc);
}

void GridPane::paintNow()
{
    wxClientDC dc(this);
    render(dc);
}

void GridPane::render(wxDC &dc)
{
    // draw some text
    dc.DrawText(wxT("Testing"), 40, 60);

    // draw a circle
    dc.SetBrush(*wxGREEN_BRUSH);
    dc.SetPen(wxPen(wxColor(255, 0, 0), 5));
    dc.DrawCircle(wxPoint(200, 100), 25);

    // draw a rectangle
    dc.SetBrush(*wxBLUE_BRUSH);
    dc.SetPen(wxPen(wxColor(255, 175, 175), 10));
    dc.DrawRectangle(300, 100, 400, 200);

    // draw a line
    dc.SetPen(wxPen(wxColor(0, 0, 0), 3));
    dc.DrawLine(300, 100, 700, 300);
}
