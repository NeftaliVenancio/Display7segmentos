/*
  7 segmentos.h - Library for display of seven segments
  Created by Neftali Venancio, October 22, 2018.
  Released into the public domain.
*/


/////////////////////////////////////////////////////////////////
/////
/////   estado = 0 --- catodo comun
/////   estado = 1 --- anodo comun
/////
////////////////////////////////////////////////////////////////

#ifndef dis7seg_h
#define dis7seg_h
 
#include "Arduino.h"
 

class Display
{
        public:
                Display(int a, int b, int c, int d, int e, int f, int g, boolean estado);
                void print( int n);
                void cero();
                void uno();
                void dos();
                void tres();
                void cuatro();
                void cinco();
                void seis();
                void siete();
                void ocho();
                void nueve();

        private:
                boolean _estado;
                boolean ea;
                boolean eb;
                int _a;
                int _b;
                int _c;
                int _d;
                int _e;
                int _f;
                int _g;
};
#endif