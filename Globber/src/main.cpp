#include "lib0/foo0.h"
#include "lib1/foo1.h"
#include "lib2/foo2.h"
/**
 * Show how Cmake can make the process of gathering source files easier.
 */

int main(int argC, char * argV[])
{
   foo0 f0;
   foo1 f1;
   foo2 f2;
   f0.bar();
   f1.bar();
   f2.bar();
}