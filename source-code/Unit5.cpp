//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit18.h"
#include "Unit20.h"
#include "Unit22.h"
#include "Unit24.h"
#include "Unit29.h"
#include "Unit32.h"
#include "Unit33.h"
#include "Unit34.h"
#include "stdio.h"
#include "string.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBetonarme *Betonarme;
struct Yapibm
{
char Don1[100];
char Mes1[10];
char Alan1[10];
char Geril1[10];
char Gerill1[10];
char Gerilll1[10];
char Kuvvet1[10];
char MomKol1[10];
char Mom1[10];
char Don2[100];
char Mes2[10];
char Alan2[10];
char Geril2[10];
char Gerill2[10];
char Gerilll2[10];
char Kuvvet2[10];
char MomKol2[10];
char Mom2[10];
char Don3[100];
char Mes3[10];
char Alan3[10];
char Geril3[10];
char Gerill3[10];
char Gerilll3[10];
char Kuvvet3[10];
char MomKol3[10];
char Mom3[10];
char Don4[100];
char Mes4[10];
char Alan4[10];
char Geril4[10];
char Gerill4[10];
char Gerilll4[10];
char Kuvvet4[10];
char MomKol4[10];
char Mom4[10];
char Don5[100];
char Mes5[10];
char Alan5[10];
char Geril5[10];
char Gerill5[10];
char Gerilll5[10];
char Kuvvet5[10];
char MomKol5[10];
char Mom5[10];
char Don6[100];
char Mes6[10];
char Alan6[10];
char Geril6[10];
char Gerill6[10];
char Gerilll6[10];
char Kuvvet6[10];
char MomKol6[10];
char Mom6[10];
char Don7[100];
char Mes7[10];
char Alan7[10];
char Geril7[10];
char Gerill7[10];
char Gerilll7[10];
char Kuvvet7[10];
char MomKol7[10];
char Mom7[10];
char Don8[100];
char Mes8[10];
char Alan8[10];
char Geril8[10];
char Gerill8[10];
char Gerilll8[10];
char Kuvvet8[10];
char MomKol8[10];
char Mom8[10];
char Don9[100];
char Mes9[10];
char Alan9[10];
char Geril9[10];
char Gerill9[10];
char Gerilll9[10];
char Kuvvet9[10];
char MomKol9[10];
char Mom9[10];
char Don10[100];
char Mes10[10];
char Alan10[10];
char Geril10[10];
char Gerill10[10];
char Gerilll10[10];
char Kuvvet10[10];
char MomKol10[10];
char Mom10[10];
char Don11[100];
char Mes11[10];
char Alan11[10];
char Geril11[10];
char Gerill11[10];
char Gerilll11[10];
char Kuvvet11[10];
char MomKol11[10];
char Mom11[10];
char Don12[100];
char Mes12[10];
char Alan12[10];
char Geril12[10];
char Gerill12[10];
char Gerilll12[10];
char Kuvvet12[10];
char MomKol12[10];
char Mom12[10];
char Don13[100];
char Mes13[10];
char Alan13[10];
char Geril13[10];
char Gerill13[10];
char Gerilll13[10];
char Kuvvet13[10];
char MomKol13[10];
char Mom13[10];
char Don14[100];
char Mes14[10];
char Alan14[10];
char Geril14[10];
char Gerill14[10];
char Gerilll14[10];
char Kuvvet14[10];
char MomKol14[10];
char Mom14[10];
char Don15[100];
char Mes15[10];
char Alan15[10];
char Geril15[10];
char Gerill15[10];
char Gerilll15[10];
char Kuvvet15[10];
char MomKol15[10];
char Mom15[10];
char Don16[100];
char Mes16[10];
char Alan16[10];
char Geril16[10];
char Gerill16[10];
char Gerilll16[10];
char Kuvvet16[10];
char MomKol16[10];
char Mom16[10];
char Don17[100];
char Mes17[10];
char Alan17[10];
char Geril17[10];
char Gerill17[10];
char Gerilll17[10];
char Kuvvet17[10];
char MomKol17[10];
char Mom17[10];
char Don18[100];
char Mes18[10];
char Alan18[10];
char Geril18[10];
char Gerill18[10];
char Gerilll18[10];
char Kuvvet18[10];
char MomKol18[10];
char Mom18[10];
char Don19[100];
char Mes19[10];
char Alan19[10];
char Geril19[10];
char Gerill19[10];
char Gerilll19[10];
char Kuvvet19[10];
char MomKol19[10];
char Mom19[10];
char Don20[100];
char Mes20[10];
char Alan20[10];
char Geril20[10];
char Gerill20[10];
char Gerilll20[10];
char Kuvvet20[10];
char MomKol20[10];
char Mom20[10];
char Don21[100];
char Mes21[10];
char Alan21[10];
char Geril21[10];
char Gerill21[10];
char Gerilll21[10];
char Kuvvet21[10];
char MomKol21[10];
char Mom21[10];
char Don22[100];
char Mes22[10];
char Alan22[10];
char Geril22[10];
char Gerill22[10];
char Gerilll22[10];
char Kuvvet22[10];
char MomKol22[10];
char Mom22[10];
char Don23[100];
char Mes23[10];
char Alan23[10];
char Geril23[10];
char Gerill23[10];
char Gerilll23[10];
char Kuvvet23[10];
char MomKol23[10];
char Mom23[10];
char Don24[100];
char Mes24[10];
char Alan24[10];
char Geril24[10];
char Gerill24[10];
char Gerilll24[10];
char Kuvvet24[10];
char MomKol24[10];
char Mom24[10];
char Don25[100];
char Mes25[10];
char Alan25[10];
char Geril25[10];
char Gerill25[10];
char Gerilll25[10];
char Kuvvet25[10];
char MomKol25[10];
char Mom25[10];
char Don26[100];
char Mes26[10];
char Alan26[10];
char Geril26[10];
char Gerill26[10];
char Gerilll26[10];
char Kuvvet26[10];
char MomKol26[10];
char Mom26[10];
char Don27[100];
char Mes27[10];
char Alan27[10];
char Geril27[10];
char Gerill27[10];
char Gerilll27[10];
char Kuvvet27[10];
char MomKol27[10];
char Mom27[10];
char Don28[100];
char Mes28[10];
char Alan28[10];
char Geril28[10];
char Gerill28[10];
char Gerilll28[10];
char Kuvvet28[10];
char MomKol28[10];
char Mom28[10];
char Nd[10];
char Md[10];
char bw[10];
char fcd[10];
char fyd[10];
char Fc[10];
char TopFsi[10];
char TopFx[10];
char Mr[10];
char C[10];
char SayfaNo[10];

};
struct Yapibm Adres_kaydibm;
FILE *Dosyabm;
//---------------------------------------------------------------------------
__fastcall TBetonarme::TBetonarme(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBetonarme::ToolButton1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TBetonarme::FormClose(TObject *Sender,
      TCloseAction &Action)
{
Action=caFree;
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::FormCreate(TObject *Sender)
{
char C;
int Satir, Sutun;
C = 'A';
Satir = 1;
for (Sutun = 1; StringGrid1->ColCount> Sutun; Sutun ++)
{
    StringGrid1->Cells[Sutun] [0] = C ;
    C = C + 1;
    }
    for (Satir =1; StringGrid1->RowCount> Satir; Satir ++)
    StringGrid1->Cells[0] [Satir] = IntToStr(Satir) ;
    StringGrid1->Cells[1][1]= "Donat�";
    StringGrid1->Cells[2][1]= "Mesafe";
    StringGrid1->Cells[3][1]= "Alan";
    StringGrid1->Cells[4][1]= "Gerilme";
    StringGrid1->Cells[5][1]= "Gerilme";
    StringGrid1->Cells[6][1]= "Gerilme";
    StringGrid1->Cells[7][1]= "Kuvvet";
    StringGrid1->Cells[8][1]= "Mom. Kol.";
    StringGrid1->Cells[9][1]= "Mom.";
    StringGrid1->Cells[10][1]= "Kullan�lan";
 StringGrid1->Cells[1][2] = "No";
 StringGrid1->Cells[2][2] = "di (cm)";
 StringGrid1->Cells[3][2] = "Asi (cm2)";
 StringGrid1->Cells[4][2] = "Sgi (t/cm2)";
  StringGrid1->Cells[5][2] = "��aret";
   StringGrid1->Cells[6][2] = "Sgi (t/cm2)";
    StringGrid1->Cells[7][2] = "Fsi (ton)";
     StringGrid1->Cells[8][2] = "Zi (cm)";
      StringGrid1->Cells[9][2] = "Fsi.Zi";
      StringGrid1->Cells[10][2]= "Sekt�r";
        StringGrid1->Cells[1][3] = "1";
 StringGrid1->Cells[2][3] = "3,2";
 StringGrid1->Cells[3][3] = "6,16";
 StringGrid1->Cells[4][3] = "0";
  StringGrid1->Cells[5][3] = "1";
   StringGrid1->Cells[6][3] = "0";
    StringGrid1->Cells[7][3] = "0";
     StringGrid1->Cells[8][3] = "0";
      StringGrid1->Cells[9][3] = "0";
      StringGrid1->Cells[10][3]= "1";
       StringGrid1->Cells[1][4] = "2";
 StringGrid1->Cells[2][4] = "21,9";
 StringGrid1->Cells[3][4] = "3,08";
 StringGrid1->Cells[4][4] = "0";
  StringGrid1->Cells[5][4] = "1";
   StringGrid1->Cells[6][4] = "0";
    StringGrid1->Cells[7][4] = "0";
     StringGrid1->Cells[8][4] = "0";
      StringGrid1->Cells[9][4] = "0";
      StringGrid1->Cells[10][4]= "1";
       StringGrid1->Cells[1][5] = "3";
 StringGrid1->Cells[2][5] = "40,6";
 StringGrid1->Cells[3][5] = "3,08";
 StringGrid1->Cells[4][5] = "0";
  StringGrid1->Cells[5][5] = "1";
   StringGrid1->Cells[6][5] = "0";
    StringGrid1->Cells[7][5] = "0";
     StringGrid1->Cells[8][5] = "0";
      StringGrid1->Cells[9][5] = "0";
      StringGrid1->Cells[10][5]= "1";
       StringGrid1->Cells[1][6] = "4";
 StringGrid1->Cells[2][6] = "59,4";
 StringGrid1->Cells[3][6] = "3,08";
 StringGrid1->Cells[4][6] = "0";
  StringGrid1->Cells[5][6] = "1";
   StringGrid1->Cells[6][6] = "0";
    StringGrid1->Cells[7][6] = "0";
     StringGrid1->Cells[8][6] = "0";
      StringGrid1->Cells[9][6] = "0";
      StringGrid1->Cells[10][6]= "1";
       StringGrid1->Cells[1][7] = "5";
 StringGrid1->Cells[2][7] = "78,1";
 StringGrid1->Cells[3][7] = "1,57";
 StringGrid1->Cells[4][7] = "0";
  StringGrid1->Cells[5][7] = "1";
   StringGrid1->Cells[6][7] = "0";
    StringGrid1->Cells[7][7] = "0";
     StringGrid1->Cells[8][7] = "0";
      StringGrid1->Cells[9][7] = "0";
      StringGrid1->Cells[10][7]= "1";
       StringGrid1->Cells[1][8] = "6";
 StringGrid1->Cells[2][8] = "96,8";
 StringGrid1->Cells[3][8] = "1,57";
 StringGrid1->Cells[4][8] = "0";
  StringGrid1->Cells[5][8] = "1";
   StringGrid1->Cells[6][8] = "0";
    StringGrid1->Cells[7][8] = "0";
     StringGrid1->Cells[8][8] = "0";
      StringGrid1->Cells[9][8] = "0";
      StringGrid1->Cells[10][8]= "1";
       StringGrid1->Cells[1][9] = "7";
 StringGrid1->Cells[2][9] = "106,1";
 StringGrid1->Cells[3][9] = "1,57";
 StringGrid1->Cells[4][9] = "0";
  StringGrid1->Cells[5][9] = "-1";
   StringGrid1->Cells[6][9] = "0";
    StringGrid1->Cells[7][9] = "0";
     StringGrid1->Cells[8][9] = "0";
      StringGrid1->Cells[9][9] = "0";
      StringGrid1->Cells[10][9]= "1";
       StringGrid1->Cells[1][10] = "8";
 StringGrid1->Cells[2][10] = "129,1";
 StringGrid1->Cells[3][10] = "1,57";
 StringGrid1->Cells[4][10] = "0";
  StringGrid1->Cells[5][10] = "-1";
   StringGrid1->Cells[6][10] = "0";
    StringGrid1->Cells[7][10] = "0";
     StringGrid1->Cells[8][10] = "0";
      StringGrid1->Cells[9][10] = "0";
      StringGrid1->Cells[10][10]= "1";
       StringGrid1->Cells[1][11] = "9";
 StringGrid1->Cells[2][11] = "152,1";
 StringGrid1->Cells[3][11] = "1,57";
 StringGrid1->Cells[4][11] = "0";
  StringGrid1->Cells[5][11] = "-1";
   StringGrid1->Cells[6][11] = "0";
    StringGrid1->Cells[7][11] = "0";
     StringGrid1->Cells[8][11] = "0";
      StringGrid1->Cells[9][11] = "0";
      StringGrid1->Cells[10][11]= "1";
       StringGrid1->Cells[1][12] = "10";
 StringGrid1->Cells[2][12] = "175,1";
 StringGrid1->Cells[3][12] = "1,57";
 StringGrid1->Cells[4][12] = "0";
  StringGrid1->Cells[5][12] = "-1";
   StringGrid1->Cells[6][12] = "0";
    StringGrid1->Cells[7][12] = "0";
     StringGrid1->Cells[8][12] = "0";
      StringGrid1->Cells[9][12] = "0";
      StringGrid1->Cells[10][12]= "1";
       StringGrid1->Cells[1][13] = "11";
 StringGrid1->Cells[2][13] = "198,1";
 StringGrid1->Cells[3][13] = "1,57";
 StringGrid1->Cells[4][13] = "0";
  StringGrid1->Cells[5][13] = "-1";
   StringGrid1->Cells[6][13] = "0";
    StringGrid1->Cells[7][13] = "0";
     StringGrid1->Cells[8][13] = "0";
      StringGrid1->Cells[9][13] = "0";
      StringGrid1->Cells[10][13]= "1";
       StringGrid1->Cells[1][14] = "12";
 StringGrid1->Cells[2][14] = "221,1";
 StringGrid1->Cells[3][14] = "1,57";
 StringGrid1->Cells[4][14] = "0";
  StringGrid1->Cells[5][14] = "-1";
   StringGrid1->Cells[6][14] = "0";
    StringGrid1->Cells[7][14] = "0";
     StringGrid1->Cells[8][14] = "0";
      StringGrid1->Cells[9][14] = "0";
      StringGrid1->Cells[10][14]= "1";
       StringGrid1->Cells[1][15] = "13";
 StringGrid1->Cells[2][15] = "244,1";
 StringGrid1->Cells[3][15] = "1,57";
 StringGrid1->Cells[4][15] = "0";
  StringGrid1->Cells[5][15] = "-1";
   StringGrid1->Cells[6][15] = "0";
    StringGrid1->Cells[7][15] = "0";
     StringGrid1->Cells[8][15] = "0";
      StringGrid1->Cells[9][15] = "0";
      StringGrid1->Cells[10][15]= "1";
       StringGrid1->Cells[1][16] = "14";
 StringGrid1->Cells[2][16] = "267,1";
 StringGrid1->Cells[3][16] = "1,57";
 StringGrid1->Cells[4][16] = "0";
  StringGrid1->Cells[5][16] = "-1";
   StringGrid1->Cells[6][16] = "0";
    StringGrid1->Cells[7][16] = "0";
     StringGrid1->Cells[8][16] = "0";
      StringGrid1->Cells[9][16] = "0";
      StringGrid1->Cells[10][16]= "1";
       StringGrid1->Cells[1][17] = "15";
 StringGrid1->Cells[2][17] = "290,1";
 StringGrid1->Cells[3][17] = "1,57";
 StringGrid1->Cells[4][17] = "0";
  StringGrid1->Cells[5][17] = "-1";
   StringGrid1->Cells[6][17] = "0";
    StringGrid1->Cells[7][17] = "0";
     StringGrid1->Cells[8][17] = "0";
      StringGrid1->Cells[9][17] = "0";
      StringGrid1->Cells[10][17]= "1";
       StringGrid1->Cells[1][18] = "16";
 StringGrid1->Cells[2][18] = "313,1";
 StringGrid1->Cells[3][18] = "1,57";
 StringGrid1->Cells[4][18] = "0";
  StringGrid1->Cells[5][18] = "-1";
   StringGrid1->Cells[6][18] = "0";
    StringGrid1->Cells[7][18] = "0";
     StringGrid1->Cells[8][18] = "0";
      StringGrid1->Cells[9][18] = "0";
      StringGrid1->Cells[10][18]= "1";
       StringGrid1->Cells[1][19] = "17";
 StringGrid1->Cells[2][19] = "336,1";
 StringGrid1->Cells[3][19] = "1,57";
 StringGrid1->Cells[4][19] = "0";
  StringGrid1->Cells[5][19] = "-1";
   StringGrid1->Cells[6][19] = "0";
    StringGrid1->Cells[7][19] = "0";
     StringGrid1->Cells[8][19] = "0";
      StringGrid1->Cells[9][19] = "0";
      StringGrid1->Cells[10][19]= "1";
       StringGrid1->Cells[1][20] = "18";
 StringGrid1->Cells[2][20] = "359,1";
 StringGrid1->Cells[3][20] = "1,57";
 StringGrid1->Cells[4][20] = "0";
  StringGrid1->Cells[5][20] = "-1";
   StringGrid1->Cells[6][20] = "0";
    StringGrid1->Cells[7][20] = "0";
     StringGrid1->Cells[8][20] = "0";
      StringGrid1->Cells[9][20] = "0";
      StringGrid1->Cells[10][20]= "1";
       StringGrid1->Cells[1][21] = "19";
 StringGrid1->Cells[2][21] = "382,1";
 StringGrid1->Cells[3][21] = "1,57";
 StringGrid1->Cells[4][21] = "0";
  StringGrid1->Cells[5][21] = "-1";
   StringGrid1->Cells[6][21] = "0";
    StringGrid1->Cells[7][21] = "0";
     StringGrid1->Cells[8][21] = "0";
      StringGrid1->Cells[9][21] = "0";
      StringGrid1->Cells[10][21]= "1";
       StringGrid1->Cells[1][22] = "20";
 StringGrid1->Cells[2][22] = "393,2";
 StringGrid1->Cells[3][22] = "1,57";
 StringGrid1->Cells[4][22] = "0";
  StringGrid1->Cells[5][22] = "-1";
   StringGrid1->Cells[6][22] = "0";
    StringGrid1->Cells[7][22] = "0";
     StringGrid1->Cells[8][22] = "0";
      StringGrid1->Cells[9][22] = "0";
      StringGrid1->Cells[10][22]= "1";
       StringGrid1->Cells[1][23] = "21";
 StringGrid1->Cells[2][23] = "411,9";
 StringGrid1->Cells[3][23] = "1,57";
 StringGrid1->Cells[4][23] = "0";
  StringGrid1->Cells[5][23] = "-1";
   StringGrid1->Cells[6][23] = "0";
    StringGrid1->Cells[7][23] = "0";
     StringGrid1->Cells[8][23] = "0";
      StringGrid1->Cells[9][23] = "0";
      StringGrid1->Cells[10][23]= "1";
       StringGrid1->Cells[1][24] = "22";
 StringGrid1->Cells[2][24] = "430,6";
 StringGrid1->Cells[3][24] = "3,08";
 StringGrid1->Cells[4][24] = "0";
  StringGrid1->Cells[5][24] = "-1";
   StringGrid1->Cells[6][24] = "0";
    StringGrid1->Cells[7][24] = "0";
     StringGrid1->Cells[8][24] = "0";
      StringGrid1->Cells[9][24] = "0";
      StringGrid1->Cells[10][24]= "1";
       StringGrid1->Cells[1][25] = "23";
 StringGrid1->Cells[2][25] = "449,4";
 StringGrid1->Cells[3][25] = "3,08";
 StringGrid1->Cells[4][25] = "0";
  StringGrid1->Cells[5][25] = "-1";
   StringGrid1->Cells[6][25] = "0";
    StringGrid1->Cells[7][25] = "0";
     StringGrid1->Cells[8][25] = "0";
      StringGrid1->Cells[9][25] = "0";
      StringGrid1->Cells[10][25]= "1";
       StringGrid1->Cells[1][26] = "24";
 StringGrid1->Cells[2][26] = "468,1";
 StringGrid1->Cells[3][26] = "3,08";
 StringGrid1->Cells[4][26] = "0";
  StringGrid1->Cells[5][26] = "-1";
   StringGrid1->Cells[6][26] = "0";
    StringGrid1->Cells[7][26] = "0";
     StringGrid1->Cells[8][26] = "0";
      StringGrid1->Cells[9][26] = "0";
      StringGrid1->Cells[10][26]= "1";
       StringGrid1->Cells[1][27] = "25";
 StringGrid1->Cells[2][27] = "486,8";
 StringGrid1->Cells[3][27] = "6,16";
 StringGrid1->Cells[4][27] = "0";
  StringGrid1->Cells[5][27] = "-1";
   StringGrid1->Cells[6][27] = "0";
    StringGrid1->Cells[7][27] = "0";
     StringGrid1->Cells[8][27] = "0";
      StringGrid1->Cells[9][27] = "0";
      StringGrid1->Cells[10][27]= "1";
       StringGrid1->Cells[1][28] = "26";
 StringGrid1->Cells[2][28] = "0";
 StringGrid1->Cells[3][28] = "0";
 StringGrid1->Cells[4][28] = "0";
  StringGrid1->Cells[5][28] = "0";
   StringGrid1->Cells[6][28] = "0";
    StringGrid1->Cells[7][28] = "0";
     StringGrid1->Cells[8][28] = "0";
      StringGrid1->Cells[9][28] = "0";
      StringGrid1->Cells[10][28]= "0";
       StringGrid1->Cells[1][29] = "27";
 StringGrid1->Cells[2][29] = "0";
 StringGrid1->Cells[3][29] = "0";
 StringGrid1->Cells[4][29] = "0";
  StringGrid1->Cells[5][29] = "0";
   StringGrid1->Cells[6][29] = "0";
    StringGrid1->Cells[7][29] = "0";
     StringGrid1->Cells[8][29] = "0";
      StringGrid1->Cells[9][29] = "0";
      StringGrid1->Cells[10][29]= "0";
       StringGrid1->Cells[1][30] = "28";
 StringGrid1->Cells[2][30] = "0";
 StringGrid1->Cells[3][30] = "0";
 StringGrid1->Cells[4][30] = "0";
  StringGrid1->Cells[5][30] = "0";
   StringGrid1->Cells[6][30] = "0";
    StringGrid1->Cells[7][30] = "0";
     StringGrid1->Cells[8][30] = "0";
      StringGrid1->Cells[9][30] = "0";
      StringGrid1->Cells[10][30]= "0";
      Edit1->Text = "161,00";
      Edit2->Text = "1070,00";
      Edit3->Text = "25,00";
      Edit4->Text = "0,133";
      Edit5->Text = "3,65";
      Edit6->Text = "0";
      Edit7->Text = "0";
      Edit8->Text = "0";
      Edit9->Text = "0";
      Edit10->Text = "99,805";
      Edit11->Text = "No:";
      Edit12->Text = "486,8";
      Edit13->Text = "0,85";
      Edit14->Text = "0,425";
      Edit15->Text = "3,2";
      Edit16->Text = "486,8";
      int Tus;
    if ((Dosyabm = fopen("Data\\Betonarme.prjb", "r+b"))== NULL)
    {
     ShowMessage("Data klas�r�nde dosya bulunamad�.");
     Tus = Application->MessageBoxA("Betonarme.prjb adl� dosya haz�rlans�n m�?",
     "Dosya Haz�rlama Onay�", 3);
     if( Tus == 6)
         Dosyabm = fopen("Data\\Betonarme.prjb", "w+t");
         }
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::ToolButton3Click(TObject *Sender)
{
strcpy(Adres_kaydibm.Don1, StringGrid1->Cells[1][3].c_str());
strcpy(Adres_kaydibm.Mes1, StringGrid1->Cells[2][3].c_str());
strcpy(Adres_kaydibm.Alan1, StringGrid1->Cells[3][3].c_str());
strcpy(Adres_kaydibm.Geril1, StringGrid1->Cells[4][3].c_str());
strcpy(Adres_kaydibm.Gerill1, StringGrid1->Cells[5][3].c_str());
strcpy(Adres_kaydibm.Gerilll1, StringGrid1->Cells[6][3].c_str());
strcpy(Adres_kaydibm.Kuvvet1, StringGrid1->Cells[7][3].c_str());
strcpy(Adres_kaydibm.MomKol1, StringGrid1->Cells[8][3].c_str());
strcpy(Adres_kaydibm.Mom1, StringGrid1->Cells[9][3].c_str());
strcpy(Adres_kaydibm.Don2, StringGrid1->Cells[1][4].c_str());
strcpy(Adres_kaydibm.Mes2, StringGrid1->Cells[2][4].c_str());
strcpy(Adres_kaydibm.Alan2, StringGrid1->Cells[3][4].c_str());
strcpy(Adres_kaydibm.Geril2, StringGrid1->Cells[4][4].c_str());
strcpy(Adres_kaydibm.Gerill2, StringGrid1->Cells[5][4].c_str());
strcpy(Adres_kaydibm.Gerilll2, StringGrid1->Cells[6][4].c_str());
strcpy(Adres_kaydibm.Kuvvet2, StringGrid1->Cells[7][4].c_str());
strcpy(Adres_kaydibm.MomKol2, StringGrid1->Cells[8][4].c_str());
strcpy(Adres_kaydibm.Mom2, StringGrid1->Cells[9][4].c_str());
strcpy(Adres_kaydibm.Don3, StringGrid1->Cells[1][5].c_str());
strcpy(Adres_kaydibm.Mes3, StringGrid1->Cells[2][5].c_str());
strcpy(Adres_kaydibm.Alan3, StringGrid1->Cells[3][5].c_str());
strcpy(Adres_kaydibm.Geril3, StringGrid1->Cells[4][5].c_str());
strcpy(Adres_kaydibm.Gerill3, StringGrid1->Cells[5][5].c_str());
strcpy(Adres_kaydibm.Gerilll3, StringGrid1->Cells[6][5].c_str());
strcpy(Adres_kaydibm.Kuvvet3, StringGrid1->Cells[7][5].c_str());
strcpy(Adres_kaydibm.MomKol3, StringGrid1->Cells[8][5].c_str());
strcpy(Adres_kaydibm.Mom3, StringGrid1->Cells[9][5].c_str());
strcpy(Adres_kaydibm.Don4, StringGrid1->Cells[1][6].c_str());
strcpy(Adres_kaydibm.Mes4, StringGrid1->Cells[2][6].c_str());
strcpy(Adres_kaydibm.Alan4, StringGrid1->Cells[3][6].c_str());
strcpy(Adres_kaydibm.Geril4, StringGrid1->Cells[4][6].c_str());
strcpy(Adres_kaydibm.Gerill4, StringGrid1->Cells[5][6].c_str());
strcpy(Adres_kaydibm.Gerilll4, StringGrid1->Cells[6][6].c_str());
strcpy(Adres_kaydibm.Kuvvet4, StringGrid1->Cells[7][6].c_str());
strcpy(Adres_kaydibm.MomKol4, StringGrid1->Cells[8][6].c_str());
strcpy(Adres_kaydibm.Mom4, StringGrid1->Cells[9][6].c_str());
strcpy(Adres_kaydibm.Don5, StringGrid1->Cells[1][7].c_str());
strcpy(Adres_kaydibm.Mes5, StringGrid1->Cells[2][7].c_str());
strcpy(Adres_kaydibm.Alan5, StringGrid1->Cells[3][7].c_str());
strcpy(Adres_kaydibm.Geril5, StringGrid1->Cells[4][7].c_str());
strcpy(Adres_kaydibm.Gerill5, StringGrid1->Cells[5][7].c_str());
strcpy(Adres_kaydibm.Gerilll5, StringGrid1->Cells[6][7].c_str());
strcpy(Adres_kaydibm.Kuvvet5, StringGrid1->Cells[7][7].c_str());
strcpy(Adres_kaydibm.MomKol5, StringGrid1->Cells[8][7].c_str());
strcpy(Adres_kaydibm.Mom5, StringGrid1->Cells[9][7].c_str());
strcpy(Adres_kaydibm.Don6, StringGrid1->Cells[1][8].c_str());
strcpy(Adres_kaydibm.Mes6, StringGrid1->Cells[2][8].c_str());
strcpy(Adres_kaydibm.Alan6, StringGrid1->Cells[3][8].c_str());
strcpy(Adres_kaydibm.Geril6, StringGrid1->Cells[4][8].c_str());
strcpy(Adres_kaydibm.Gerill6, StringGrid1->Cells[5][8].c_str());
strcpy(Adres_kaydibm.Gerilll6, StringGrid1->Cells[6][8].c_str());
strcpy(Adres_kaydibm.Kuvvet6, StringGrid1->Cells[7][8].c_str());
strcpy(Adres_kaydibm.MomKol6, StringGrid1->Cells[8][8].c_str());
strcpy(Adres_kaydibm.Mom6, StringGrid1->Cells[9][8].c_str());
strcpy(Adres_kaydibm.Don7, StringGrid1->Cells[1][9].c_str());
strcpy(Adres_kaydibm.Mes7, StringGrid1->Cells[2][9].c_str());
strcpy(Adres_kaydibm.Alan7, StringGrid1->Cells[3][9].c_str());
strcpy(Adres_kaydibm.Geril7, StringGrid1->Cells[4][9].c_str());
strcpy(Adres_kaydibm.Gerill7, StringGrid1->Cells[5][9].c_str());
strcpy(Adres_kaydibm.Gerilll7, StringGrid1->Cells[6][9].c_str());
strcpy(Adres_kaydibm.Kuvvet7, StringGrid1->Cells[7][9].c_str());
strcpy(Adres_kaydibm.MomKol7, StringGrid1->Cells[8][9].c_str());
strcpy(Adres_kaydibm.Mom7, StringGrid1->Cells[9][9].c_str());
strcpy(Adres_kaydibm.Don8, StringGrid1->Cells[1][10].c_str());
strcpy(Adres_kaydibm.Mes8, StringGrid1->Cells[2][10].c_str());
strcpy(Adres_kaydibm.Alan8, StringGrid1->Cells[3][10].c_str());
strcpy(Adres_kaydibm.Geril8, StringGrid1->Cells[4][10].c_str());
strcpy(Adres_kaydibm.Gerill8, StringGrid1->Cells[5][10].c_str());
strcpy(Adres_kaydibm.Gerilll8, StringGrid1->Cells[6][10].c_str());
strcpy(Adres_kaydibm.Kuvvet8, StringGrid1->Cells[7][10].c_str());
strcpy(Adres_kaydibm.MomKol8, StringGrid1->Cells[8][10].c_str());
strcpy(Adres_kaydibm.Mom8, StringGrid1->Cells[9][10].c_str());
strcpy(Adres_kaydibm.Don9, StringGrid1->Cells[1][11].c_str());
strcpy(Adres_kaydibm.Mes9, StringGrid1->Cells[2][11].c_str());
strcpy(Adres_kaydibm.Alan9, StringGrid1->Cells[3][11].c_str());
strcpy(Adres_kaydibm.Geril9, StringGrid1->Cells[4][11].c_str());
strcpy(Adres_kaydibm.Gerill9, StringGrid1->Cells[5][11].c_str());
strcpy(Adres_kaydibm.Gerilll9, StringGrid1->Cells[6][11].c_str());
strcpy(Adres_kaydibm.Kuvvet9, StringGrid1->Cells[7][11].c_str());
strcpy(Adres_kaydibm.MomKol9, StringGrid1->Cells[8][11].c_str());
strcpy(Adres_kaydibm.Mom9, StringGrid1->Cells[9][11].c_str());
strcpy(Adres_kaydibm.Don10, StringGrid1->Cells[1][12].c_str());
strcpy(Adres_kaydibm.Mes10, StringGrid1->Cells[2][12].c_str());
strcpy(Adres_kaydibm.Alan10, StringGrid1->Cells[3][12].c_str());
strcpy(Adres_kaydibm.Geril10, StringGrid1->Cells[4][12].c_str());
strcpy(Adres_kaydibm.Gerill10, StringGrid1->Cells[5][12].c_str());
strcpy(Adres_kaydibm.Gerilll10, StringGrid1->Cells[6][12].c_str());
strcpy(Adres_kaydibm.Kuvvet10, StringGrid1->Cells[7][12].c_str());
strcpy(Adres_kaydibm.MomKol10, StringGrid1->Cells[8][12].c_str());
strcpy(Adres_kaydibm.Mom10, StringGrid1->Cells[9][12].c_str());
strcpy(Adres_kaydibm.Don11, StringGrid1->Cells[1][13].c_str());
strcpy(Adres_kaydibm.Mes11, StringGrid1->Cells[2][13].c_str());
strcpy(Adres_kaydibm.Alan11, StringGrid1->Cells[3][13].c_str());
strcpy(Adres_kaydibm.Geril11, StringGrid1->Cells[4][13].c_str());
strcpy(Adres_kaydibm.Gerill11, StringGrid1->Cells[5][13].c_str());
strcpy(Adres_kaydibm.Gerilll11, StringGrid1->Cells[6][13].c_str());
strcpy(Adres_kaydibm.Kuvvet11, StringGrid1->Cells[7][13].c_str());
strcpy(Adres_kaydibm.MomKol11, StringGrid1->Cells[8][13].c_str());
strcpy(Adres_kaydibm.Mom11, StringGrid1->Cells[9][13].c_str());
strcpy(Adres_kaydibm.Don12, StringGrid1->Cells[1][14].c_str());
strcpy(Adres_kaydibm.Mes12, StringGrid1->Cells[2][14].c_str());
strcpy(Adres_kaydibm.Alan12, StringGrid1->Cells[3][14].c_str());
strcpy(Adres_kaydibm.Geril12, StringGrid1->Cells[4][14].c_str());
strcpy(Adres_kaydibm.Gerill12, StringGrid1->Cells[5][14].c_str());
strcpy(Adres_kaydibm.Gerilll12, StringGrid1->Cells[6][14].c_str());
strcpy(Adres_kaydibm.Kuvvet12, StringGrid1->Cells[7][14].c_str());
strcpy(Adres_kaydibm.MomKol12, StringGrid1->Cells[8][14].c_str());
strcpy(Adres_kaydibm.Mom12, StringGrid1->Cells[9][14].c_str());
strcpy(Adres_kaydibm.Don13, StringGrid1->Cells[1][15].c_str());
strcpy(Adres_kaydibm.Mes13, StringGrid1->Cells[2][15].c_str());
strcpy(Adres_kaydibm.Alan13, StringGrid1->Cells[3][15].c_str());
strcpy(Adres_kaydibm.Geril13, StringGrid1->Cells[4][15].c_str());
strcpy(Adres_kaydibm.Gerill13, StringGrid1->Cells[5][15].c_str());
strcpy(Adres_kaydibm.Gerilll13, StringGrid1->Cells[6][15].c_str());
strcpy(Adres_kaydibm.Kuvvet13, StringGrid1->Cells[7][15].c_str());
strcpy(Adres_kaydibm.MomKol13, StringGrid1->Cells[8][15].c_str());
strcpy(Adres_kaydibm.Mom13, StringGrid1->Cells[9][15].c_str());
strcpy(Adres_kaydibm.Don14, StringGrid1->Cells[1][16].c_str());
strcpy(Adres_kaydibm.Mes14, StringGrid1->Cells[2][16].c_str());
strcpy(Adres_kaydibm.Alan14, StringGrid1->Cells[3][16].c_str());
strcpy(Adres_kaydibm.Geril14, StringGrid1->Cells[4][16].c_str());
strcpy(Adres_kaydibm.Gerill14, StringGrid1->Cells[5][16].c_str());
strcpy(Adres_kaydibm.Gerilll14, StringGrid1->Cells[6][16].c_str());
strcpy(Adres_kaydibm.Kuvvet14, StringGrid1->Cells[7][16].c_str());
strcpy(Adres_kaydibm.MomKol14, StringGrid1->Cells[8][16].c_str());
strcpy(Adres_kaydibm.Mom14, StringGrid1->Cells[9][16].c_str());
strcpy(Adres_kaydibm.Don15, StringGrid1->Cells[1][17].c_str());
strcpy(Adres_kaydibm.Mes15, StringGrid1->Cells[2][17].c_str());
strcpy(Adres_kaydibm.Alan15, StringGrid1->Cells[3][17].c_str());
strcpy(Adres_kaydibm.Geril15, StringGrid1->Cells[4][17].c_str());
strcpy(Adres_kaydibm.Gerill15, StringGrid1->Cells[5][17].c_str());
strcpy(Adres_kaydibm.Gerilll15, StringGrid1->Cells[6][17].c_str());
strcpy(Adres_kaydibm.Kuvvet15, StringGrid1->Cells[7][17].c_str());
strcpy(Adres_kaydibm.MomKol15, StringGrid1->Cells[8][17].c_str());
strcpy(Adres_kaydibm.Mom15, StringGrid1->Cells[9][17].c_str());
strcpy(Adres_kaydibm.Don16, StringGrid1->Cells[1][18].c_str());
strcpy(Adres_kaydibm.Mes16, StringGrid1->Cells[2][18].c_str());
strcpy(Adres_kaydibm.Alan16, StringGrid1->Cells[3][18].c_str());
strcpy(Adres_kaydibm.Geril16, StringGrid1->Cells[4][18].c_str());
strcpy(Adres_kaydibm.Gerill16, StringGrid1->Cells[5][18].c_str());
strcpy(Adres_kaydibm.Gerilll16, StringGrid1->Cells[6][18].c_str());
strcpy(Adres_kaydibm.Kuvvet16, StringGrid1->Cells[7][18].c_str());
strcpy(Adres_kaydibm.MomKol16, StringGrid1->Cells[8][18].c_str());
strcpy(Adres_kaydibm.Mom16, StringGrid1->Cells[9][18].c_str());
strcpy(Adres_kaydibm.Don17, StringGrid1->Cells[1][19].c_str());
strcpy(Adres_kaydibm.Mes17, StringGrid1->Cells[2][19].c_str());
strcpy(Adres_kaydibm.Alan17, StringGrid1->Cells[3][19].c_str());
strcpy(Adres_kaydibm.Geril17, StringGrid1->Cells[4][19].c_str());
strcpy(Adres_kaydibm.Gerill17, StringGrid1->Cells[5][19].c_str());
strcpy(Adres_kaydibm.Gerilll17, StringGrid1->Cells[6][19].c_str());
strcpy(Adres_kaydibm.Kuvvet17, StringGrid1->Cells[7][19].c_str());
strcpy(Adres_kaydibm.MomKol17, StringGrid1->Cells[8][19].c_str());
strcpy(Adres_kaydibm.Mom17, StringGrid1->Cells[9][19].c_str());
strcpy(Adres_kaydibm.Don18, StringGrid1->Cells[1][20].c_str());
strcpy(Adres_kaydibm.Mes18, StringGrid1->Cells[2][20].c_str());
strcpy(Adres_kaydibm.Alan18, StringGrid1->Cells[3][20].c_str());
strcpy(Adres_kaydibm.Geril18, StringGrid1->Cells[4][20].c_str());
strcpy(Adres_kaydibm.Gerill18, StringGrid1->Cells[5][20].c_str());
strcpy(Adres_kaydibm.Gerilll18, StringGrid1->Cells[6][20].c_str());
strcpy(Adres_kaydibm.Kuvvet18, StringGrid1->Cells[7][20].c_str());
strcpy(Adres_kaydibm.MomKol18, StringGrid1->Cells[8][20].c_str());
strcpy(Adres_kaydibm.Mom18, StringGrid1->Cells[9][20].c_str());
strcpy(Adres_kaydibm.Don19, StringGrid1->Cells[1][21].c_str());
strcpy(Adres_kaydibm.Mes19, StringGrid1->Cells[2][21].c_str());
strcpy(Adres_kaydibm.Alan19, StringGrid1->Cells[3][21].c_str());
strcpy(Adres_kaydibm.Geril19, StringGrid1->Cells[4][21].c_str());
strcpy(Adres_kaydibm.Gerill19, StringGrid1->Cells[5][21].c_str());
strcpy(Adres_kaydibm.Gerilll19, StringGrid1->Cells[6][21].c_str());
strcpy(Adres_kaydibm.Kuvvet19, StringGrid1->Cells[7][21].c_str());
strcpy(Adres_kaydibm.MomKol19, StringGrid1->Cells[8][21].c_str());
strcpy(Adres_kaydibm.Mom19, StringGrid1->Cells[9][21].c_str());
strcpy(Adres_kaydibm.Don20, StringGrid1->Cells[1][22].c_str());
strcpy(Adres_kaydibm.Mes20, StringGrid1->Cells[2][22].c_str());
strcpy(Adres_kaydibm.Alan20, StringGrid1->Cells[3][22].c_str());
strcpy(Adres_kaydibm.Geril20, StringGrid1->Cells[4][22].c_str());
strcpy(Adres_kaydibm.Gerill20, StringGrid1->Cells[5][22].c_str());
strcpy(Adres_kaydibm.Gerilll20, StringGrid1->Cells[6][22].c_str());
strcpy(Adres_kaydibm.Kuvvet20, StringGrid1->Cells[7][22].c_str());
strcpy(Adres_kaydibm.MomKol20, StringGrid1->Cells[8][22].c_str());
strcpy(Adres_kaydibm.Mom20, StringGrid1->Cells[9][22].c_str());
strcpy(Adres_kaydibm.Don21, StringGrid1->Cells[1][23].c_str());
strcpy(Adres_kaydibm.Mes21, StringGrid1->Cells[2][23].c_str());
strcpy(Adres_kaydibm.Alan21, StringGrid1->Cells[3][23].c_str());
strcpy(Adres_kaydibm.Geril21, StringGrid1->Cells[4][23].c_str());
strcpy(Adres_kaydibm.Gerill21, StringGrid1->Cells[5][23].c_str());
strcpy(Adres_kaydibm.Gerilll21, StringGrid1->Cells[6][23].c_str());
strcpy(Adres_kaydibm.Kuvvet21, StringGrid1->Cells[7][23].c_str());
strcpy(Adres_kaydibm.MomKol21, StringGrid1->Cells[8][23].c_str());
strcpy(Adres_kaydibm.Mom21, StringGrid1->Cells[9][23].c_str());
strcpy(Adres_kaydibm.Don22, StringGrid1->Cells[1][24].c_str());
strcpy(Adres_kaydibm.Mes22, StringGrid1->Cells[2][24].c_str());
strcpy(Adres_kaydibm.Alan22, StringGrid1->Cells[3][24].c_str());
strcpy(Adres_kaydibm.Geril22, StringGrid1->Cells[4][24].c_str());
strcpy(Adres_kaydibm.Gerill22, StringGrid1->Cells[5][24].c_str());
strcpy(Adres_kaydibm.Gerilll22, StringGrid1->Cells[6][24].c_str());
strcpy(Adres_kaydibm.Kuvvet22, StringGrid1->Cells[7][24].c_str());
strcpy(Adres_kaydibm.MomKol22, StringGrid1->Cells[8][24].c_str());
strcpy(Adres_kaydibm.Mom22, StringGrid1->Cells[9][24].c_str());
strcpy(Adres_kaydibm.Don23, StringGrid1->Cells[1][25].c_str());
strcpy(Adres_kaydibm.Mes23, StringGrid1->Cells[2][25].c_str());
strcpy(Adres_kaydibm.Alan23, StringGrid1->Cells[3][25].c_str());
strcpy(Adres_kaydibm.Geril23, StringGrid1->Cells[4][25].c_str());
strcpy(Adres_kaydibm.Gerill23, StringGrid1->Cells[5][25].c_str());
strcpy(Adres_kaydibm.Gerilll23, StringGrid1->Cells[6][25].c_str());
strcpy(Adres_kaydibm.Kuvvet23, StringGrid1->Cells[7][25].c_str());
strcpy(Adres_kaydibm.MomKol23, StringGrid1->Cells[8][25].c_str());
strcpy(Adres_kaydibm.Mom23, StringGrid1->Cells[9][25].c_str());
strcpy(Adres_kaydibm.Don24, StringGrid1->Cells[1][26].c_str());
strcpy(Adres_kaydibm.Mes24, StringGrid1->Cells[2][26].c_str());
strcpy(Adres_kaydibm.Alan24, StringGrid1->Cells[3][26].c_str());
strcpy(Adres_kaydibm.Geril24, StringGrid1->Cells[4][26].c_str());
strcpy(Adres_kaydibm.Gerill24, StringGrid1->Cells[5][26].c_str());
strcpy(Adres_kaydibm.Gerilll24, StringGrid1->Cells[6][26].c_str());
strcpy(Adres_kaydibm.Kuvvet24, StringGrid1->Cells[7][26].c_str());
strcpy(Adres_kaydibm.MomKol24, StringGrid1->Cells[8][26].c_str());
strcpy(Adres_kaydibm.Mom24, StringGrid1->Cells[9][26].c_str());
strcpy(Adres_kaydibm.Don25, StringGrid1->Cells[1][27].c_str());
strcpy(Adres_kaydibm.Mes25, StringGrid1->Cells[2][27].c_str());
strcpy(Adres_kaydibm.Alan25, StringGrid1->Cells[3][27].c_str());
strcpy(Adres_kaydibm.Geril25, StringGrid1->Cells[4][27].c_str());
strcpy(Adres_kaydibm.Gerill25, StringGrid1->Cells[5][27].c_str());
strcpy(Adres_kaydibm.Gerilll25, StringGrid1->Cells[6][27].c_str());
strcpy(Adres_kaydibm.Kuvvet25, StringGrid1->Cells[7][27].c_str());
strcpy(Adres_kaydibm.MomKol25, StringGrid1->Cells[8][27].c_str());
strcpy(Adres_kaydibm.Mom25, StringGrid1->Cells[9][27].c_str());
strcpy(Adres_kaydibm.Don26, StringGrid1->Cells[1][28].c_str());
strcpy(Adres_kaydibm.Mes26, StringGrid1->Cells[2][28].c_str());
strcpy(Adres_kaydibm.Alan26, StringGrid1->Cells[3][28].c_str());
strcpy(Adres_kaydibm.Geril26, StringGrid1->Cells[4][28].c_str());
strcpy(Adres_kaydibm.Gerill26, StringGrid1->Cells[5][28].c_str());
strcpy(Adres_kaydibm.Gerilll26, StringGrid1->Cells[6][28].c_str());
strcpy(Adres_kaydibm.Kuvvet26, StringGrid1->Cells[7][28].c_str());
strcpy(Adres_kaydibm.MomKol26, StringGrid1->Cells[8][28].c_str());
strcpy(Adres_kaydibm.Mom26, StringGrid1->Cells[9][28].c_str());
strcpy(Adres_kaydibm.Don27, StringGrid1->Cells[1][29].c_str());
strcpy(Adres_kaydibm.Mes27, StringGrid1->Cells[2][29].c_str());
strcpy(Adres_kaydibm.Alan27, StringGrid1->Cells[3][29].c_str());
strcpy(Adres_kaydibm.Geril27, StringGrid1->Cells[4][29].c_str());
strcpy(Adres_kaydibm.Gerill27, StringGrid1->Cells[5][29].c_str());
strcpy(Adres_kaydibm.Gerilll27, StringGrid1->Cells[6][29].c_str());
strcpy(Adres_kaydibm.Kuvvet27, StringGrid1->Cells[7][29].c_str());
strcpy(Adres_kaydibm.MomKol27, StringGrid1->Cells[8][29].c_str());
strcpy(Adres_kaydibm.Mom27, StringGrid1->Cells[9][29].c_str());
strcpy(Adres_kaydibm.Don28, StringGrid1->Cells[1][30].c_str());
strcpy(Adres_kaydibm.Mes28, StringGrid1->Cells[2][30].c_str());
strcpy(Adres_kaydibm.Alan28, StringGrid1->Cells[3][30].c_str());
strcpy(Adres_kaydibm.Geril28, StringGrid1->Cells[4][30].c_str());
strcpy(Adres_kaydibm.Gerill28, StringGrid1->Cells[5][30].c_str());
strcpy(Adres_kaydibm.Gerilll28, StringGrid1->Cells[6][30].c_str());
strcpy(Adres_kaydibm.Kuvvet28, StringGrid1->Cells[7][30].c_str());
strcpy(Adres_kaydibm.MomKol28, StringGrid1->Cells[8][30].c_str());
strcpy(Adres_kaydibm.Mom28, StringGrid1->Cells[9][30].c_str());
strcpy(Adres_kaydibm.Nd, Edit1->Text.c_str());
strcpy(Adres_kaydibm.Md, Edit2->Text.c_str());
strcpy(Adres_kaydibm.bw, Edit3->Text.c_str());
strcpy(Adres_kaydibm.fcd, Edit4->Text.c_str());
strcpy(Adres_kaydibm.fyd, Edit5->Text.c_str());
strcpy(Adres_kaydibm.Fc, Edit6->Text.c_str());
strcpy(Adres_kaydibm.TopFsi, Edit7->Text.c_str());
strcpy(Adres_kaydibm.TopFx, Edit8->Text.c_str());
strcpy(Adres_kaydibm.Mr, Edit9->Text.c_str());
strcpy(Adres_kaydibm.C, Edit10->Text.c_str());
strcpy(Adres_kaydibm.SayfaNo, Edit11->Text.c_str());

if (MessageDlg("Bilgiler Kaydedilsin mi?",
              mtConfirmation, TMsgDlgButtons()
              <<mbYes<<mbNo, 0) == mrYes)
{
  fseek(Dosyabm, 0, SEEK_END);
  fwrite(&Adres_kaydibm, sizeof(Yapibm), 1, Dosyabm);
  }
  StringGrid1->Cells[1][3] = "";
 StringGrid1->Cells[2][3] = "0";
 StringGrid1->Cells[3][3] = "0";
 StringGrid1->Cells[4][3] = "";
  StringGrid1->Cells[5][3] = "0";
   StringGrid1->Cells[6][3] = "0";
    StringGrid1->Cells[7][3] = "0";
     StringGrid1->Cells[8][3] = "0";
      StringGrid1->Cells[9][3] = "0";
      StringGrid1->Cells[10][3] = "0";
       StringGrid1->Cells[1][4] = "";
 StringGrid1->Cells[2][4] = "0";
 StringGrid1->Cells[3][4] = "0";
 StringGrid1->Cells[4][4] = "0";
  StringGrid1->Cells[5][4] = "0";
   StringGrid1->Cells[6][4] = "0";
    StringGrid1->Cells[7][4] = "0";
     StringGrid1->Cells[8][4] = "0";
      StringGrid1->Cells[9][4] = "0";
      StringGrid1->Cells[10][4] = "0";
       StringGrid1->Cells[1][5] = "";
 StringGrid1->Cells[2][5] = "0";
 StringGrid1->Cells[3][5] = "0";
 StringGrid1->Cells[4][5] = "0";
  StringGrid1->Cells[5][5] = "0";
   StringGrid1->Cells[6][5] = "0";
    StringGrid1->Cells[7][5] = "0";
     StringGrid1->Cells[8][5] = "0";
      StringGrid1->Cells[9][5] = "0";
      StringGrid1->Cells[10][5] = "0";
       StringGrid1->Cells[1][6] = "";
 StringGrid1->Cells[2][6] = "0";
 StringGrid1->Cells[3][6] = "0";
 StringGrid1->Cells[4][6] = "0";
  StringGrid1->Cells[5][6] = "0";
   StringGrid1->Cells[6][6] = "0";
    StringGrid1->Cells[7][6] = "0";
     StringGrid1->Cells[8][6] = "0";
      StringGrid1->Cells[9][6] = "0";
      StringGrid1->Cells[10][6] = "0";
       StringGrid1->Cells[1][7] = "";
 StringGrid1->Cells[2][7] = "0";
 StringGrid1->Cells[3][7] = "0";
 StringGrid1->Cells[4][7] = "0";
  StringGrid1->Cells[5][7] = "0";
   StringGrid1->Cells[6][7] = "0";
    StringGrid1->Cells[7][7] = "0";
     StringGrid1->Cells[8][7] = "0";
      StringGrid1->Cells[9][7] = "0";
      StringGrid1->Cells[10][7] = "0";
       StringGrid1->Cells[1][8] = "";
 StringGrid1->Cells[2][8] = "0";
 StringGrid1->Cells[3][8] = "0";
 StringGrid1->Cells[4][8] = "0";
  StringGrid1->Cells[5][8] = "0";
   StringGrid1->Cells[6][8] = "0";
    StringGrid1->Cells[7][8] = "0";
     StringGrid1->Cells[8][8] = "0";
      StringGrid1->Cells[9][8] = "0";
     StringGrid1->Cells[10][8] = "0";
       StringGrid1->Cells[1][9] = "";
 StringGrid1->Cells[2][9] = "0";
 StringGrid1->Cells[3][9] = "0";
 StringGrid1->Cells[4][9] = "0";
  StringGrid1->Cells[5][9] = "0";
   StringGrid1->Cells[6][9] = "0";
    StringGrid1->Cells[7][9] = "0";
     StringGrid1->Cells[8][9] = "0";
      StringGrid1->Cells[9][9] = "0";
      StringGrid1->Cells[10][9] = "0";
       StringGrid1->Cells[1][10] = "";
 StringGrid1->Cells[2][10] = "0";
 StringGrid1->Cells[3][10] = "0";
 StringGrid1->Cells[4][10] = "0";
  StringGrid1->Cells[5][10] = "0";
   StringGrid1->Cells[6][10] = "0";
    StringGrid1->Cells[7][10] = "0";
     StringGrid1->Cells[8][10] = "0";
      StringGrid1->Cells[9][10] = "0";
      StringGrid1->Cells[10][10] = "0";
       StringGrid1->Cells[1][11] = "";
 StringGrid1->Cells[2][11] = "0";
 StringGrid1->Cells[3][11] = "0";
 StringGrid1->Cells[4][11] = "0";
  StringGrid1->Cells[5][11] = "0";
   StringGrid1->Cells[6][11] = "0";
    StringGrid1->Cells[7][11] = "0";
     StringGrid1->Cells[8][11] = "0";
      StringGrid1->Cells[9][11] = "0";
      StringGrid1->Cells[10][11] = "0";
       StringGrid1->Cells[1][12] = "";
 StringGrid1->Cells[2][12] = "0";
 StringGrid1->Cells[3][12] = "0";
 StringGrid1->Cells[4][12] = "0";
  StringGrid1->Cells[5][12] = "0";
   StringGrid1->Cells[6][12] = "0";
    StringGrid1->Cells[7][12] = "0";
     StringGrid1->Cells[8][12] = "0";
      StringGrid1->Cells[9][12] = "0";
      StringGrid1->Cells[10][12] = "0";
       StringGrid1->Cells[1][13] = "";
 StringGrid1->Cells[2][13] = "0";
 StringGrid1->Cells[3][13] = "0";
 StringGrid1->Cells[4][13] = "0";
  StringGrid1->Cells[5][13] = "0";
   StringGrid1->Cells[6][13] = "0";
    StringGrid1->Cells[7][13] = "0";
     StringGrid1->Cells[8][13] = "0";
      StringGrid1->Cells[9][13] = "0";
      StringGrid1->Cells[10][13] = "0";
       StringGrid1->Cells[1][14] = "";
 StringGrid1->Cells[2][14] = "0";
 StringGrid1->Cells[3][14] = "0";
 StringGrid1->Cells[4][14] = "0";
  StringGrid1->Cells[5][14] = "0";
   StringGrid1->Cells[6][14] = "0";
    StringGrid1->Cells[7][14] = "0";
     StringGrid1->Cells[8][14] = "0";
      StringGrid1->Cells[9][14] = "0";
      StringGrid1->Cells[10][14] = "0";
       StringGrid1->Cells[1][15] = "";
 StringGrid1->Cells[2][15] = "0";
 StringGrid1->Cells[3][15] = "0";
 StringGrid1->Cells[4][15] = "0";
  StringGrid1->Cells[5][15] = "0";
   StringGrid1->Cells[6][15] = "0";
    StringGrid1->Cells[7][15] = "0";
     StringGrid1->Cells[8][15] = "0";
      StringGrid1->Cells[9][15] = "0";
      StringGrid1->Cells[10][15] = "0";
       StringGrid1->Cells[1][16] = "";
 StringGrid1->Cells[2][16] = "0";
 StringGrid1->Cells[3][16] = "0";
 StringGrid1->Cells[4][16] = "0";
  StringGrid1->Cells[5][16] = "0";
   StringGrid1->Cells[6][16] = "0";
    StringGrid1->Cells[7][16] = "0";
     StringGrid1->Cells[8][16] = "0";
      StringGrid1->Cells[9][16] = "0";
      StringGrid1->Cells[10][16] = "0";
       StringGrid1->Cells[1][17] = "";
 StringGrid1->Cells[2][17] = "0";
 StringGrid1->Cells[3][17] = "0";
 StringGrid1->Cells[4][17] = "0";
  StringGrid1->Cells[5][17] = "0";
   StringGrid1->Cells[6][17] = "0";
    StringGrid1->Cells[7][17] = "0";
     StringGrid1->Cells[8][17] = "0";
      StringGrid1->Cells[9][17] = "0";
      StringGrid1->Cells[10][17] = "0";
       StringGrid1->Cells[1][18] = "";
 StringGrid1->Cells[2][18] = "0";
 StringGrid1->Cells[3][18] = "0";
 StringGrid1->Cells[4][18] = "0";
  StringGrid1->Cells[5][18] = "0";
   StringGrid1->Cells[6][18] = "0";
    StringGrid1->Cells[7][18] = "0";
     StringGrid1->Cells[8][18] = "0";
      StringGrid1->Cells[9][18] = "0";
      StringGrid1->Cells[10][18] = "0";
       StringGrid1->Cells[1][19] = "";
 StringGrid1->Cells[2][19] = "0";
 StringGrid1->Cells[3][19] = "0";
 StringGrid1->Cells[4][19] = "0";
  StringGrid1->Cells[5][19] = "0";
   StringGrid1->Cells[6][19] = "0";
    StringGrid1->Cells[7][19] = "0";
     StringGrid1->Cells[8][19] = "0";
      StringGrid1->Cells[9][19] = "0";
      StringGrid1->Cells[10][19] = "0";
       StringGrid1->Cells[1][20] = "";
 StringGrid1->Cells[2][20] = "0";
 StringGrid1->Cells[3][20] = "0";
 StringGrid1->Cells[4][20] = "0";
  StringGrid1->Cells[5][20] = "0";
   StringGrid1->Cells[6][20] = "0";
    StringGrid1->Cells[7][20] = "0";
     StringGrid1->Cells[8][20] = "0";
      StringGrid1->Cells[9][20] = "0";
      StringGrid1->Cells[10][20] = "0";
       StringGrid1->Cells[1][21] = "";
 StringGrid1->Cells[2][21] = "0";
 StringGrid1->Cells[3][21] = "0";
 StringGrid1->Cells[4][21] = "0";
  StringGrid1->Cells[5][21] = "0";
   StringGrid1->Cells[6][21] = "0";
    StringGrid1->Cells[7][21] = "0";
     StringGrid1->Cells[8][21] = "0";
      StringGrid1->Cells[9][21] = "0";
      StringGrid1->Cells[10][21] = "0";
       StringGrid1->Cells[1][22] = "";
 StringGrid1->Cells[2][22] = "0";
 StringGrid1->Cells[3][22] = "0";
 StringGrid1->Cells[4][22] = "0";
  StringGrid1->Cells[5][22] = "0";
   StringGrid1->Cells[6][22] = "0";
    StringGrid1->Cells[7][22] = "0";
     StringGrid1->Cells[8][22] = "0";
      StringGrid1->Cells[9][22] = "0";
      StringGrid1->Cells[10][22] = "0";
       StringGrid1->Cells[1][23] = "";
 StringGrid1->Cells[2][23] = "0";
 StringGrid1->Cells[3][23] = "0";
 StringGrid1->Cells[4][23] = "0";
  StringGrid1->Cells[5][23] = "0";
   StringGrid1->Cells[6][23] = "0";
    StringGrid1->Cells[7][23] = "0";
     StringGrid1->Cells[8][23] = "0";
      StringGrid1->Cells[9][23] = "0";
      StringGrid1->Cells[10][23] = "0";
       StringGrid1->Cells[1][24] = "";
 StringGrid1->Cells[2][24] = "0";
 StringGrid1->Cells[3][24] = "0";
 StringGrid1->Cells[4][24] = "0";
  StringGrid1->Cells[5][24] = "0";
   StringGrid1->Cells[6][24] = "0";
    StringGrid1->Cells[7][24] = "0";
     StringGrid1->Cells[8][24] = "0";
      StringGrid1->Cells[9][24] = "0";
      StringGrid1->Cells[10][24] = "0";
       StringGrid1->Cells[1][25] = "";
 StringGrid1->Cells[2][25] = "0";
 StringGrid1->Cells[3][25] = "0";
 StringGrid1->Cells[4][25] = "0";
  StringGrid1->Cells[5][25] = "0";
   StringGrid1->Cells[6][25] = "0";
    StringGrid1->Cells[7][25] = "0";
     StringGrid1->Cells[8][25] = "0";
      StringGrid1->Cells[9][25] = "0";
      StringGrid1->Cells[10][25] = "0";
       StringGrid1->Cells[1][26] = "";
 StringGrid1->Cells[2][26] = "0";
 StringGrid1->Cells[3][26] = "0";
 StringGrid1->Cells[4][26] = "0";
  StringGrid1->Cells[5][26] = "0";
   StringGrid1->Cells[6][26] = "0";
    StringGrid1->Cells[7][26] = "0";
     StringGrid1->Cells[8][26] = "0";
      StringGrid1->Cells[9][26] = "0";
      StringGrid1->Cells[10][26] = "0";
       StringGrid1->Cells[1][27] = "";
 StringGrid1->Cells[2][27] = "0";
 StringGrid1->Cells[3][27] = "0";
 StringGrid1->Cells[4][27] = "0";
  StringGrid1->Cells[5][27] = "0";
   StringGrid1->Cells[6][27] = "0";
    StringGrid1->Cells[7][27] = "0";
     StringGrid1->Cells[8][27] = "0";
      StringGrid1->Cells[9][27] = "0";
      StringGrid1->Cells[10][27] = "0";
       StringGrid1->Cells[1][28] = "";
 StringGrid1->Cells[2][28] = "0";
 StringGrid1->Cells[3][28] = "0";
 StringGrid1->Cells[4][28] = "0";
  StringGrid1->Cells[5][28] = "0";
   StringGrid1->Cells[6][28] = "0";
    StringGrid1->Cells[7][28] = "0";
     StringGrid1->Cells[8][28] = "0";
      StringGrid1->Cells[9][28] = "0";
      StringGrid1->Cells[10][28] = "0";
       StringGrid1->Cells[1][29] = "";
 StringGrid1->Cells[2][29] = "0";
 StringGrid1->Cells[3][29] = "0";
 StringGrid1->Cells[4][29] = "0";
  StringGrid1->Cells[5][29] = "0";
   StringGrid1->Cells[6][29] = "0";
    StringGrid1->Cells[7][29] = "0";
     StringGrid1->Cells[8][29] = "0";
      StringGrid1->Cells[9][29] = "0";
      StringGrid1->Cells[10][29] = "0";
       StringGrid1->Cells[1][30] = "";
 StringGrid1->Cells[2][30] = "0";
 StringGrid1->Cells[3][30] = "0";
 StringGrid1->Cells[4][30] = "0";
  StringGrid1->Cells[5][30] = "0";
   StringGrid1->Cells[6][30] = "0";
    StringGrid1->Cells[7][30] = "0";
     StringGrid1->Cells[8][30] = "0";
      StringGrid1->Cells[9][30] = "0";
      StringGrid1->Cells[10][30] = "0";
      Edit1->Text = "161,00";
      Edit2->Text = "1070,00";
      Edit3->Text = "25,00";
      Edit4->Text = "0,133";
      Edit5->Text = "3,65";
      Edit6->Text = "0";
      Edit7->Text = "0";
      Edit8->Text = "0";
      Edit9->Text = "0";
      Edit10->Text = "99,805";
      Edit11->Text = "No:";
      Edit12->Text = "0";
      Edit13->Text = "0,85";
      Edit14->Text = "0,425";
      Edit15->Text = "0";
      Edit16->Text = "0";
      Edit17->Text = "";
      Edit17->Color = clWhite;
      Edit17->BorderStyle = bsNone;
      Edit17->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::ToolButton5Click(TObject *Sender)
{
Application->CreateForm(__classid(TBetonoku), &Betonoku);
Betonoku->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Button1Click(TObject *Sender)
{
float KatSay1;
float KatSay2;
float Maxb;
float Minb;
float Ndb;
float Mdb;
float bwb;
float fcdb;
float fydb;
float Fcb;
float Fsib;
float Fxb;
float Mrb;
float Cb;
float TopMesb;
float Sektorb1;
float Mesb1;
float Alb1;
float Gerb1;
float Gerbbb1;
float Kuvb1;
float MomKb1;
float Momb1;
float Sektorb2;
float Mesb2;
float Alb2;
float Gerb2;
float Gerbb2;
float Gerbbb2;
float Kuvb2;
float MomKb2;
float Momb2;
float Sektorb3;
float Mesb3;
float Alb3;
float Gerb3;
float Gerbb3;
float Gerbbb3;
float Kuvb3;
float MomKb3;
float Momb3;
float Sektorb4;
float Mesb4;
float Alb4;
float Gerb4;
float Gerbb4;
float Gerbbb4;
float Kuvb4;
float MomKb4;
float Momb4;
float Sektorb5;
float Mesb5;
float Alb5;
float Gerb5;
float Gerbb5;
float Gerbbb5;
float Kuvb5;
float MomKb5;
float Momb5;
float Sektorb6;
float Mesb6;
float Alb6;
float Gerb6;
float Gerbb6;
float Gerbbb6;
float Kuvb6;
float MomKb6;
float Momb6;
float Sektorb7;
float Mesb7;
float Alb7;
float Gerb7;
float Gerbb7;
float Gerbbb7;
float Kuvb7;
float MomKb7;
float Momb7;
float Sektorb8;
float Mesb8;
float Alb8;
float Gerb8;
float Gerbb8;
float Gerbbb8;
float Kuvb8;
float MomKb8;
float Momb8;
float Sektorb9;
float Mesb9;
float Alb9;
float Gerb9;
float Gerbb9;
float Gerbbb9;
float Kuvb9;
float MomKb9;
float Momb9;
float Sektorb10;
float Mesb10;
float Alb10;
float Gerb10;
float Gerbb10;
float Gerbbb10;
float Kuvb10;
float MomKb10;
float Momb10;
float Sektorb11;
float Mesb11;
float Alb11;
float Gerb11;
float Gerbb11;
float Gerbbb11;
float Kuvb11;
float MomKb11;
float Momb11;
float Sektorb12;
float Mesb12;
float Alb12;
float Gerb12;
float Gerbb12;
float Gerbbb12;
float Kuvb12;
float MomKb12;
float Momb12;
float Sektorb13;
float Mesb13;
float Alb13;
float Gerb13;
float Gerbb13;
float Gerbbb13;
float Kuvb13;
float MomKb13;
float Momb13;
float Sektorb14;
float Mesb14;
float Alb14;
float Gerb14;
float Gerbb14;
float Gerbbb14;
float Kuvb14;
float MomKb14;
float Momb14;
float Sektorb15;
float Mesb15;
float Alb15;
float Gerb15;
float Gerbb15;
float Gerbbb15;
float Kuvb15;
float MomKb15;
float Momb15;
float Sektorb16;
float Mesb16;
float Alb16;
float Gerb16;
float Gerbb16;
float Gerbbb16;
float Kuvb16;
float MomKb16;
float Momb16;
float Sektorb17;
float Mesb17;
float Alb17;
float Gerb17;
float Gerbb17;
float Gerbbb17;
float Kuvb17;
float MomKb17;
float Momb17;
float Sektorb18;
float Mesb18;
float Alb18;
float Gerb18;
float Gerbb18;
float Gerbbb18;
float Kuvb18;
float MomKb18;
float Momb18;
float Sektorb19;
float Mesb19;
float Alb19;
float Gerb19;
float Gerbb19;
float Gerbbb19;
float Kuvb19;
float MomKb19;
float Momb19;
float Sektorb20;
float Mesb20;
float Alb20;
float Gerb20;
float Gerbb20;
float Gerbbb20;
float Kuvb20;
float MomKb20;
float Momb20;
float Sektorb21;
float Mesb21;
float Alb21;
float Gerb21;
float Gerbb21;
float Gerbbb21;
float Kuvb21;
float MomKb21;
float Momb21;
float Sektorb22;
float Mesb22;
float Alb22;
float Gerb22;
float Gerbb22;
float Gerbbb22;
float Kuvb22;
float MomKb22;
float Momb22;
float Sektorb23;
float Mesb23;
float Alb23;
float Gerb23;
float Gerbb23;
float Gerbbb23;
float Kuvb23;
float MomKb23;
float Momb23;
float Sektorb24;
float Mesb24;
float Alb24;
float Gerb24;
float Gerbb24;
float Gerbbb24;
float Kuvb24;
float MomKb24;
float Momb24;
float Sektorb25;
float Mesb25;
float Alb25;
float Gerb25;
float Gerbb25;
float Gerbbb25;
float Kuvb25;
float MomKb25;
float Momb25;
float Sektorb26;
float Mesb26;
float Alb26;
float Gerb26;
float Gerbb26;
float Gerbbb26;
float Kuvb26;
float MomKb26;
float Momb26;
float Sektorb27;
float Mesb27;
float Alb27;
float Gerb27;
float Gerbb27;
float Gerbbb27;
float Kuvb27;
float MomKb27;
float Momb27;
float Sektorb28;
float Mesb28;
float Alb28;
float Gerb28;
float Gerbb28;
float Gerbbb28;
float Kuvb28;
float MomKb28;
float Momb28;
Ndb = StrToFloat(Edit1->Text);
bwb = StrToFloat(Edit3->Text);
fcdb = StrToFloat(Edit4->Text);
fydb = StrToFloat(Edit5->Text);
Cb = StrToFloat(Edit10->Text);
KatSay1 = StrToFloat(Edit13->Text);
KatSay2 = StrToFloat(Edit14->Text);
Maxb = StrToFloat(Edit16->Text);
Minb = StrToFloat(Edit15->Text);
TopMesb = StrToFloat(Edit12->Text);

Mesb1 = StrToFloat(StringGrid1->Cells[2][3]);
Alb1 = StrToFloat(StringGrid1->Cells[3][3]);

Sektorb1 = StrToFloat(StringGrid1->Cells[10][3]);
Gerb1 = (1-(Mesb1/Cb)) * 6 * Sektorb1;
StringGrid1->Cells[4][3] = FloatToStr(Gerb1);

Gerb1 = StrToFloat(StringGrid1->Cells[4][3]);
if (Gerb1 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb1)
{
Gerbbb1 = fydb;
StringGrid1->Cells[6][3] = FloatToStr(Gerbbb1);
}
else
if (fydb > Gerb1)
{
Gerbbb1 = Gerb1;
StringGrid1->Cells[6][3] = FloatToStr(Gerbbb1);
}
}
else
if (Gerb1 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb1)
{
Gerbbb1 = Gerb1;
StringGrid1->Cells[6][3] = FloatToStr(Gerbbb1);
}
else
if (-fydb > Gerb1)
{
Gerbbb1 = -fydb;
StringGrid1->Cells[6][3] = FloatToStr(Gerbbb1);
}
}
Sektorb1 = StrToFloat(StringGrid1->Cells[10][3]);
Kuvb1 =  Gerbbb1 * Alb1 * Sektorb1;
StringGrid1->Cells[7][3] = FloatToStr(Kuvb1);

Sektorb1 = StrToFloat(StringGrid1->Cells[10][3]);
MomKb1 = (TopMesb - Mesb1) * Sektorb1;
StringGrid1->Cells[8][3] = FloatToStr(MomKb1);

Momb1 =  Kuvb1 * MomKb1;
StringGrid1->Cells[9][3] = FloatToStr(Momb1);

Mesb2 = StrToFloat(StringGrid1->Cells[2][4]);
Alb2 = StrToFloat(StringGrid1->Cells[3][4]);

Sektorb2 = StrToFloat(StringGrid1->Cells[10][4]);
Gerb2 = (1-(Mesb2/Cb)) * 6 * Sektorb2;
StringGrid1->Cells[4][4] = FloatToStr(Gerb2);

Gerb2 = StrToFloat(StringGrid1->Cells[4][4]);
if (Gerb2 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb2)
{
Gerbbb2 = fydb;
StringGrid1->Cells[6][4] = FloatToStr(Gerbbb2);
}
else
if (fydb > Gerb2)
{
Gerbbb2 = Gerb2;
StringGrid1->Cells[6][4] = FloatToStr(Gerbbb2);
}
}
else
if (Gerb2 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb2)
{
Gerbbb2 = Gerb2;
StringGrid1->Cells[6][4] = FloatToStr(Gerbbb2);
}
else
if (-fydb > Gerb2)
{
Gerbbb2 = -fydb;
StringGrid1->Cells[6][4] = FloatToStr(Gerbbb2);
}
}
Sektorb2 = StrToFloat(StringGrid1->Cells[10][4]);
Kuvb2 =  Gerbbb2 * Alb2 * Sektorb2;
StringGrid1->Cells[7][4] = FloatToStr(Kuvb2);

Sektorb2 = StrToFloat(StringGrid1->Cells[10][4]);
MomKb2 = (TopMesb - Mesb2) * Sektorb2;
StringGrid1->Cells[8][4] = FloatToStr(MomKb2);

Momb2 =  Kuvb2 * MomKb2;
StringGrid1->Cells[9][4] = FloatToStr(Momb2);

Mesb3 = StrToFloat(StringGrid1->Cells[2][5]);
Alb3 = StrToFloat(StringGrid1->Cells[3][5]);

Sektorb3 = StrToFloat(StringGrid1->Cells[10][5]);
Gerb3 = (1-(Mesb3/Cb)) * 6 * Sektorb3;
StringGrid1->Cells[4][5] = FloatToStr(Gerb3);

Gerb3 = StrToFloat(StringGrid1->Cells[4][5]);
if (Gerb3 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb3)
{
Gerbbb3 = fydb;
StringGrid1->Cells[6][5] = FloatToStr(Gerbbb3);
}
else
if (fydb > Gerb3)
{
Gerbbb3 = Gerb3;
StringGrid1->Cells[6][5] = FloatToStr(Gerbbb3);
}
}
else
if (Gerb3 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb3)
{
Gerbbb3 = Gerb3;
StringGrid1->Cells[6][5] = FloatToStr(Gerbbb3);
}
else
if (-fydb > Gerb3)
{
Gerbbb3 = -fydb;
StringGrid1->Cells[6][5] = FloatToStr(Gerbbb3);
}
}
Sektorb3 = StrToFloat(StringGrid1->Cells[10][5]);
Kuvb3 =  Gerbbb3 * Alb3 * Sektorb3;
StringGrid1->Cells[7][5] = FloatToStr(Kuvb3);

