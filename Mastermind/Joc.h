//---------------------------------------------------------------------------
#include"cerc.h"
#include"Patrat.h"
#ifndef JocH
#define JocH
//---------------------------------------------------------------------------
class Joc
{
cerc *Matrice[5][10];
Patrat *MatricePatrat[5][10];
public:
Joc(TPanel *);
void AdaugaCulori(int,int,int);
void PuneCuloare(TShape*,int ,int);
int Adauga_Compara_Culori(int v[5],int);
};

#endif
