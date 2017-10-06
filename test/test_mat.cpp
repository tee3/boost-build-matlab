#include <iostream>

#include "mat.h"

int
main (int argc, char * argv [])
{
   if (argc != 2)
   {
      std::cout << "usage: test_mat <path-to-mat>\n";

      return 1;
   }

   MATFile * mp = matOpen (argv [1],"r");
   if (!mp)
   {
      std::cout << "error: could not open " << argv [1] << "\n";

      return 1;
   }

   matClose (mp);

   return 0;
}
