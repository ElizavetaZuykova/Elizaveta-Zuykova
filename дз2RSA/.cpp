Шифрование + расшифровка
 
#include <vcl.h>
#pragma hdrstop
 
#include "Unit1.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int p, q, e, n, d, msg, enc;
int gcd (int a, int b)
{
  int c = 0;
  while ( b != 0 )
  {
        c = a % b;
        a = b;
        b = c;
  }
  if ( a < 0 ) return -a; return a;
}
 
int keygen(int p, int q, int &e, int &n, int &d)
{
  int m, x;
  n = p * q;
  m = (p - 1) * (q - 1);
  for ( x = 2; x < m; x++ )
        if ( gcd(m, x) == 1 )
        {
                e = x;
                break;
        }
        if ( x == m )
        {
                return 0;
        }
  for ( x = 1; x; x++ )
        if ( ! ((e * x - 1) % m) )
        {
                d = x;
                break;
        }
        if ( e == d )
        {
                return 0;
        }
  Form1->Memo1->Clear();
  Form1->Memo1->Lines->Add("n = "+String(n));
  Form1->Memo1->Lines->Add("e = "+String(e));
  Form1->Memo1->Lines->Add("d = "+String(d));
  return 1;
}
 
int modpow(int x, int e, int n)
{
  int r = 1;
  while( e > 0 )
  {
        if( (e % 2) == 1 )
        {
                r = (r * x) % n;
        }
        e /= 2;
        x = (x * x) % n;
  }
  return r;
}
 
int encrypt(int msg) { return modpow(msg,e,n); }
int decrypt(int enc) { return modpow(enc,d,n); }
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  if ( Edit1->Text != "" && Edit2->Text != "" )
  {
        p = Edit1->Text.ToInt();
        q = Edit2->Text.ToInt();
        keygen(p, q, e, n, d);
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  if ( Edit3->Text != "" )
  {
        //e = 11; n = 50927;
        msg = Edit3->Text.ToInt();
        Edit4->Text = String(encrypt(msg));
  }
}
void __fastcall TForm1::Button3Click(TObject *Sender)
{
  if ( Edit4->Text != "" )
  {
        //d = 27491; n = 50927;
        enc = Edit4->Text.ToInt();
        Edit3->Text = String(decrypt(enc));
  }
}
void __fastcall TForm1::Edit1KeyPress(TObject *Sender, char &Key)
{
        if ( !isdigit(Key) && Key != VK_BACK) Key = 0;
}
void __fastcall TForm1::Edit2KeyPress(TObject *Sender, char &Key)
{
        if ( !isdigit(Key) && Key != VK_BACK) Key = 0;
}
void __fastcall TForm1::Edit3KeyPress(TObject *Sender, char &Key)
{
        if ( !isdigit(Key) && Key != VK_BACK) Key = 0;
}
void __fastcall TForm1::Edit4KeyPress(TObject *Sender, char &Key)
{
        if ( !isdigit(Key) && Key != VK_BACK) Key = 0;
}
