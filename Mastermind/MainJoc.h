//---------------------------------------------------------------------------

#ifndef MainJocH
#define MainJocH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include "cerc.h"
#include "Patrat.h"
#include "Joc.h"
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class TFereastraJoc : public TForm
{
__published:	// IDE-managed Components
        TButton *btnExitJ;
        TButton *btnAdaugare;
        TShape *Shape1;
        TShape *Shape2;
        TShape *Shape3;
        TShape *Shape4;
        TShape *Shape5;
        TPanel *Panel20;
        TButton *btnMIncearca;
        TClientSocket *Client;
        void __fastcall btnExitJClick(TObject *Sender);
        void __fastcall Shape1ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall btnAdaugareClick(TObject *Sender);
        void __fastcall Shape3ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall Shape5ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall Shape4ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall Shape2ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall btnMIncearcaClick(TObject *Sender);
        void __fastcall ClientRead(TObject *Sender,
          TCustomWinSocket *Socket);

private:

public:
int n1,n2,n3,n4,n5,linie,coloana;
int VectorC[5];
Joc *Joculetz;
        void Inceput();
        void Stergere();
        __fastcall TFereastraJoc(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFereastraJoc *FereastraJoc;
//---------------------------------------------------------------------------
#endif

