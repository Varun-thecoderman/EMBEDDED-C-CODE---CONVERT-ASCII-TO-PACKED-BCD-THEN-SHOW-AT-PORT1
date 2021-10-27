#include<reg51.h>
void main(void)
{
 unsigned char bcdbyte;
 unsigned char w='4';
 unsigned char z='7';
 w=w&0x0f;
 w=w<<4;
 z=z&0x0f;
 bcdbyte=w|z;
 P1=bcdbyte;
}
