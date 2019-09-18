//---------------------------------------------------------------------------
#include <Math.h>
#include <iostream>
#include <vcl.h>
#pragma hdrstop
double f(double x,double y){
double g;
g=sqrt(sin(x/y)+4);
return g;
}
int x,y;
double f1(float x,float y) {
float r=x/y;
__asm
{
  xor eax,eax
    mov eax,x
    idiv y
    mov x,edx
    fld [r]
    fsin
    fstp [x]
    }
    x=x+4;
__asm
{
    fld [x]
    fsqrt
    fstp [x]
}
return x;
}
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{ float x,y;
 cin>>x;
 cin>>y;
double x1=f(x,y);
cout<< x1<<endl;
x1=f1(x,y);
cout<< x1<<endl;
cin>>x;
        return 0;
}
//---------------------------------------------------------------------------

