#include "matrix.h"

int
main ()
{
   void * m = mxMalloc (10);
   if (!m)
   {
      return 1;
   }

   mxFree (m);

   return 0;
}
