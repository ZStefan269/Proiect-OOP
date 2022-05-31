//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#ifndef MainRezultatH
#define MainRezultatH
#include"MainJoc.h"
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TRezultat : public TForm
{
__published:	// IDE-managed Components
        TLabel *btnText;
        TButton *btnExit2;
        TButton *btnMaiIncearca;
        void __fastcall btnExit2Click(TObject *Sender);
        void __fastcall btnMaiIncearcaClick(TObject *Sender);
private:	// User declarations
public:
        __fastcall TRezultat(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRezultat *Rezultat;
//---------------------------------------------------------------------------
#endif
