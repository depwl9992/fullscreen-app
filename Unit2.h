//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "Unit1.h"
//---------------------------------------------------------------------------
class TPresentation : public TForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TPresentation(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPresentation *Presentation;
//---------------------------------------------------------------------------
#endif
