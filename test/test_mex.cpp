#include <iostream>

#include "mex.h"

extern "C"
void
mexFunction (int nlhs, mxArray *plhs [], int nrhs, const mxArray *prhs [])
{
   mexPrintf ("Hello, world!\n");
}

int
main ()
{
   mexFunction (0,0,0,0);

   return 0;
}
