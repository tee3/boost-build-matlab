#include <iostream>

#include "engine.h"

int
main (int argc, char * argv [])
{
   if (argc != 2)
   {
      std::cout << "usage: test_engine <path-to-matlab>\n";

      return 1;
   }

   Engine * eng = engOpen (argv [1]);
   if (!eng)
   {
      return 1;
   }

   engClose (eng);

   return 0;
}