Sektorb3 = StrToFloat(StringGrid1->Cells[10][5]);
MomKb3 = (TopMesb - Mesb3) * Sektorb3;
StringGrid1->Cells[8][5] = FloatToStr(MomKb3);

Momb3 =  Kuvb3 * MomKb3;
StringGrid1->Cells[9][5] = FloatToStr(Momb3);

Mesb4 = StrToFloat(StringGrid1->Cells[2][6]);
Alb4 = StrToFloat(StringGrid1->Cells[3][6]);

Sektorb4 = StrToFloat(StringGrid1->Cells[10][6]);
Gerb4 = (1-(Mesb4/Cb)) * 6 * Sektorb4;
StringGrid1->Cells[4][6] = FloatToStr(Gerb4);

Gerb4 = StrToFloat(StringGrid1->Cells[4][6]);
if (Gerb4 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb4)
{
Gerbbb4 = fydb;
StringGrid1->Cells[6][6] = FloatToStr(Gerbbb4);
}
else
if (fydb > Gerb4)
{
Gerbbb4 = Gerb4;
StringGrid1->Cells[6][6] = FloatToStr(Gerbbb4);
}
}
else
if (Gerb4 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb4)
{
Gerbbb4 = Gerb4;
StringGrid1->Cells[6][6] = FloatToStr(Gerbbb4);
}
else
if (-fydb > Gerb4)
{
Gerbbb4 = -fydb;
StringGrid1->Cells[6][6] = FloatToStr(Gerbbb4);
}
}
Sektorb4 = StrToFloat(StringGrid1->Cells[10][6]);
Kuvb4 =  Gerbbb4 * Alb4 * Sektorb4;
StringGrid1->Cells[7][6] = FloatToStr(Kuvb4);

