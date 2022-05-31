//---------------------------------------------------------------------------

#ifndef ClientH
#define ClientH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *Shape1;
        TShape *Shape2;
        TShape *Shape3;
        TShape *Shape4;
        TShape *Shape5;
        TClientSocket *Client;
        TButton *btnAdauga;
        TButton *btnExit;
        void __fastcall Shape1ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall Shape2ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall Shape3ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall Shape4ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall Shape5ContextPopup(TObject *Sender,
          TPoint &MousePos, bool &Handled);
        void __fastcall btnAdaugaClick(TObject *Sender);
        void __fastcall btnExitClick(TObject *Sender);
        void __fastcall ClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
private:
public:
int n1,n2,n3,n4,n5;
int VectorCulori[5];
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
