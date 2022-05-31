//---------------------------------------------------------------------------


#pragma hdrstop

#include "cerc.h"
cerc::cerc(TPanel* Owner, int i,int  j,int  height = 55,int width = 57)
{
shape = new TShape(Owner);
shape->Parent = Owner;
shape->Shape=stEllipse;
shape->Width=width;
shape->Height=height;
shape->Left=(i+1)*75;
shape->Top=j*70;
}

void cerc::ColoreazaAlb()
{
this->shape->Brush->Color=clWhite;
}
//---------------------------------------------------------------------------

#pragma package(smart_init)