Sektorb4 = StrToFloat(StringGrid1->Cells[10][6]);
MomKb4 = (TopMesb - Mesb4) * Sektorb4;
StringGrid1->Cells[8][6] = FloatToStr(MomKb4);

Momb4 =  Kuvb4 * MomKb4;
StringGrid1->Cells[9][6] = FloatToStr(Momb4);

Mesb5 = StrToFloat(StringGrid1->Cells[2][7]);
Alb5 = StrToFloat(StringGrid1->Cells[3][7]);

Sektorb5 = StrToFloat(StringGrid1->Cells[10][7]);
Gerb5 = (1-(Mesb5/Cb)) * 6 * Sektorb5;
StringGrid1->Cells[4][7] = FloatToStr(Gerb5);

Gerb5 = StrToFloat(StringGrid1->Cells[4][7]);
if (Gerb5 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb5)
{
Gerbbb5 = fydb;
StringGrid1->Cells[6][7] = FloatToStr(Gerbbb5);
}
else
if (fydb > Gerb5)
{
Gerbbb5 = Gerb5;
StringGrid1->Cells[6][7] = FloatToStr(Gerbbb5);
}
}
else
if (Gerb5 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb5)
{
Gerbbb5 = Gerb5;
StringGrid1->Cells[6][7] = FloatToStr(Gerbbb5);
}
else
if (-fydb > Gerb5)
{
Gerbbb5 = -fydb;
StringGrid1->Cells[6][7] = FloatToStr(Gerbbb5);
}
}
Sektorb5 = StrToFloat(StringGrid1->Cells[10][7]);
Kuvb5 =  Gerbbb5 * Alb5 * Sektorb5;
StringGrid1->Cells[7][7] = FloatToStr(Kuvb5);

