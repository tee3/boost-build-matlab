#include "mat.h"

int
main ()
{
   MATFile * mp = matOpen ("test.mat","r");
   if (!mp)
   {
      return 1;
   }

   matClose (mp);

   return 0;
}
