//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Client.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{n1=n2=n3=n4=n5=-1;
for(int i=0;i<5;i++)
{VectorCulori[i]=-1;}}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape1ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
n1++;
n1=n1%8;
switch(n1)
{
        case 0:
        Shape1->Brush->Color=clRed;
        VectorCulori[0]=0;
        break;
        case 1:
        Shape1->Brush->Color=clBlue;
        VectorCulori[0]=1;
        break;
        case 2:
        Shape1->Brush->Color=clFuchsia;
        VectorCulori[0]=2;
        break;
        case 3:
        Shape1->Brush->Color=clGreen;
        VectorCulori[0]=3;
        break;
        case 4:
        Shape1->Brush->Color=clYellow;
        VectorCulori[0]=4;
        break;
        case 5:
        Shape1->Brush->Color=clAqua;
        VectorCulori[0]=5;
        break;
        case 6:
        Shape1->Brush->Color=clPurple;
        VectorCulori[0]=6;
        break;
        case 7:
        Shape1->Brush->Color=clGray;
        VectorCulori[0]=7;
        break;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape2ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
n2++;
n2=n2%8;
switch(n2)
{
        case 0:
        Shape2->Brush->Color=clRed;
        VectorCulori[1]=0;
        break;
        case 1:
        Shape2->Brush->Color=clBlue;
        VectorCulori[1]=1;
        break;
        case 2:
        Shape2->Brush->Color=clFuchsia;
        VectorCulori[1]=2;
        break;
        case 3:
        Shape2->Brush->Color=clGreen;
        VectorCulori[1]=3;
        break;
        case 4:
        Shape2->Brush->Color=clYellow;
        VectorCulori[1]=4;
        break;
        case 5:
        Shape2->Brush->Color=clAqua;
        VectorCulori[1]=5;
        break;
        case 6:
        Shape2->Brush->Color=clPurple;
        VectorCulori[1]=6;
        break;
        case 7:
        Shape2->Brush->Color=clGray;
        VectorCulori[1]=7;
        break;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape3ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
n3++;
n3=n3%8;
switch(n3)
{
        case 0:
        Shape3->Brush->Color=clRed;
        VectorCulori[2]=0;
        break;
        case 1:
        Shape3->Brush->Color=clBlue;
        VectorCulori[2]=1;
        break;
        case 2:
        Shape3->Brush->Color=clFuchsia;
        VectorCulori[2]=2;
        break;
        case 3:
        Shape3->Brush->Color=clGreen;
        VectorCulori[2]=3;
        break;
        case 4:
        Shape3->Brush->Color=clYellow;
        VectorCulori[2]=4;
        break;
        case 5:
        Shape3->Brush->Color=clAqua;
        VectorCulori[2]=5;
        break;
        case 6:
        Shape3->Brush->Color=clPurple;
        VectorCulori[2]=6;
        break;
        case 7:
        Shape3->Brush->Color=clGray;
        VectorCulori[2]=7;
        break;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape4ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
n4++;
n4=n4%8;
switch(n4)
{
        case 0:
        Shape4->Brush->Color=clRed;
        VectorCulori[3]=0;
        break;
        case 1:
        Shape4->Brush->Color=clBlue;
        VectorCulori[3]=1;
        break;
        case 2:
        Shape4->Brush->Color=clFuchsia;
        VectorCulori[3]=2;
        break;
        case 3:
        Shape4->Brush->Color=clGreen;
        VectorCulori[3]=3;
        break;
        case 4:
        Shape4->Brush->Color=clYellow;
        VectorCulori[3]=4;
        break;
        case 5:
        Shape4->Brush->Color=clAqua;
        VectorCulori[3]=5;
        break;
        case 6:
        Shape4->Brush->Color=clPurple;
        VectorCulori[3]=6;
        break;
        case 7:
        Shape4->Brush->Color=clGray;
        VectorCulori[3]=7;
        break;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape5ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
n5++;
n5=n5%8;
switch(n5)
{
        case 0:
        Shape5->Brush->Color=clRed;
        VectorCulori[4]=0;
        break;
        case 1:
        Shape5->Brush->Color=clBlue;
        VectorCulori[4]=1;
        break;
        case 2:
        Shape5->Brush->Color=clFuchsia;
        VectorCulori[4]=2;
        break;
        case 3:
        Shape5->Brush->Color=clGreen;
        VectorCulori[4]=3;
        break;
        case 4:
        Shape5->Brush->Color=clYellow;
        VectorCulori[4]=4;
        break;
        case 5:
        Shape5->Brush->Color=clAqua;
        VectorCulori[4]=5;
        break;
        case 6:
        Shape5->Brush->Color=clPurple;
        VectorCulori[4]=6;
        break;
        case 7:
        Shape5->Brush->Color=clGray;
        VectorCulori[4]=7;
        break;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnAdaugaClick(TObject *Sender)
{
int a=0;
String str;
for (int i=0;i<5;i++)
{a=a*10+VectorCulori[i];}str=a;
Client->Socket->SendText(str);
btnAdauga->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnExitClick(TObject *Sender)
{
exit(0);        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
String s;
s=Client->Socket->ReceiveText();
if(s=="A castigat"||s=="A pierdut")
{btnAdauga->Show();}
}
//---------------------------------------------------------------------------