Sektorb5 = StrToFloat(StringGrid1->Cells[10][7]);
MomKb5 = (TopMesb - Mesb5) * Sektorb5;
StringGrid1->Cells[8][7] = FloatToStr(MomKb5);

Momb5 =  Kuvb5 * MomKb5;
StringGrid1->Cells[9][7] = FloatToStr(Momb5);

Mesb6 = StrToFloat(StringGrid1->Cells[2][8]);
Alb6 = StrToFloat(StringGrid1->Cells[3][8]);

Sektorb6 = StrToFloat(StringGrid1->Cells[10][8]);
Gerb6 = (1-(Mesb6/Cb)) * 6 * Sektorb6;
StringGrid1->Cells[4][8] = FloatToStr(Gerb6);

Gerb6 = StrToFloat(StringGrid1->Cells[4][8]);
if (Gerb6 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb6)
{
Gerbbb6 = fydb;
StringGrid1->Cells[6][8] = FloatToStr(Gerbbb6);
}
else
if (fydb > Gerb6)
{
Gerbbb6 = Gerb6;
StringGrid1->Cells[6][8] = FloatToStr(Gerbbb6);
}
}
else
if (Gerb6 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb6)
{
Gerbbb6 = Gerb6;
StringGrid1->Cells[6][8] = FloatToStr(Gerbbb6);
}
else
if (-fydb > Gerb6)
{
Gerbbb6 = -fydb;
StringGrid1->Cells[6][8] = FloatToStr(Gerbbb6);
}
}
Sektorb6 = StrToFloat(StringGrid1->Cells[10][8]);
Kuvb6 =  Gerbbb6 * Alb6 * Sektorb6;
StringGrid1->Cells[7][8] = FloatToStr(Kuvb6);

