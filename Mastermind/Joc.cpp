//---------------------------------------------------------------------------


#pragma hdrstop

#include "Joc.h"
#include "MainJoc.h"

//---------------------------------------------------------------------------
Joc::Joc(TPanel *Panel20)
{for(int i=0;i<5;i++){
for(int j=0;j<10;j++){
Matrice[i][j] = new cerc(Panel20,i,j,57,57);}}
for(int i=0;i<5;i++){
for(int j=0;j<10;j++)
{MatricePatrat[i][j] = new Patrat(Panel20,i,j,15,50);}}}


void Joc::AdaugaCulori(int i,int j,int culoare)
{Matrice[i][j]->culoare=culoare;}


void Joc::PuneCuloare(TShape*shape,int i,int j)
{Matrice[i][j]->shape->Brush->Color=shape->Brush->Color;}


int Joc::Adauga_Compara_Culori(int v[5],int coloana)
{int ok=0,ok1=1,inceput=0,sfarsit=4;
for(int i=0;i<5;i++)
{if(Matrice[coloana][i]->culoare==v[i])
{MatricePatrat[inceput][coloana]->shape->Brush->Color=clRed;
inceput++;}
else
{
        for(int j=0;j<5;j++)
        {
                if(Matrice[coloana][i]->culoare==v[j]){
                        ok=1;
        }
}
if(ok==0)
{
        MatricePatrat[sfarsit][coloana]->shape->Brush->Color=clBlack;
        sfarsit--;
}
}
ok=0;
}
for(int i=inceput;i<sfarsit;i++)
{
MatricePatrat[i][coloana]->shape->Brush->Color=clWhite;
}
for(int i=0;i<5;i++)
{
if(MatricePatrat[i][coloana]->shape->Brush->Color!=clRed)
{ok1=0;}
}
if(ok1==1)
{return 1;}
if(coloana==9)
{return 2;}
coloana++;
if(coloana>0)
{
for(int i=0;i<5;i++)
{
Matrice[coloana][i]->culoare=Matrice[coloana-1][i]->culoare;
}
}
return 0;
}
#pragma package(smart_init)
