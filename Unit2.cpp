//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPresentation *Presentation;
//---------------------------------------------------------------------------
__fastcall TPresentation::TPresentation(TComponent* Owner) : TForm(Owner) {
	Show();
}

void __fastcall TPresentation::FormResize(TObject *Sender) {
	if (Controller) {
	    Controller->Pre_Resize();
	}
}
//---------------------------------------------------------------------------

void __fastcall TPresentation::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift) {
	if (Key == VK_ESCAPE) {
        Key = 0;
		Controller->ToggleFS->Down = false;
		Controller->ToggleFSClick(this);
	}
}
//---------------------------------------------------------------------------