Sektorb6 = StrToFloat(StringGrid1->Cells[10][8]);
MomKb6 = (TopMesb - Mesb6) * Sektorb6;
StringGrid1->Cells[8][8] = FloatToStr(MomKb6);

Momb6 =  Kuvb6 * MomKb6;
StringGrid1->Cells[9][8] = FloatToStr(Momb6);

Mesb7 = StrToFloat(StringGrid1->Cells[2][9]);
Alb7 = StrToFloat(StringGrid1->Cells[3][9]);

Sektorb7 = StrToFloat(StringGrid1->Cells[10][9]);
Gerb7 = (1-(Mesb7/Cb)) * 6 * Sektorb7;
StringGrid1->Cells[4][9] = FloatToStr(Gerb7);

Gerb7 = StrToFloat(StringGrid1->Cells[4][9]);
if (Gerb7 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb7)
{
Gerbbb7 = fydb;
StringGrid1->Cells[6][9] = FloatToStr(Gerbbb7);
}
else
if (fydb > Gerb7)
{
Gerbbb7 = Gerb7;
StringGrid1->Cells[6][9] = FloatToStr(Gerbbb7);
}
}
else
if (Gerb7 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb7)
{
Gerbbb7 = Gerb7;
StringGrid1->Cells[6][9] = FloatToStr(Gerbbb7);
}
else
if (-fydb > Gerb7)
{
Gerbbb7 = -fydb;
StringGrid1->Cells[6][9] = FloatToStr(Gerbbb7);
}
}
Sektorb7 = StrToFloat(StringGrid1->Cells[10][9]);
Kuvb7 =  Gerbbb7 * Alb7 * Sektorb7;
StringGrid1->Cells[7][9] = FloatToStr(Kuvb7);

