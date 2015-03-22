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
	Button1->Visible = true;
	Button2->Visible = false;
	Label1->Caption = (String)"Height: " + Controller->Height;
	Label2->Caption = (String)"Width: " + Controller->Width;
}

void __fastcall TController::Button1Click(TObject *Sender) {
	Presentation->BorderStyle=bsNone;
	Presentation->WindowState = wsMaximized;
}

void __fastcall TController::Button2Click(TObject *Sender) {
	Presentation->BorderStyle=bsSizeable;
	Presentation->WindowState = wsNormal;
}

void __fastcall TController::FormKeyPress(TObject *Sender, System::WideChar &Key) {
	if (Key == VK_ESCAPE) {
		Key = 0;
		Button2->Click();
	}
}

void __fastcall TController::Pre_Resize() {
	Label1->Caption = (String)"Height: " + Presentation->Height;
	Label2->Caption = (String)"Width: " + Presentation->Width;
}
