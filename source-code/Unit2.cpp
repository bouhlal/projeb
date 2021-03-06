//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit17.h"
#include "Unit18.h"
#include "Unit19.h"
#include "Unit20.h"
#include "Unit21.h"
#include "Unit22.h"
#include "Unit24.h"
#include "Unit29.h"
#include "Unit32.h"
#include "Unit33.h"
#include "Unit34.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBirey *Birey;
AnsiString Current3File;
//---------------------------------------------------------------------------
__fastcall TBirey::TBirey(TComponent* Owner)
        : TForm(Owner)
{
Image1->Picture->LoadFromFile("Birey.bmp");
}
//---------------------------------------------------------------------------


void __fastcall TBirey::ToolButton1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::FormClose(TObject *Sender, TCloseAction &Action)
{
Action=caFree;        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Image1Click(TObject *Sender)
{
  if (OpenPictureDialog1->Execute()){
    Current3File = OpenPictureDialog1->FileName;
    Image1->Picture->LoadFromFile(Current3File);
  }
}
//---------------------------------------------------------------------------

void __fastcall TBirey::ToolButton4Click(TObject *Sender)
{
  if (SavePictureDialog1->Execute()){
    Current3File = SavePictureDialog1->FileName;
    Kaydet1Click(Sender);
  }
}
//---------------------------------------------------------------------------

void __fastcall TBirey::ToolButton3Click(TObject *Sender)
{
  if (OpenPictureDialog1->Execute()){
    Current3File = OpenPictureDialog1->FileName;
    Image1->Picture->LoadFromFile(Current3File);
  }
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Kaydet1Click(TObject *Sender)
{
  if (Current3File != EmptyStr){
    Image1->Picture->SaveToFile(Current3File);
  }
  else{
   FarklKaydet1Click(Sender);
  }        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::FarklKaydet1Click(TObject *Sender)
{
  if (SavePictureDialog1->Execute()){
    Current3File = SavePictureDialog1->FileName;
    Kaydet1Click(Sender);
  }
}
//---------------------------------------------------------------------------




void __fastcall TBirey::BitBtn1Click(TObject *Sender)
{
Application->CreateForm(__classid(TPersonel), &Personel);
Personel->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::BitBtn2Click(TObject *Sender)
{
Application->CreateForm(__classid(TPkayit), &Pkayit);
Pkayit->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::BitBtn4Click(TObject *Sender)
{
Application->CreateForm(__classid(TKaynak), &Kaynak);
Kaynak->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::BitBtn5Click(TObject *Sender)
{
Application->CreateForm(__classid(TKkayit), &Kkayit);
Kkayit->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::BitBtn6Click(TObject *Sender)
{
Application->CreateForm(__classid(TSatis), &Satis);
Satis->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::BitBtn7Click(TObject *Sender)
{
Application->CreateForm(__classid(TSkayit), &Skayit);
Skayit->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Birey1Click(TObject *Sender)
{
Birey = new TBirey(this);        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::LogoBelirle1Click(TObject *Sender)
{
  if (OpenPictureDialog1->Execute()){
    Current3File = OpenPictureDialog1->FileName;
    Image1->Picture->LoadFromFile(Current3File);
  }        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::MetrajCetveli1Click(TObject *Sender)
{
Hakkedis = new THakkedis(this);
}
//---------------------------------------------------------------------------

void __fastcall TBirey::izimEditr1Click(TObject *Sender)
{
Cizim = new TCizim(this);
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Betonarme1Click(TObject *Sender)
{
Betonarme = new TBetonarme(this);
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Karayolu1Click(TObject *Sender)
{
Karayolu = new TKarayolu(this);
}
//---------------------------------------------------------------------------
void __fastcall TBirey::Hidroloji1Click(TObject *Sender)
{
Hidroloji = new THidroloji(this);
}
//---------------------------------------------------------------------------

void __fastcall TBirey::OfficeExpress1Click(TObject *Sender)
{
Application->CreateForm(__classid(TOffice), &Office);
Office->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Xlime1Click(TObject *Sender)
{
Application->CreateForm(__classid(TXlime), &Xlime);
Xlime->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Paint1Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm10), &Form10);
Form10->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Programdank1Click(TObject *Sender)
{
int Kapat;
Kapat = Application->MessageBoxA("Program kapat�ls�n m�?", "Uyar�!", 3);
if (Kapat==6)
      Application->Terminate();
else
      Action = caNone;        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Klt1Click(TObject *Sender)
{
Application->Minimize();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::PersonelKaytKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TPersonel), &Personel);
Personel->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::KaynakKaytKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TKaynak), &Kaynak);
Kaynak->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::MteriKaytGirii1Click(TObject *Sender)
{
Application->CreateForm(__classid(TSatis), &Satis);
Satis->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::PersonelTantmKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TPkayit), &Pkayit);
Pkayit->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::KaynakKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TKkayit), &Kkayit);
Kkayit->ShowModal();   
}
//---------------------------------------------------------------------------

void __fastcall TBirey::KaytlMteri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TSkayit), &Skayit);
Skayit->ShowModal(); 
}
//---------------------------------------------------------------------------

void __fastcall TBirey::KaytlMetrajBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TMetrajoku), &Metrajoku);
Metrajoku->ShowModal();         
}
//---------------------------------------------------------------------------

void __fastcall TBirey::KaytlBetonarmeBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBetonoku), &Betonoku);
Betonoku->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::ConvertB1Click(TObject *Sender)
{
int Cal;
Cal = WinExec("Convertb.exe", 9);
if (Cal==2)
ShowMessage("Program dosyas� bulunamad�.");
if (Cal==3)
ShowMessage("S�r�c� veya klas�r ad� ge�ersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::ListB1Click(TObject *Sender)
{
int kal;
kal = WinExec("Listb.exe", 9);
if (kal==2)
ShowMessage("Program dosyas� bulunamad�.");
if (kal==3)
ShowMessage("S�r�c� veya klas�r ad� ge�ersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Yanyana1Click(TObject *Sender)
{
Form1->Yanyana1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Altalta1Click(TObject *Sender)
{
Form1->Altalta1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Grupla1Click(TObject *Sender)
{
Form1->Grupla1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TBirey::KullanmKlavuzu1Click(TObject *Sender)
{
int Mal;
Mal = WinExec("Help\\klvz.exe", 9);
if (Mal==2)
ShowMessage("Program dosyas� bulunamad�.");
if (Mal==3)
ShowMessage("S�r�c� veya klas�r ad� ge�ersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::TG1Click(TObject *Sender)
{
Application->CreateForm(__classid(TTGinfo), &TGinfo);
TGinfo->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::ProjeBHakknda1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBilgi), &Bilgi);
Bilgi->ShowModal();             
}
//---------------------------------------------------------------------------

void __fastcall TBirey::SrmBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TProduct), &Product);
Product->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBirey::Kapat1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TBirey::YazcAyarlar1Click(TObject *Sender)
{
PrinterSetupDialog1->Execute();        
}
//---------------------------------------------------------------------------