Sektorb7 = StrToFloat(StringGrid1->Cells[10][9]);
MomKb7 = (TopMesb - Mesb7) * Sektorb7;
StringGrid1->Cells[8][9] = FloatToStr(MomKb7);

Momb7 =  Kuvb7 * MomKb7;
StringGrid1->Cells[9][9] = FloatToStr(Momb7);

Mesb8 = StrToFloat(StringGrid1->Cells[2][10]);
Alb8 = StrToFloat(StringGrid1->Cells[3][10]);

Sektorb8 = StrToFloat(StringGrid1->Cells[10][10]);
Gerb8 = (1-(Mesb8/Cb)) * 6 * Sektorb8;
StringGrid1->Cells[4][10] = FloatToStr(Gerb8);

Gerb8 = StrToFloat(StringGrid1->Cells[4][10]);
if (Gerb8 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb8)
{
Gerbbb8 = fydb;
StringGrid1->Cells[6][10] = FloatToStr(Gerbbb8);
}
else
if (fydb > Gerb8)
{
Gerbbb8 = Gerb8;
StringGrid1->Cells[6][10] = FloatToStr(Gerbbb8);
}
}
else
if (Gerb8 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb8)
{
Gerbbb8 = Gerb8;
StringGrid1->Cells[6][10] = FloatToStr(Gerbbb8);
}
else
if (-fydb > Gerb8)
{
Gerbbb8 = -fydb;
StringGrid1->Cells[6][10] = FloatToStr(Gerbbb8);
}
}
Sektorb8 = StrToFloat(StringGrid1->Cells[10][10]);
Kuvb8 =  Gerbbb8 * Alb8 * Sektorb8;
StringGrid1->Cells[7][10] = FloatToStr(Kuvb8);

Sektorb8 = StrToFloat(StringGrid1->Cells[10][10]);
MomKb8 = (TopMesb - Mesb8) * Sektorb8;
StringGrid1->Cells[8][10] = FloatToStr(MomKb8);

Momb8 =  Kuvb8 * MomKb8;
StringGrid1->Cells[9][10] = FloatToStr(Momb8);

Mesb9 = StrToFloat(StringGrid1->Cells[2][11]);
Alb9 = StrToFloat(StringGrid1->Cells[3][11]);

Sektorb9 = StrToFloat(StringGrid1->Cells[10][11]);
Gerb9 = (1-(Mesb9/Cb)) * 6 * Sektorb9;
StringGrid1->Cells[4][11] = FloatToStr(Gerb9);

Gerb9 = StrToFloat(StringGrid1->Cells[4][11]);
if (Gerb9 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb9)
{
Gerbbb9 = fydb;
StringGrid1->Cells[6][11] = FloatToStr(Gerbbb9);
}
else
if (fydb > Gerb9)
{
Gerbbb9 = Gerb9;
StringGrid1->Cells[6][11] = FloatToStr(Gerbbb9);
}
}
else
if (Gerb9 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb9)
{
Gerbbb9 = Gerb9;
StringGrid1->Cells[6][11] = FloatToStr(Gerbbb9);
}
else
if (-fydb > Gerb9)
{
Gerbbb9 = -fydb;
StringGrid1->Cells[6][11] = FloatToStr(Gerbbb9);
}
}
Sektorb9 = StrToFloat(StringGrid1->Cells[10][11]);
Kuvb9 =  Gerbbb9 * Alb9 * Sektorb9;
StringGrid1->Cells[7][11] = FloatToStr(Kuvb9);

Sektorb9 = StrToFloat(StringGrid1->Cells[10][11]);
MomKb9 = (TopMesb - Mesb9) * Sektorb9;
StringGrid1->Cells[8][11] = FloatToStr(MomKb9);

Momb9 =  Kuvb9 * MomKb9;
StringGrid1->Cells[9][11] = FloatToStr(Momb9);

Mesb10 = StrToFloat(StringGrid1->Cells[2][12]);
Alb10 = StrToFloat(StringGrid1->Cells[3][12]);

Sektorb10 = StrToFloat(StringGrid1->Cells[10][12]);
Gerb10 = (1-(Mesb10/Cb)) * 6 * Sektorb10;
StringGrid1->Cells[4][12] = FloatToStr(Gerb10);

Gerb10 = StrToFloat(StringGrid1->Cells[4][12]);
if (Gerb10 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb10)
{
Gerbbb10 = fydb;
StringGrid1->Cells[6][12] = FloatToStr(Gerbbb10);
}
else
if (fydb > Gerb10)
{
Gerbbb10 = Gerb10;
StringGrid1->Cells[6][12] = FloatToStr(Gerbbb10);
}
}
else
if (Gerb10 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb10)
{
Gerbbb10 = Gerb10;
StringGrid1->Cells[6][12] = FloatToStr(Gerbbb10);
}
else
if (-fydb > Gerb10)
{
Gerbbb10 = -fydb;
StringGrid1->Cells[6][12] = FloatToStr(Gerbbb10);
}
}
Sektorb10 = StrToFloat(StringGrid1->Cells[10][12]);
Kuvb10 =  Gerbbb10 * Alb10 * Sektorb10;
StringGrid1->Cells[7][12] = FloatToStr(Kuvb10);

Sektorb10 = StrToFloat(StringGrid1->Cells[10][12]);
MomKb10 = (TopMesb - Mesb10) * Sektorb10;
StringGrid1->Cells[8][12] = FloatToStr(MomKb10);

Momb10 =  Kuvb10 * MomKb10;
StringGrid1->Cells[9][12] = FloatToStr(Momb10);

Mesb11 = StrToFloat(StringGrid1->Cells[2][13]);
Alb11 = StrToFloat(StringGrid1->Cells[3][13]);

Sektorb11 = StrToFloat(StringGrid1->Cells[10][13]);
Gerb11 = (1-(Mesb11/Cb)) * 6 * Sektorb11;
StringGrid1->Cells[4][13] = FloatToStr(Gerb11);

Gerb11 = StrToFloat(StringGrid1->Cells[4][13]);
if (Gerb11 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb11)
{
Gerbbb11 = fydb;
StringGrid1->Cells[6][13] = FloatToStr(Gerbbb11);
}
else
if (fydb > Gerb11)
{
Gerbbb11 = Gerb11;
StringGrid1->Cells[6][13] = FloatToStr(Gerbbb11);
}
}
else
if (Gerb11 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb11)
{
Gerbbb11 = Gerb11;
StringGrid1->Cells[6][13] = FloatToStr(Gerbbb11);
}
else
if (-fydb > Gerb11)
{
Gerbbb11 = -fydb;
StringGrid1->Cells[6][13] = FloatToStr(Gerbbb11);
}
}
Sektorb11 = StrToFloat(StringGrid1->Cells[10][13]);
Kuvb11 =  Gerbbb11 * Alb11 * Sektorb11;
StringGrid1->Cells[7][13] = FloatToStr(Kuvb11);

Sektorb11 = StrToFloat(StringGrid1->Cells[10][13]);
MomKb11 = (TopMesb - Mesb11) * Sektorb11;
StringGrid1->Cells[8][13] = FloatToStr(MomKb11);

Momb11 =  Kuvb11 * MomKb11;
StringGrid1->Cells[9][13] = FloatToStr(Momb11);

Mesb12 = StrToFloat(StringGrid1->Cells[2][14]);
Alb12 = StrToFloat(StringGrid1->Cells[3][14]);

Sektorb12 = StrToFloat(StringGrid1->Cells[10][14]);
Gerb12 = (1-(Mesb12/Cb)) * 6 * Sektorb12;
StringGrid1->Cells[4][14] = FloatToStr(Gerb12);

Gerb12 = StrToFloat(StringGrid1->Cells[4][14]);
if (Gerb12 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb12)
{
Gerbbb12 = fydb;
StringGrid1->Cells[6][14] = FloatToStr(Gerbbb12);
}
else
if (fydb > Gerb12)
{
Gerbbb12 = Gerb12;
StringGrid1->Cells[6][14] = FloatToStr(Gerbbb12);
}
}
else
if (Gerb12 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb12)
{
Gerbbb12 = Gerb12;
StringGrid1->Cells[6][14] = FloatToStr(Gerbbb12);
}
else
if (-fydb > Gerb12)
{
Gerbbb12 = -fydb;
StringGrid1->Cells[6][14] = FloatToStr(Gerbbb12);
}
}
Sektorb12 = StrToFloat(StringGrid1->Cells[10][14]);
Kuvb12 =  Gerbbb12 * Alb12 * Sektorb12;
StringGrid1->Cells[7][14] = FloatToStr(Kuvb12);

Sektorb12 = StrToFloat(StringGrid1->Cells[10][14]);
MomKb12 = (TopMesb - Mesb12) * Sektorb12;
StringGrid1->Cells[8][14] = FloatToStr(MomKb12);

Momb12 =  Kuvb12 * MomKb12;
StringGrid1->Cells[9][14] = FloatToStr(Momb12);

Mesb13 = StrToFloat(StringGrid1->Cells[2][15]);
Alb13 = StrToFloat(StringGrid1->Cells[3][15]);

Sektorb13 = StrToFloat(StringGrid1->Cells[10][15]);
Gerb13 = (1-(Mesb13/Cb)) * 6 * Sektorb13;
StringGrid1->Cells[4][15] = FloatToStr(Gerb13);

Gerb13 = StrToFloat(StringGrid1->Cells[4][15]);
if (Gerb13 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb13)
{
Gerbbb13 = fydb;
StringGrid1->Cells[6][15] = FloatToStr(Gerbbb13);
}
else
if (fydb > Gerb13)
{
Gerbbb13 = Gerb13;
StringGrid1->Cells[6][15] = FloatToStr(Gerbbb13);
}
}
else
if (Gerb13 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb13)
{
Gerbbb13 = Gerb13;
StringGrid1->Cells[6][15] = FloatToStr(Gerbbb13);
}
else
if (-fydb > Gerb13)
{
Gerbbb13 = -fydb;
StringGrid1->Cells[6][15] = FloatToStr(Gerbbb13);
}
}
Sektorb13 = StrToFloat(StringGrid1->Cells[10][15]);
Kuvb13 =  Gerbbb13 * Alb13 * Sektorb13;
StringGrid1->Cells[7][15] = FloatToStr(Kuvb13);

Sektorb13 = StrToFloat(StringGrid1->Cells[10][15]);
MomKb13 = (TopMesb - Mesb13) * Sektorb13;
StringGrid1->Cells[8][15] = FloatToStr(MomKb13);

Momb13 =  Kuvb13 * MomKb13;
StringGrid1->Cells[9][15] = FloatToStr(Momb13);

Mesb14 = StrToFloat(StringGrid1->Cells[2][16]);
Alb14 = StrToFloat(StringGrid1->Cells[3][16]);

