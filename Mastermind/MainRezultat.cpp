//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "MainStart.h"
#include "MainRezultat.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRezultat *Rezultat;
//---------------------------------------------------------------------------
__fastcall TRezultat::TRezultat(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRezultat::btnExit2Click(TObject *Sender)
{
exit(0);        
}
//---------------------------------------------------------------------------
void __fastcall TRezultat::btnMaiIncearcaClick(TObject *Sender)
{
Rezultat->Hide();
FereastraStart->Show();
}
//---------------------------------------------------------------------------
