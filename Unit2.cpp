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
