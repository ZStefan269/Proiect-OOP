//---------------------------------------------------------------------------
#include"MainJoc.h"
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#ifndef MainStartH
#define MainStartH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TFereastraStart : public TForm
{
__published:	// IDE-managed Components
        TButton *btnStart;
        TButton *btnExit;
        TLabel *NumeJoc;
        void __fastcall btnExitClick(TObject *Sender);
        void __fastcall btnStartClick(TObject *Sender);
private:	// User declarations
public:
        __fastcall TFereastraStart(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFereastraStart *FereastraStart;
//---------------------------------------------------------------------------
#endif
