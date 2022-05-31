//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include"MainRezultat.h"
#include"MainStart.h"
#include "MainJoc.h"
#include "cerc.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFereastraJoc *FereastraJoc;
//---------------------------------------------------------------------------
void TFereastraJoc::Inceput()
{n1=n2=n3=n4=n5=-1;
linie=0;
coloana=0;
Joculetz=new Joc(Panel20);
int i=0;
}


void TFereastraJoc::Stergere()
{delete Joculetz;Inceput();}


__fastcall TFereastraJoc::TFereastraJoc(TComponent* Owner)
        : TForm(Owner)
{}

//---------------------------------------------------------------------------
void __fastcall TFereastraJoc::btnExitJClick(TObject *Sender)
{
ModalResult=mrCancel;
FereastraStart->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFereastraJoc::Shape1ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
n1++;
n1%=8;
switch(n1)
{
        case 0:
        Shape1->Brush->Color=clRed;
        Joculetz->AdaugaCulori(coloana,0,0);
        break;
        case 1:
        Shape1->Brush->Color=clBlue;
        Joculetz->AdaugaCulori(coloana,0,1);
        break;
        case 2:
        Shape1->Brush->Color=clFuchsia;
        Joculetz->AdaugaCulori(coloana,0,2);
        break;
        case 3:
        Shape1->Brush->Color=clGreen;
        Joculetz->AdaugaCulori(coloana,0,3);
        break;
        case 4:
        Shape1->Brush->Color=clYellow;
        Joculetz->AdaugaCulori(coloana,0,4);
        break;
        case 5:
        Shape1->Brush->Color=clAqua;
        Joculetz->AdaugaCulori(coloana,0,5);
        break;
        case 6:
        Shape1->Brush->Color=clPurple;
        Joculetz->AdaugaCulori(coloana,0,6);
        break;
        case 7:
        Shape1->Brush->Color=clGray;
        Joculetz->AdaugaCulori(coloana,0,7);
        break;
}
}
//---------------------------------------------------------------------------


void __fastcall TFereastraJoc::btnAdaugareClick(TObject *Sender)
{
int rezultat;
Joculetz->PuneCuloare(Shape1,linie,coloana);                              //alegem culori in shape-urile de
linie++;                                                            //retinere a culorilor urmand sa
Joculetz->PuneCuloare(Shape2,linie,coloana);     //le adaugam in matricea de shape-uri(cercuri)
linie++;
Joculetz->PuneCuloare(Shape3,linie,coloana);
linie++;
Joculetz->PuneCuloare(Shape4,linie,coloana);
linie++;
Joculetz->PuneCuloare(Shape5,linie,coloana);
rezultat=Joculetz->Adauga_Compara_Culori(VectorC,coloana);
if(rezultat==1)
{ModalResult=mrCancel;
Stergere();
Rezultat->Show();
Client->Socket->SendText("A castigat");}
else if(rezultat==2)
{
linie =0;
btnAdaugare->Hide();
btnMIncearca->Show();
Client->Socket->SendText("A pierdut");
}
if(rezultat==0)
{linie=0;coloana++;}
}
//---------------------------------------------------------------------------


void __fastcall TFereastraJoc::Shape3ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
n3++;
n3%=8;
switch(n3)
{
        case 0:
        Shape3->Brush->Color=clRed;
        Joculetz->AdaugaCulori(coloana,2,0);
        break;
        case 1:
        Shape3->Brush->Color=clBlue;
        Joculetz->AdaugaCulori(coloana,2,1);
        break;
        case 2:
        Shape3->Brush->Color=clFuchsia;
        Joculetz->AdaugaCulori(coloana,2,2);
        break;
        case 3:
        Shape3->Brush->Color=clGreen;
        Joculetz->AdaugaCulori(coloana,2,3);
        break;
        case 4:
        Shape3->Brush->Color=clYellow;
        Joculetz->AdaugaCulori(coloana,2,4);
        break;
        case 5:
        Shape3->Brush->Color=clAqua;
        Joculetz->AdaugaCulori(coloana,2,5);
        break;
        case 6:
        Shape3->Brush->Color=clPurple;
        Joculetz->AdaugaCulori(coloana,2,6);
        break;
        case 7:
        Shape3->Brush->Color=clGray;
        Joculetz->AdaugaCulori(coloana,2,7);
        break;
}
}
//---------------------------------------------------------------------------