Sektorb14 = StrToFloat(StringGrid1->Cells[10][16]);
Gerb14 = (1-(Mesb14/Cb)) * 6 * Sektorb14;
StringGrid1->Cells[4][16] = FloatToStr(Gerb14);

Gerb14 = StrToFloat(StringGrid1->Cells[4][16]);
if (Gerb14 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb14)
{
Gerbbb14 = fydb;
StringGrid1->Cells[6][16] = FloatToStr(Gerbbb14);
}
else
if (fydb > Gerb14)
{
Gerbbb14 = Gerb14;
StringGrid1->Cells[6][16] = FloatToStr(Gerbbb14);
}
}
else
if (Gerb14 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb14)
{
Gerbbb14 = Gerb14;
StringGrid1->Cells[6][16] = FloatToStr(Gerbbb14);
}
else
if (-fydb > Gerb14)
{
Gerbbb14 = -fydb;
StringGrid1->Cells[6][16] = FloatToStr(Gerbbb14);
}
}
Sektorb14 = StrToFloat(StringGrid1->Cells[10][16]);
Kuvb14 =  Gerbbb14 * Alb14 * Sektorb14;
StringGrid1->Cells[7][16] = FloatToStr(Kuvb14);

Sektorb14 = StrToFloat(StringGrid1->Cells[10][16]);
MomKb14 = (TopMesb - Mesb14) * Sektorb14;
StringGrid1->Cells[8][16] = FloatToStr(MomKb14);

Momb14 =  Kuvb14 * MomKb14;
StringGrid1->Cells[9][16] = FloatToStr(Momb14);

Mesb15 = StrToFloat(StringGrid1->Cells[2][17]);
Alb15 = StrToFloat(StringGrid1->Cells[3][17]);

Sektorb15 = StrToFloat(StringGrid1->Cells[10][17]);
Gerb15 = (1-(Mesb15/Cb)) * 6 * Sektorb15;
StringGrid1->Cells[4][17] = FloatToStr(Gerb15);

Gerb15 = StrToFloat(StringGrid1->Cells[4][17]);
if (Gerb15 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb15)
{
Gerbbb15 = fydb;
StringGrid1->Cells[6][17] = FloatToStr(Gerbbb15);
}
else
if (fydb > Gerb15)
{
Gerbbb15 = Gerb15;
StringGrid1->Cells[6][17] = FloatToStr(Gerbbb15);
}
}
else
if (Gerb15 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb15)
{
Gerbbb15 = Gerb15;
StringGrid1->Cells[6][17] = FloatToStr(Gerbbb15);
}
else
if (-fydb > Gerb15)
{
Gerbbb15 = -fydb;
StringGrid1->Cells[6][17] = FloatToStr(Gerbbb15);
}
}
Sektorb15 = StrToFloat(StringGrid1->Cells[10][17]);
Kuvb15 =  Gerbbb15 * Alb15 * Sektorb15;
StringGrid1->Cells[7][17] = FloatToStr(Kuvb15);

Sektorb15 = StrToFloat(StringGrid1->Cells[10][17]);
MomKb15 = (TopMesb - Mesb15) * Sektorb15;
StringGrid1->Cells[8][17] = FloatToStr(MomKb15);

Momb15 =  Kuvb15 * MomKb15;
StringGrid1->Cells[9][17] = FloatToStr(Momb15);

Mesb16 = StrToFloat(StringGrid1->Cells[2][18]);
Alb16 = StrToFloat(StringGrid1->Cells[3][18]);

Sektorb16 = StrToFloat(StringGrid1->Cells[10][18]);
Gerb16 = (1-(Mesb16/Cb)) * 6 * Sektorb16;
StringGrid1->Cells[4][18] = FloatToStr(Gerb16);

Gerb16 = StrToFloat(StringGrid1->Cells[4][18]);
if (Gerb16 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb16)
{
Gerbbb16 = fydb;
StringGrid1->Cells[6][18] = FloatToStr(Gerbbb16);
}
else
if (fydb > Gerb16)
{
Gerbbb16 = Gerb16;
StringGrid1->Cells[6][18] = FloatToStr(Gerbbb16);
}
}
else
if (Gerb16 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb16)
{
Gerbbb16 = Gerb16;
StringGrid1->Cells[6][18] = FloatToStr(Gerbbb16);
}
else
if (-fydb > Gerb16)
{
Gerbbb16 = -fydb;
StringGrid1->Cells[6][18] = FloatToStr(Gerbbb16);
}
}
Sektorb16 = StrToFloat(StringGrid1->Cells[10][18]);
Kuvb16 =  Gerbbb16 * Alb16 * Sektorb16;
StringGrid1->Cells[7][18] = FloatToStr(Kuvb16);

Sektorb16 = StrToFloat(StringGrid1->Cells[10][18]);
MomKb16 = (TopMesb - Mesb16) * Sektorb16;
StringGrid1->Cells[8][18] = FloatToStr(MomKb16);

Momb16 =  Kuvb16 * MomKb16;
StringGrid1->Cells[9][18] = FloatToStr(Momb16);

Mesb17 = StrToFloat(StringGrid1->Cells[2][19]);
Alb17 = StrToFloat(StringGrid1->Cells[3][19]);

Sektorb17 = StrToFloat(StringGrid1->Cells[10][19]);
Gerb17 = (1-(Mesb17/Cb)) * 6 * Sektorb17;
StringGrid1->Cells[4][19] = FloatToStr(Gerb17);

Gerb17 = StrToFloat(StringGrid1->Cells[4][19]);
if (Gerb17 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb17)
{
Gerbbb17 = fydb;
StringGrid1->Cells[6][19] = FloatToStr(Gerbbb17);
}
else
if (fydb > Gerb17)
{
Gerbbb17 = Gerb17;
StringGrid1->Cells[6][19] = FloatToStr(Gerbbb17);
}
}
else
if (Gerb17 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb17)
{
Gerbbb17 = Gerb17;
StringGrid1->Cells[6][19] = FloatToStr(Gerbbb17);
}
else
if (-fydb > Gerb17)
{
Gerbbb17 = -fydb;
StringGrid1->Cells[6][19] = FloatToStr(Gerbbb17);
}
}
Sektorb17 = StrToFloat(StringGrid1->Cells[10][19]);
Kuvb17 =  Gerbbb17 * Alb17 * Sektorb17;
StringGrid1->Cells[7][19] = FloatToStr(Kuvb17);

Sektorb17 = StrToFloat(StringGrid1->Cells[10][19]);
MomKb17 = (TopMesb - Mesb17) * Sektorb17;
StringGrid1->Cells[8][19] = FloatToStr(MomKb17);

Momb17 =  Kuvb17 * MomKb17;
StringGrid1->Cells[9][19] = FloatToStr(Momb17);

Mesb18 = StrToFloat(StringGrid1->Cells[2][20]);
Alb18 = StrToFloat(StringGrid1->Cells[3][20]);

Sektorb18 = StrToFloat(StringGrid1->Cells[10][20]);
Gerb18 = (1-(Mesb18/Cb)) * 6 * Sektorb18;
StringGrid1->Cells[4][20] = FloatToStr(Gerb18);

Gerb18 = StrToFloat(StringGrid1->Cells[4][20]);
if (Gerb18 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb18)
{
Gerbbb18 = fydb;
StringGrid1->Cells[6][20] = FloatToStr(Gerbbb18);
}
else
if (fydb > Gerb18)
{
Gerbbb18 = Gerb18;
StringGrid1->Cells[6][20] = FloatToStr(Gerbbb18);
}
}
else
if (Gerb18 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb18)
{
Gerbbb18 = Gerb18;
StringGrid1->Cells[6][20] = FloatToStr(Gerbbb18);
}
else
if (-fydb > Gerb18)
{
Gerbbb18 = -fydb;
StringGrid1->Cells[6][20] = FloatToStr(Gerbbb18);
}
}
Sektorb18 = StrToFloat(StringGrid1->Cells[10][20]);
Kuvb18 =  Gerbbb18 * Alb18 * Sektorb18;
StringGrid1->Cells[7][20] = FloatToStr(Kuvb18);

Sektorb18 = StrToFloat(StringGrid1->Cells[10][20]);
MomKb18 = (TopMesb - Mesb18) * Sektorb18;
StringGrid1->Cells[8][20] = FloatToStr(MomKb18);

Momb18 =  Kuvb18 * MomKb18;
StringGrid1->Cells[9][20] = FloatToStr(Momb18);

Mesb19 = StrToFloat(StringGrid1->Cells[2][21]);
Alb19 = StrToFloat(StringGrid1->Cells[3][21]);

Sektorb19 = StrToFloat(StringGrid1->Cells[10][21]);
Gerb19 = (1-(Mesb19/Cb)) * 6 * Sektorb19;
StringGrid1->Cells[4][21] = FloatToStr(Gerb19);

Gerb19 = StrToFloat(StringGrid1->Cells[4][21]);
if (Gerb19 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb19)
{
Gerbbb19 = fydb;
StringGrid1->Cells[6][21] = FloatToStr(Gerbbb19);
}
else
if (fydb > Gerb19)
{
Gerbbb19 = Gerb19;
StringGrid1->Cells[6][21] = FloatToStr(Gerbbb19);
}
}
else
if (Gerb19 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb19)
{
Gerbbb19 = Gerb19;
StringGrid1->Cells[6][21] = FloatToStr(Gerbbb19);
}
else
if (-fydb > Gerb19)
{
Gerbbb19 = -fydb;
StringGrid1->Cells[6][21] = FloatToStr(Gerbbb19);
}
}
Sektorb19 = StrToFloat(StringGrid1->Cells[10][21]);
Kuvb19 =  Gerbbb19 * Alb19 * Sektorb19;
StringGrid1->Cells[7][21] = FloatToStr(Kuvb19);

Sektorb19 = StrToFloat(StringGrid1->Cells[10][21]);
MomKb19 = (TopMesb - Mesb19) * Sektorb19;
StringGrid1->Cells[8][21] = FloatToStr(MomKb19);

Momb19 =  Kuvb19 * MomKb19;
StringGrid1->Cells[9][21] = FloatToStr(Momb19);

Mesb20 = StrToFloat(StringGrid1->Cells[2][22]);
Alb20 = StrToFloat(StringGrid1->Cells[3][22]);

Sektorb20 = StrToFloat(StringGrid1->Cells[10][22]);
Gerb20 = (1-(Mesb20/Cb)) * 6 * Sektorb20;
StringGrid1->Cells[4][22] = FloatToStr(Gerb20);

Gerb20 = StrToFloat(StringGrid1->Cells[4][22]);
if (Gerb20 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb20)
{
Gerbbb20 = fydb;
StringGrid1->Cells[6][22] = FloatToStr(Gerbbb20);
}
else
if (fydb > Gerb20)
{
Gerbbb20 = Gerb20;
StringGrid1->Cells[6][22] = FloatToStr(Gerbbb20);
}
}
else
if (Gerb20 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb20)
{
Gerbbb20 = Gerb20;
StringGrid1->Cells[6][22] = FloatToStr(Gerbbb20);
}
else
if (-fydb > Gerb20)
{
Gerbbb20 = -fydb;
StringGrid1->Cells[6][22] = FloatToStr(Gerbbb20);
}
}
Sektorb20 = StrToFloat(StringGrid1->Cells[10][22]);
Kuvb20 =  Gerbbb20 * Alb20 * Sektorb20;
StringGrid1->Cells[7][22] = FloatToStr(Kuvb20);

Sektorb20 = StrToFloat(StringGrid1->Cells[10][22]);
MomKb20 = (TopMesb - Mesb20) * Sektorb20;
StringGrid1->Cells[8][22] = FloatToStr(MomKb20);

Momb20 =  Kuvb20 * MomKb20;
StringGrid1->Cells[9][22] = FloatToStr(Momb20);

Mesb21 = StrToFloat(StringGrid1->Cells[2][23]);
Alb21 = StrToFloat(StringGrid1->Cells[3][23]);

Sektorb21 = StrToFloat(StringGrid1->Cells[10][23]);
Gerb21 = (1-(Mesb21/Cb)) * 6 * Sektorb21;
StringGrid1->Cells[4][23] = FloatToStr(Gerb21);

Gerb21 = StrToFloat(StringGrid1->Cells[4][23]);
if (Gerb21 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb21)
{
Gerbbb21 = fydb;
StringGrid1->Cells[6][23] = FloatToStr(Gerbbb21);
}
else
if (fydb > Gerb21)
{
Gerbbb21 = Gerb21;
StringGrid1->Cells[6][23] = FloatToStr(Gerbbb21);
}
}
else
if (Gerb21 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb21)
{
Gerbbb21 = Gerb21;
StringGrid1->Cells[6][23] = FloatToStr(Gerbbb21);
}
else
if (-fydb > Gerb21)
{
Gerbbb21 = -fydb;
StringGrid1->Cells[6][23] = FloatToStr(Gerbbb21);
}
}
Sektorb21 = StrToFloat(StringGrid1->Cells[10][23]);
Kuvb21 =  Gerbbb21 * Alb21 * Sektorb21;
StringGrid1->Cells[7][23] = FloatToStr(Kuvb21);

Sektorb21 = StrToFloat(StringGrid1->Cells[10][23]);
MomKb21 = (TopMesb - Mesb21) * Sektorb21;
StringGrid1->Cells[8][23] = FloatToStr(MomKb21);

Momb21 =  Kuvb21 * MomKb21;
StringGrid1->Cells[9][23] = FloatToStr(Momb21);

Mesb22 = StrToFloat(StringGrid1->Cells[2][24]);
Alb22 = StrToFloat(StringGrid1->Cells[3][24]);

Sektorb22 = StrToFloat(StringGrid1->Cells[10][24]);
Gerb22 = (1-(Mesb22/Cb)) * 6 * Sektorb22;
StringGrid1->Cells[4][24] = FloatToStr(Gerb22);

Gerb22 = StrToFloat(StringGrid1->Cells[4][24]);
if (Gerb22 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb22)
{
Gerbbb22 = fydb;
StringGrid1->Cells[6][24] = FloatToStr(Gerbbb22);
}
else
if (fydb > Gerb22)
{
Gerbbb22 = Gerb22;
StringGrid1->Cells[6][24] = FloatToStr(Gerbbb22);
}
}
else
if (Gerb22 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb22)
{
Gerbbb22 = Gerb22;
StringGrid1->Cells[6][24] = FloatToStr(Gerbbb22);
}
else
if (-fydb > Gerb22)
{
Gerbbb22 = -fydb;
StringGrid1->Cells[6][24] = FloatToStr(Gerbbb22);
}
}
Sektorb22 = StrToFloat(StringGrid1->Cells[10][24]);
Kuvb22 =  Gerbbb22 * Alb22 * Sektorb22;
StringGrid1->Cells[7][24] = FloatToStr(Kuvb22);

Sektorb22 = StrToFloat(StringGrid1->Cells[10][24]);
MomKb22 = (TopMesb - Mesb22) * Sektorb22;
StringGrid1->Cells[8][24] = FloatToStr(MomKb22);

Momb22 =  Kuvb22 * MomKb22;
StringGrid1->Cells[9][24] = FloatToStr(Momb22);

Mesb23 = StrToFloat(StringGrid1->Cells[2][25]);
Alb23 = StrToFloat(StringGrid1->Cells[3][25]);

Sektorb23 = StrToFloat(StringGrid1->Cells[10][25]);
Gerb23 = (1-(Mesb23/Cb)) * 6 * Sektorb23;
StringGrid1->Cells[4][25] = FloatToStr(Gerb23);

