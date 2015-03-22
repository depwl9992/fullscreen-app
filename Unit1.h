//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "Unit2.h"
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TController : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TSpeedButton *ToggleFS;
	void __fastcall FormKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ToggleFSClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TController(TComponent* Owner);
	void __fastcall TController::Pre_Resize(void);
};
//---------------------------------------------------------------------------
extern PACKAGE TController *Controller;
//---------------------------------------------------------------------------
#endif
