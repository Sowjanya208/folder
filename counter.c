#include<reg51.h>
void main()
{
 TMOD=0x50;
 TR1=1;
 while(1)
 {
 ;
 }
 }