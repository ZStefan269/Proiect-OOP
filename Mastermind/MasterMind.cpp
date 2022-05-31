//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("MainStart.cpp", FereastraStart);
USEFORM("MainJoc.cpp", FereastraJoc);
USEFORM("MainRezultat.cpp", Rezultat);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TFereastraStart), &FereastraStart);
                 Application->CreateForm(__classid(TFereastraJoc), &FereastraJoc);
                 Application->CreateForm(__classid(TRezultat), &Rezultat);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
