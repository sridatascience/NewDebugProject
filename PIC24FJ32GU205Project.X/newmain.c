/*
 * File:   newmain.c
 * Author: I71645
 *
 * Created on September 16, 2022, 12:20 PM
 */


#include <xc.h>
uint8_t m =10;
uint8_t add(uint8_t a, uint8_t b, uint8_t c ){
   return a+b+c;
}
void main() {
   uint8_t a = 0x05;
   LATA = a;
   uint8_t c = 0x1F;
   TRISA = c;
   uint8_t b =0x08;
   ANSA = b;
   uint8_t t = add(a,b,c);
   return;
}

