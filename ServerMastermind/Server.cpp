//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Server.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
String s;
s=Socket->ReceiveText();
for(int i=0;i<Server->Socket->ActiveConnections;i++)
        Server->Socket->Connections[i]->SendText(s);
}
//---------------------------------------------------------------------------

