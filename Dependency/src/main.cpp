#ifdef _OPENMP
#include <omp.h>
#endif
#include <iostream>
int main(int argC, char ** argV)
{
   #ifdef _OPENMP
   {
      std::cout << "Alphabet!" << std::endl;
      #pragma omp parallel for
      for(int i = (int)'A'; i < (int)'Z'; i++)
      {
         std::cout << (char)i; 
      }
      std::cout << std::endl << "Yeah!" << std::endl;

   }
   #else
   {
      std::cout << "No threading :( " << std::endl;
   }
   #endif
}