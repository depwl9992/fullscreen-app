//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
	Button1->Visible = true;
	Button2->Visible = false;
	Label1->Caption = (String)"Height: " + Form1->Height;
	Label2->Caption = (String)"Width: " + Form1->Width;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) {
	Form1->BorderStyle=bsNone;
	Form1->WindowState = wsMaximized;
	Button1->Visible = false;
	Button2->Visible = true;
	Label1->Caption = (String)"Height: " + Form1->Height;
	Label2->Caption = (String)"Width: " + Form1->Width;
	Form1->Color = clBlack;
	Label1->Font->Color = clWhite;
	Label2->Font->Color = clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender) {
	Form1->BorderStyle=bsSizeable;
	Form1->WindowState = wsNormal;
	Button1->Visible = true;
	Button2->Visible = false;
	Label1->Caption = (String)"Height: " + Form1->Height;
	Label2->Caption = (String)"Width: " + Form1->Width;
	Form1->Color = clBtnFace;
	Label1->Font->Color = clBlack;
	Label2->Font->Color = clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyPress(TObject *Sender, System::WideChar &Key) {
	if (Key == VK_ESCAPE) {
		Key = 0;
		Button2->Click();
	}
}
//---------------------------------------------------------------------------
