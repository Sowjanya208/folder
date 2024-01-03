#include<reg51.h>
void main()
{
	int i;
	P2=0x3F;
	for(i=0;i<30000;i++);
	P2=0x06;
	for(i=0;i<30000;i++);
	P2=0x5B;
	for(i=0;i<30000;i++);
	P2=0x4F;
	for(i=0;i<30000;i++);
	P2=0x66;
	for(i=0;i<30000;i++);
	P2=0x6D;
	for(i=0;i<30000;i++);
	P2=0x7D;
	for(i=0;i<30000;i++);
	P2=0x07;
	for(i=0;i<30000;i++);
	P2=0x7F;
	for(i=0;i<30000;i++);
	P2=0x67;
	for(i=0;i<30000;i++);
}
	