void __fastcall TFereastraJoc::Shape5ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
n5++;
n5%=8;
switch(n5)
{
        case 0:
        Shape5->Brush->Color=clRed;
        Joculetz->AdaugaCulori(coloana,4,0);
        break;
        case 1:
        Shape5->Brush->Color=clBlue;
        Joculetz->AdaugaCulori(coloana,4,1);
        break;
        case 2:
        Shape5->Brush->Color=clFuchsia;
        Joculetz->AdaugaCulori(coloana,4,2);
        break;
        case 3:
        Shape5->Brush->Color=clGreen;
        Joculetz->AdaugaCulori(coloana,4,3);
        break;
        case 4:
        Shape5->Brush->Color=clYellow;
        Joculetz->AdaugaCulori(coloana,4,4);
        break;
        case 5:
        Shape5->Brush->Color=clAqua;
        Joculetz->AdaugaCulori(coloana,4,5);
        break;
        case 6:
        Shape5->Brush->Color=clPurple;
        Joculetz->AdaugaCulori(coloana,4,6);
        break;
        case 7:
        Shape5->Brush->Color=clGray;
        Joculetz->AdaugaCulori(coloana,4,7);
        break;
}
}
//---------------------------------------------------------------------------

void __fastcall TFereastraJoc::Shape4ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
n4++;
n4%=8;
switch(n4)
{
        case 0:
        Shape4->Brush->Color=clRed;
        Joculetz->AdaugaCulori(coloana,3,0);
        break;
        case 1:
        Shape4->Brush->Color=clBlue;
        Joculetz->AdaugaCulori(coloana,3,1);
        break;
        case 2:
        Shape4->Brush->Color=clFuchsia;
        Joculetz->AdaugaCulori(coloana,3,2);
        break;
        case 3:
        Shape4->Brush->Color=clGreen;
        Joculetz->AdaugaCulori(coloana,3,3);
        break;
        case 4:
        Shape4->Brush->Color=clYellow;
        Joculetz->AdaugaCulori(coloana,3,4);
        break;
        case 5:
        Shape4->Brush->Color=clAqua;
        Joculetz->AdaugaCulori(coloana,3,5);
        break;
        case 6:
        Shape4->Brush->Color=clPurple;
        Joculetz->AdaugaCulori(coloana,3,6);
        break;
        case 7:
        Shape4->Brush->Color=clGray;
        Joculetz->AdaugaCulori(coloana,3,7);
        break;
}
}
//---------------------------------------------------------------------------

void __fastcall TFereastraJoc::Shape2ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
n2++;
n2%=8;
switch(n2)
{
        case 0:
        Shape2->Brush->Color=clRed;
        Joculetz->AdaugaCulori(coloana,1,0);
        break;
        case 1:
        Shape2->Brush->Color=clBlue;
        Joculetz->AdaugaCulori(coloana,1,1);
        break;
        case 2:
        Shape2->Brush->Color=clFuchsia;
        Joculetz->AdaugaCulori(coloana,1,2);
        break;
        case 3:
        Shape2->Brush->Color=clGreen;
        Joculetz->AdaugaCulori(coloana,1,3);
        break;
        case 4:
        Shape2->Brush->Color=clYellow;
        Joculetz->AdaugaCulori(coloana,1,4);
        break;
        case 5:
        Shape2->Brush->Color=clAqua;
        Joculetz->AdaugaCulori(coloana,1,5);
        break;
        case 6:
        Shape2->Brush->Color=clPurple;
        Joculetz->AdaugaCulori(coloana,1,6);
        break;
        case 7:
        Shape2->Brush->Color=clGray;
        Joculetz->AdaugaCulori(coloana,1,7);
        break;
}
}
//---------------------------------------------------------------------------



void __fastcall TFereastraJoc::btnMIncearcaClick(TObject *Sender)
{
btnAdaugare->Show();
Stergere();
}
//---------------------------------------------------------------------------


void __fastcall TFereastraJoc::ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
int i=4;
String s;
s=Client->Socket->ReceiveText();
if(s!="A castigat" && s!="A pierdut")
{int c=StrToInt(s);
while(c!=0)
{VectorC[i]=c%10;c=c/10;i--;}
Inceput();}
}
//---------------------------------------------------------------------------

