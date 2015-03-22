//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TController *Controller;
//---------------------------------------------------------------------------
__fastcall TController::TController(TComponent* Owner) : TForm(Owner) {
	Show();
	if (Presentation) {
		Pre_Resize();
	}
}

void __fastcall TController::FormKeyPress(TObject *Sender, System::WideChar &Key) {
	if (Key == VK_ESCAPE) {
		Key = 0;
		ToggleFS->Down = false;
		ToggleFSClick(this);
	}
}

void __fastcall TController::Pre_Resize() {
	Label1->Caption = (String)"Height: " + Presentation->Height;
	Label2->Caption = (String)"Width: " + Presentation->Width;
}
void __fastcall TController::ToggleFSClick(TObject *Sender) {
	if (ToggleFS->Down) {
    	Presentation->BorderStyle=bsNone;
		Presentation->WindowState = wsMaximized;
	} else {
		Presentation->BorderStyle=bsSizeable;
		Presentation->WindowState = wsNormal;
    }
}
//---------------------------------------------------------------------------