Gerb23 = StrToFloat(StringGrid1->Cells[4][25]);
if (Gerb23 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb23)
{
Gerbbb23 = fydb;
StringGrid1->Cells[6][25] = FloatToStr(Gerbbb23);
}
else
if (fydb > Gerb23)
{
Gerbbb23 = Gerb23;
StringGrid1->Cells[6][25] = FloatToStr(Gerbbb23);
}
}
else
if (Gerb23 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb23)
{
Gerbbb23 = Gerb23;
StringGrid1->Cells[6][25] = FloatToStr(Gerbbb23);
}
else
if (-fydb > Gerb23)
{
Gerbbb23 = -fydb;
StringGrid1->Cells[6][25] = FloatToStr(Gerbbb23);
}
}
Sektorb23 = StrToFloat(StringGrid1->Cells[10][25]);
Kuvb23 =  Gerbbb23 * Alb23 * Sektorb23;
StringGrid1->Cells[7][25] = FloatToStr(Kuvb23);

Sektorb23 = StrToFloat(StringGrid1->Cells[10][25]);
MomKb23 = (TopMesb - Mesb23) * Sektorb23;
StringGrid1->Cells[8][25] = FloatToStr(MomKb23);

Momb23 =  Kuvb23 * MomKb23;
StringGrid1->Cells[9][25] = FloatToStr(Momb23);

Mesb24 = StrToFloat(StringGrid1->Cells[2][26]);
Alb24 = StrToFloat(StringGrid1->Cells[3][26]);

Sektorb24 = StrToFloat(StringGrid1->Cells[10][26]);
Gerb24 = (1-(Mesb24/Cb)) * 6 * Sektorb24;
StringGrid1->Cells[4][26] = FloatToStr(Gerb24);

Gerb24 = StrToFloat(StringGrid1->Cells[4][26]);
if (Gerb24 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb24)
{
Gerbbb24 = fydb;
StringGrid1->Cells[6][26] = FloatToStr(Gerbbb24);
}
else
if (fydb > Gerb24)
{
Gerbbb24 = Gerb24;
StringGrid1->Cells[6][26] = FloatToStr(Gerbbb24);
}
}
else
if (Gerb24 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb24)
{
Gerbbb24 = Gerb24;
StringGrid1->Cells[6][26] = FloatToStr(Gerbbb24);
}
else
if (-fydb > Gerb24)
{
Gerbbb24 = -fydb;
StringGrid1->Cells[6][26] = FloatToStr(Gerbbb24);
}
}
Sektorb24 = StrToFloat(StringGrid1->Cells[10][26]);
Kuvb24 =  Gerbbb24 * Alb24 * Sektorb24;
StringGrid1->Cells[7][26] = FloatToStr(Kuvb24);

Sektorb24 = StrToFloat(StringGrid1->Cells[10][26]);
MomKb24 = (TopMesb - Mesb24) * Sektorb24;
StringGrid1->Cells[8][26] = FloatToStr(MomKb24);

Momb24 =  Kuvb24 * MomKb24;
StringGrid1->Cells[9][26] = FloatToStr(Momb24);

Mesb25 = StrToFloat(StringGrid1->Cells[2][27]);
Alb25 = StrToFloat(StringGrid1->Cells[3][27]);

Sektorb25 = StrToFloat(StringGrid1->Cells[10][27]);
Gerb25 = (1-(Mesb25/Cb)) * 6 * Sektorb25;
StringGrid1->Cells[4][27] = FloatToStr(Gerb25);

Gerb25 = StrToFloat(StringGrid1->Cells[4][27]);
if (Gerb25 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb25)
{
Gerbbb25 = fydb;
StringGrid1->Cells[6][27] = FloatToStr(Gerbbb25);
}
else
if (fydb > Gerb25)
{
Gerbbb25 = Gerb25;
StringGrid1->Cells[6][27] = FloatToStr(Gerbbb25);
}
}
else
if (Gerb25 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb25)
{
Gerbbb25 = Gerb25;
StringGrid1->Cells[6][27] = FloatToStr(Gerbbb25);
}
else
if (-fydb > Gerb25)
{
Gerbbb25 = -fydb;
StringGrid1->Cells[6][27] = FloatToStr(Gerbbb25);
}
}
Sektorb25 = StrToFloat(StringGrid1->Cells[10][27]);
Kuvb25 =  Gerbbb25 * Alb25 * Sektorb25;
StringGrid1->Cells[7][27] = FloatToStr(Kuvb25);

Sektorb25 = StrToFloat(StringGrid1->Cells[10][27]);
MomKb25 = (TopMesb - Mesb25) * Sektorb25;
StringGrid1->Cells[8][27] = FloatToStr(MomKb25);

Momb25 =  Kuvb25 * MomKb25;
StringGrid1->Cells[9][27] = FloatToStr(Momb25);

Mesb26 = StrToFloat(StringGrid1->Cells[2][28]);
Alb26 = StrToFloat(StringGrid1->Cells[3][28]);

Sektorb26 = StrToFloat(StringGrid1->Cells[10][28]);
Gerb26 = (1-(Mesb26/Cb)) * 6 * Sektorb26;
StringGrid1->Cells[4][28] = FloatToStr(Gerb26);

Gerb26 = StrToFloat(StringGrid1->Cells[4][28]);
if (Gerb26 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb26)
{
Gerbbb26 = fydb;
StringGrid1->Cells[6][28] = FloatToStr(Gerbbb26);
}
else
if (fydb > Gerb26)
{
Gerbbb26 = Gerb26;
StringGrid1->Cells[6][28] = FloatToStr(Gerbbb26);
}
}
else
if (Gerb26 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb26)
{
Gerbbb26 = Gerb26;
StringGrid1->Cells[6][28] = FloatToStr(Gerbbb26);
}
else
if (-fydb > Gerb26)
{
Gerbbb26 = -fydb;
StringGrid1->Cells[6][28] = FloatToStr(Gerbbb26);
}
}
Sektorb26 = StrToFloat(StringGrid1->Cells[10][28]);
Kuvb26 =  Gerbbb26 * Alb26 * Sektorb26;
StringGrid1->Cells[7][28] = FloatToStr(Kuvb26);

Sektorb26 = StrToFloat(StringGrid1->Cells[10][28]);
MomKb26 = (TopMesb - Mesb26) * Sektorb26;
StringGrid1->Cells[8][28] = FloatToStr(MomKb26);

Momb26 =  Kuvb26 * MomKb26;
StringGrid1->Cells[9][28] = FloatToStr(Momb26);

Mesb27 = StrToFloat(StringGrid1->Cells[2][29]);
Alb27 = StrToFloat(StringGrid1->Cells[3][29]);

Sektorb27 = StrToFloat(StringGrid1->Cells[10][29]);
Gerb27 = (1-(Mesb27/Cb)) * 6 * Sektorb27;
StringGrid1->Cells[4][29] = FloatToStr(Gerb27);

Gerb27 = StrToFloat(StringGrid1->Cells[4][29]);
if (Gerb27 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb27)
{
Gerbbb27 = fydb;
StringGrid1->Cells[6][29] = FloatToStr(Gerbbb27);
}
else
if (fydb > Gerb27)
{
Gerbbb27 = Gerb27;
StringGrid1->Cells[6][29] = FloatToStr(Gerbbb27);
}
}
else
if (Gerb27 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb27)
{
Gerbbb27 = Gerb27;
StringGrid1->Cells[6][29] = FloatToStr(Gerbbb27);
}
else
if (-fydb > Gerb27)
{
Gerbbb27 = -fydb;
StringGrid1->Cells[6][29] = FloatToStr(Gerbbb27);
}
}
Sektorb27 = StrToFloat(StringGrid1->Cells[10][29]);
Kuvb27 =  Gerbbb27 * Alb27 * Sektorb27;
StringGrid1->Cells[7][29] = FloatToStr(Kuvb27);

Sektorb27 = StrToFloat(StringGrid1->Cells[10][29]);
MomKb27 = (TopMesb - Mesb27) * Sektorb27;
StringGrid1->Cells[8][29] = FloatToStr(MomKb27);

Momb27 =  Kuvb27 * MomKb27;
StringGrid1->Cells[9][29] = FloatToStr(Momb27);

Mesb28 = StrToFloat(StringGrid1->Cells[2][30]);
Alb28 = StrToFloat(StringGrid1->Cells[3][30]);

Sektorb28 = StrToFloat(StringGrid1->Cells[10][30]);
Gerb28 = (1-(Mesb28/Cb)) * 6 * Sektorb28;
StringGrid1->Cells[4][30] = FloatToStr(Gerb28);

Gerb28 = StrToFloat(StringGrid1->Cells[4][30]);
if (Gerb28 > 0 )
{
fydb = StrToFloat(Edit5->Text);
if (fydb < Gerb28)
{
Gerbbb28 = fydb;
StringGrid1->Cells[6][30] = FloatToStr(Gerbbb28);
}
else
if (fydb > Gerb28)
{
Gerbbb28 = Gerb28;
StringGrid1->Cells[6][30] = FloatToStr(Gerbbb28);
}
}
else
if (Gerb28 < 0 )
{
fydb = StrToFloat(Edit5->Text);
if (-fydb < Gerb28)
{
Gerbbb28 = Gerb28;
StringGrid1->Cells[6][30] = FloatToStr(Gerbbb28);
}
else
if (-fydb > Gerb28)
{
Gerbbb28 = -fydb;
StringGrid1->Cells[6][30] = FloatToStr(Gerbbb28);
}
}
Sektorb28 = StrToFloat(StringGrid1->Cells[10][30]);
Kuvb28 =  Gerbbb28 * Alb28 * Sektorb28;
StringGrid1->Cells[7][30] = FloatToStr(Kuvb28);

Sektorb28 = StrToFloat(StringGrid1->Cells[10][30]);
MomKb28 = (TopMesb - Mesb28) * Sektorb28;
StringGrid1->Cells[8][30] = FloatToStr(MomKb28);

Momb28 =  Kuvb28 * MomKb28;
StringGrid1->Cells[9][30] = FloatToStr(Momb28);


Fcb = KatSay1 * fcdb * (KatSay1 * Cb) * bwb;
Edit6->Text = FloatToStr(Fcb);

Fsib = Kuvb1 + Kuvb2 + Kuvb3 + Kuvb4 + Kuvb5 + Kuvb6 + Kuvb7 + Kuvb8 + Kuvb9 +
 Kuvb10 + Kuvb11 + Kuvb12 + Kuvb13 + Kuvb14 + Kuvb15 + Kuvb16 + Kuvb17 +
 Kuvb18 + Kuvb19 + Kuvb20 + Kuvb21 + Kuvb22 + Kuvb23 + Kuvb24 + Kuvb25 +
 Kuvb26 + Kuvb27 + Kuvb28;
Edit7->Text = FloatToStr(Fsib);

Fxb = Ndb - Fcb - Fsib;
Edit8->Text = FloatToStr(Fxb);


Mrb = ((Fcb * (Maxb - (KatSay2 * Cb))) + (Momb1 + Momb2 + Momb3 + Momb4 + Momb5 +
 Momb6 + Momb7 + Momb8 + Momb9 +
 Momb10 + Momb11 + Momb12 + Momb13 + Momb14 + Momb15 + Momb16 + Momb17 +
 Momb18 + Momb19 + Momb20 + Momb21 + Momb22 + Momb23 + Momb24 + Momb25 +
 Momb26 + Momb27 + Momb28) - (Ndb * (Maxb - Minb)/2))/100;
Edit9->Text = FloatToStr(Mrb);


Mdb = StrToFloat(Edit2->Text);
if (Mrb > Mdb )
{
Edit17->Text = "Kesit Yeterli";
Edit17->Font->Color = clBlue;
Edit17->Color = clWhite;
Edit17->BorderStyle = bsSingle;
Edit17->Enabled = true;
Edit17->ReadOnly = true;
}
else
{
ShowMessage("Uyar�: Kesit yetersiz!");
Edit17->Text = "Kesit Yetersiz";
Edit17->Font->Color = clBlack;
Edit17->Color = clRed;
Edit17->BorderStyle = bsSingle;
Edit17->Enabled = true;
Edit17->ReadOnly = true;
}
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::YazcAyarlar1Click(TObject *Sender)
{
PrinterSetupDialog1->Execute();        
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Birey1Click(TObject *Sender)
{
Birey = new TBirey(this);         
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::MetrajCetveli1Click(TObject *Sender)
{
Hakkedis = new THakkedis(this);         
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::izimEditr1Click(TObject *Sender)
{
Cizim = new TCizim(this);
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Betonarme1Click(TObject *Sender)
{
Betonarme = new TBetonarme(this);         
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Karayolu1Click(TObject *Sender)
{
Karayolu = new TKarayolu(this);
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Hidroloji1Click(TObject *Sender)
{
Hidroloji = new THidroloji(this);
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Kaydet1Click(TObject *Sender)
{
ToolButton3Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Kapat1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::OfficeExpress1Click(TObject *Sender)
{
Application->CreateForm(__classid(TOffice), &Office);
Office->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Xlime1Click(TObject *Sender)
{
Application->CreateForm(__classid(TXlime), &Xlime);
Xlime->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Paint1Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm10), &Form10);
Form10->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Programdank1Click(TObject *Sender)
{
int Kapat;
Kapat = Application->MessageBoxA("Program kapat�ls�n m�?", "Uyar�!", 3);
if (Kapat==6)
      Application->Terminate();
else
      Action = caNone;        
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Klt1Click(TObject *Sender)
{
Application->Minimize();        
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Hesapla1Click(TObject *Sender)
{
Button1Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::KaytlBetonarmeBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBetonoku), &Betonoku);
Betonoku->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::PersonelTantmKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TPkayit), &Pkayit);
Pkayit->ShowModal();         
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::KaynakKart1Click(TObject *Sender)
{
Application->CreateForm(__classid(TKkayit), &Kkayit);
Kkayit->ShowModal();          
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::KaytlMteri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TSkayit), &Skayit);
Skayit->ShowModal();         
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::KaytlMetrajBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TMetrajoku), &Metrajoku);
Metrajoku->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::ConvertB1Click(TObject *Sender)
{
int Cal;
Cal = WinExec("Convertb.exe", 9);
if (Cal==2)
ShowMessage("Program dosyas� bulunamad�.");
if (Cal==3)
ShowMessage("S�r�c� veya klas�r ad� ge�ersiz.");        
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::ListB1Click(TObject *Sender)
{
int kal;
kal = WinExec("Listb.exe", 9);
if (kal==2)
ShowMessage("Program dosyas� bulunamad�.");
if (kal==3)
ShowMessage("S�r�c� veya klas�r ad� ge�ersiz.");          
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Yanyana1Click(TObject *Sender)
{
Form1->Yanyana1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Altalta1Click(TObject *Sender)
{
Form1->Altalta1Click(Sender);        
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::Grupla1Click(TObject *Sender)
{
Form1->Grupla1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::KullanmKlavuzu1Click(TObject *Sender)
{
int Mal;
Mal = WinExec("Help\\klvz.exe", 9);
if (Mal==2)
ShowMessage("Program dosyas� bulunamad�.");
if (Mal==3)
ShowMessage("S�r�c� veya klas�r ad� ge�ersiz.");         
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::TG1Click(TObject *Sender)
{
Application->CreateForm(__classid(TTGinfo), &TGinfo);
TGinfo->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::ProjeBHakknda1Click(TObject *Sender)
{
Application->CreateForm(__classid(TBilgi), &Bilgi);
Bilgi->ShowModal();         
}
//---------------------------------------------------------------------------

void __fastcall TBetonarme::SrmBilgileri1Click(TObject *Sender)
{
Application->CreateForm(__classid(TProduct), &Product);
Product->ShowModal();
}
//---------------------------------------------------------------------------
