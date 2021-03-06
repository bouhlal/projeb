//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
enum TDrawingTool {dtLine, dtRectangle, dtEllipse, dtRoundRect};
class TCizim : public TForm
{
__published:	// IDE-managed Components
        TImageList *ImageList1;
        TColorDialog *ColorDialog1;
        TImage *Image;
        TMainMenu *MainMenu1;
        TMenuItem *Dosya1;
        TMenuItem *YeniProje1;
        TMenuItem *ResimBelgesiA1;
        TMenuItem *N1;
        TMenuItem *Kaydet1;
        TMenuItem *FarklKaydet1;
        TMenuItem *N2;
        TMenuItem *Yazdr1;
        TMenuItem *YazcAyarlar1;
        TMenuItem *N3;
        TMenuItem *OfficeExpress1;
        TMenuItem *Xlime1;
        TMenuItem *Paint1;
        TMenuItem *N4;
        TMenuItem *Programdank1;
        TMenuItem *Birey1;
        TMenuItem *HakediRaporu1;
        TMenuItem *izimEditr1;
        TMenuItem *Betonarme1;
        TMenuItem *Karayolu1;
        TMenuItem *Hidroloji1;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TPrintDialog *PrintDialog1;
        TPrinterSetupDialog *PrinterSetupDialog1;
        TMenuItem *Dzenle1;
        TMenuItem *Kes1;
        TMenuItem *Kopyala1;
        TMenuItem *Yaptr1;
        TCoolBar *CoolBar1;
        TToolBar *ToolBar1;
        TToolButton *ToolButton1;
        TToolBar *ToolBar2;
        TToolButton *ToolButton4;
        TToolButton *ToolButton5;
        TToolButton *ToolButton6;
        TToolButton *ToolButton7;
        TToolButton *ToolButton8;
        TToolButton *ToolButton9;
        TToolButton *ToolButton10;
        TToolButton *ToolButton11;
        TToolButton *ToolButton12;
        TToolButton *ToolButton13;
        TToolButton *ToolButton14;
        TToolButton *ToolButton15;
        TToolButton *ToolButton16;
        TToolButton *ToolButton17;
        TToolButton *ToolButton18;
        TToolButton *ToolButton19;
        TToolButton *ToolButton20;
        TToolButton *ToolButton21;
        TToolButton *ToolButton22;
        TToolButton *ToolButton23;
        TToolButton *ToolButton24;
        TToolButton *ToolButton25;
        TToolButton *ToolButton26;
        TToolButton *ToolButton27;
        TToolButton *ToolButton28;
        TToolButton *ToolButton29;
        TToolButton *ToolButton30;
        TToolButton *ToolButton31;
        TToolButton *ToolButton32;
        TToolButton *ToolButton33;
        TEdit *PenSizeChange;
        TUpDown *PenWidth;
        TImageList *ImageList2;
        TToolButton *ToolButton2;
        TToolButton *ToolButton3;
        TToolButton *ToolButton34;
        TToolButton *ToolButton35;
        TToolButton *ToolButton36;
        TToolButton *ToolButton37;
        TToolButton *ToolButton38;
        TToolButton *ToolButton39;
        TToolButton *ToolButton40;
        TToolButton *ToolButton41;
        TMenuItem *N5;
        TMenuItem *Kapat1;
        TMenuItem *Grnm1;
        TMenuItem *Klt1;
        TMenuItem *Veriler1;
        TMenuItem *PersonelTantmKart1;
        TMenuItem *KaynakKart1;
        TMenuItem *KaytlMteri1;
        TMenuItem *N6;
        TMenuItem *KaytlMetrajBilgileri1;
        TMenuItem *N7;
        TMenuItem *KaytlBetonarmeBilgileri1;
        TMenuItem *Aralar1;
        TMenuItem *ConvertB1;
        TMenuItem *ListB1;
        TMenuItem *Ynetim1;
        TMenuItem *YenialmaAlan1;
        TMenuItem *Yardm1;
        TMenuItem *KullanmaKlavuzu1;
        TMenuItem *TG1;
        TMenuItem *ProjeBHakknda1;
        TMenuItem *SrmBilgileri1;
        TMenuItem *Pencere1;
        TMenuItem *Yanyana1;
        TMenuItem *Altalta1;
        TMenuItem *Grupla1;
        TMenuItem *izgi1;
        TMenuItem *Dikdrtgen1;
        TMenuItem *Elips1;
        TMenuItem *Pasta1;
        void __fastcall ImageMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall ImageMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall ImageMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall izimEditr1Click(TObject *Sender);
        void __fastcall ResimBelgesiA1Click(TObject *Sender);
        void __fastcall Kapat1Click(TObject *Sender);
        void __fastcall Kaydet1Click(TObject *Sender);
        void __fastcall FarklKaydet1Click(TObject *Sender);
        void __fastcall Yazdr1Click(TObject *Sender);
        void __fastcall YazcAyarlar1Click(TObject *Sender);
        void __fastcall OfficeExpress1Click(TObject *Sender);
        void __fastcall Xlime1Click(TObject *Sender);
        void __fastcall Paint1Click(TObject *Sender);
        void __fastcall Kes1Click(TObject *Sender);
        void __fastcall Kopyala1Click(TObject *Sender);
        void __fastcall Yaptr1Click(TObject *Sender);
        void __fastcall ToolButton1Click(TObject *Sender);
        void __fastcall ToolButton3Click(TObject *Sender);
        void __fastcall ToolButton34Click(TObject *Sender);
        void __fastcall ToolButton36Click(TObject *Sender);
        void __fastcall ToolButton38Click(TObject *Sender);
        void __fastcall ToolButton39Click(TObject *Sender);
        void __fastcall ToolButton40Click(TObject *Sender);
        void __fastcall PenSizeChangeChange(TObject *Sender);
        void __fastcall ToolButton4Click(TObject *Sender);
        void __fastcall ToolButton6Click(TObject *Sender);
        void __fastcall ToolButton7Click(TObject *Sender);
        void __fastcall ToolButton8Click(TObject *Sender);
        void __fastcall ToolButton9Click(TObject *Sender);
        void __fastcall ToolButton11Click(TObject *Sender);
        void __fastcall ToolButton12Click(TObject *Sender);
        void __fastcall ToolButton13Click(TObject *Sender);
        void __fastcall ToolButton14Click(TObject *Sender);
        void __fastcall ToolButton15Click(TObject *Sender);
        void __fastcall ToolButton16Click(TObject *Sender);
        void __fastcall ToolButton17Click(TObject *Sender);
        void __fastcall ToolButton19Click(TObject *Sender);
        void __fastcall ToolButton20Click(TObject *Sender);
        void __fastcall ToolButton21Click(TObject *Sender);
        void __fastcall ToolButton22Click(TObject *Sender);
        void __fastcall ToolButton23Click(TObject *Sender);
        void __fastcall ToolButton24Click(TObject *Sender);
        void __fastcall ToolButton25Click(TObject *Sender);
        void __fastcall ToolButton26Click(TObject *Sender);
        void __fastcall ToolButton27Click(TObject *Sender);
        void __fastcall ToolButton29Click(TObject *Sender);
        void __fastcall ToolButton30Click(TObject *Sender);
        void __fastcall ToolButton31Click(TObject *Sender);
        void __fastcall ToolButton32Click(TObject *Sender);
        void __fastcall Birey1Click(TObject *Sender);
        void __fastcall HakediRaporu1Click(TObject *Sender);
        void __fastcall Karayolu1Click(TObject *Sender);
        void __fastcall Betonarme1Click(TObject *Sender);
        void __fastcall Hidroloji1Click(TObject *Sender);
        void __fastcall Programdank1Click(TObject *Sender);
        void __fastcall Klt1Click(TObject *Sender);
        void __fastcall PersonelTantmKart1Click(TObject *Sender);
        void __fastcall KaynakKart1Click(TObject *Sender);
        void __fastcall KaytlMteri1Click(TObject *Sender);
        void __fastcall KaytlMetrajBilgileri1Click(TObject *Sender);
        void __fastcall KaytlBetonarmeBilgileri1Click(TObject *Sender);
        void __fastcall ConvertB1Click(TObject *Sender);
        void __fastcall ListB1Click(TObject *Sender);
        void __fastcall YenialmaAlan1Click(TObject *Sender);
        void __fastcall Yanyana1Click(TObject *Sender);
        void __fastcall Altalta1Click(TObject *Sender);
        void __fastcall Grupla1Click(TObject *Sender);
        void __fastcall izgi1Click(TObject *Sender);
        void __fastcall Dikdrtgen1Click(TObject *Sender);
        void __fastcall Elips1Click(TObject *Sender);
        void __fastcall Pasta1Click(TObject *Sender);
        void __fastcall KullanmaKlavuzu1Click(TObject *Sender);
        void __fastcall TG1Click(TObject *Sender);
        void __fastcall ProjeBHakknda1Click(TObject *Sender);
        void __fastcall SrmBilgileri1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
     bool Drawing;
        TPoint Origin, MovePt;
        TDrawingTool DrawingTool;
        AnsiString CurrentFile;

        void __fastcall DrawShape(TPoint TopLeft, TPoint BottomRight, TPenMode AMode);
        virtual __fastcall TCizim(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCizim *Cizim;
//---------------------------------------------------------------------------
#endif
