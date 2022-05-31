//---------------------------------------------------------------------------


#pragma hdrstop

#include "Patrat.h"

//---------------------------------------------------------------------------
Patrat::Patrat(TPanel* Owner, int i,int  j,int  height = 55,int width = 57)
{
shape = new TShape(Owner);
shape->Parent = Owner;
shape->Shape=stRectangle;
shape->Width=width;
shape->Height=height;
shape->Left=(i+1)*75+375;
shape->Top=j*70+25;
}
#pragma package(smart_init)

