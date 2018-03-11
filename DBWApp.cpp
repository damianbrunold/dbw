#include "DBWApp.h"
#include "GridPane.h"

#include <wx/sizer.h>

bool DBWApp::OnInit()
{
    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
    frame = new wxFrame(nullptr, -1,  wxT("DBW"), wxPoint(50,50), wxSize(800,600));

    gridPane = new GridPane(frame);
    sizer->Add(gridPane, 1, wxEXPAND);

    frame->SetSizer(sizer);
    frame->SetAutoLayout(true);
    frame->Show();
    return true;
}

