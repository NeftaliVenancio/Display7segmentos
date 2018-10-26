/*
  7 segmentos.h - Library for display of seven segments
  Created by Neftali Venancio, October 22, 2018.
  Released into the public domain.
*/

#include "Arduino.h"
#include "dis7seg.h"

Display::Display(int a, int b, int c, int d, int e, int f, int g, boolean estado)
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);

  _a = a;
  _b = b;
  _c = c;
  _d = d;
  _e = e;
  _f = f;
  _g = g;
  _estado = estado;

  if(_estado == 1)
  {
    ea = LOW;
    eb = HIGH;
  }
  else
  {
    ea = HIGH;
    eb = LOW;
  }

}


void Display::cero()
{

   digitalWrite(_a, ea);
   digitalWrite(_b, ea);
   digitalWrite(_c, ea);
   digitalWrite(_d, ea); 
   digitalWrite(_e, ea);
   digitalWrite(_f, ea);
   digitalWrite(_g, eb);
}

void Display::uno()
{

   digitalWrite(_a, eb);
   digitalWrite(_b, ea);
   digitalWrite(_c, ea);
   digitalWrite(_d, eb); 
   digitalWrite(_e, eb);
   digitalWrite(_f, eb);
   digitalWrite(_g, eb);
}

void Display::dos()
{

   digitalWrite(_a, ea);
   digitalWrite(_b, ea);
   digitalWrite(_c, eb);
   digitalWrite(_d, ea); 
   digitalWrite(_e, ea);
   digitalWrite(_f, eb);
   digitalWrite(_g, ea);
}

void Display::tres()
{

   digitalWrite(_a, ea);
   digitalWrite(_b, ea);
   digitalWrite(_c, ea);
   digitalWrite(_d, ea); 
   digitalWrite(_e, eb);
   digitalWrite(_f, eb);
   digitalWrite(_g, ea);
}

void Display::cuatro()
{

   digitalWrite(_a, eb);
   digitalWrite(_b, ea);
   digitalWrite(_c, ea);
   digitalWrite(_d, eb); 
   digitalWrite(_e, eb);
   digitalWrite(_f, ea);
   digitalWrite(_g, ea);
}

void Display::cinco()
{

   digitalWrite(_a, ea);
   digitalWrite(_b, eb);
   digitalWrite(_c, ea);
   digitalWrite(_d, ea); 
   digitalWrite(_e, eb);
   digitalWrite(_f, ea);
   digitalWrite(_g, ea);
}

void Display::seis()
{

   digitalWrite(_a, ea);
   digitalWrite(_b, eb);
   digitalWrite(_c, ea);
   digitalWrite(_d, ea); 
   digitalWrite(_e, ea);
   digitalWrite(_f, ea);
   digitalWrite(_g, ea);
}

void Display::siete()
{

   digitalWrite(_a, ea);
   digitalWrite(_b, ea);
   digitalWrite(_c, ea);
   digitalWrite(_d, eb); 
   digitalWrite(_e, eb);
   digitalWrite(_f, eb);
   digitalWrite(_g, eb);
}

void Display::ocho()
{

   digitalWrite(_a, ea);
   digitalWrite(_b, ea);
   digitalWrite(_c, ea);
   digitalWrite(_d, ea); 
   digitalWrite(_e, ea);
   digitalWrite(_f, ea);
   digitalWrite(_g, ea);
}

void Display::nueve()
{

   digitalWrite(_a, ea);
   digitalWrite(_b, ea);
   digitalWrite(_c, ea);
   digitalWrite(_d, ea); 
   digitalWrite(_e, eb);
   digitalWrite(_f, ea);
   digitalWrite(_g, ea);
}

void Display::print(int n)
{

  switch (n)
  {
      case 0:
                cero();
                break;
      case 1:
                uno();
                break;
      case 2:
                dos();
                break;
      case 3:
                tres();
                break;
      case 4:
                cuatro();
                break;
      case 5:
                cinco();
                break;
      case 6:
                seis();
                break;
      case 7:
                siete();
                break;
      case 8:
                ocho();
                break;
      case 9:
                nueve();
                break;
  } 
}