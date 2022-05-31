#include <Grids.hpp>
#include <ExtCtrls.hpp>
#ifndef cercH
#define cercH
//---------------------------------------------------------------------------
class cerc
{
private:
public:
        int culoare;
        TShape* shape;
        cerc(TPanel* Owner, int i,int  j,int  height,int width);
        void ColoreazaAlb();
};
#endif

