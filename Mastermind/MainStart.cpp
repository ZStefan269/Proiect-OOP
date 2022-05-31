//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "MainStart.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFereastraStart *FereastraStart;
//---------------------------------------------------------------------------
__fastcall TFereastraStart::TFereastraStart(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFereastraStart::btnExitClick(TObject *Sender)
{
exit(0);
}
//---------------------------------------------------------------------------
void __fastcall TFereastraStart::btnStartClick(TObject *Sender)
{
FereastraJoc->ShowModal();

}
//---------------------------------------------------------------------------

