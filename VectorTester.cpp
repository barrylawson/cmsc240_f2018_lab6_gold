#include <iostream>
#include "IntegerVector.h"
#include "DoubleVector.h"
#include "CharacterVector.h"

int main()
{
   IntegerVector   iv;
   DoubleVector    dv;
   CharacterVector cv;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << "--------------" << std::endl;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   cv.put('h');
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << cv.get(0)<< std::endl;
   std::cout << cv.size() << std::endl;
   // std::cout << cv.get(10) << std::endl; //out of range
    std::cout << "----------------" << std::endl;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   dv.put(4.0);
   dv.put(3.3);
   dv.put(9.4);
   std::cout << "Used put(double n) to add 4.0, 3.3, 9.4 : " << std::endl;

   for(int i = 0; i < dv.size(); i++)
   {
      std::cout << dv.get(i) << " ";
   }


   std::cout << std::endl;
   std::cout << std::endl;


   dv.put(11.1, 1);
   std::cout << "Used put(double n, int m) to put 11.1 at middle index : " << std::endl;
   for(int i = 0; i < dv.size(); i++)
   {
      std::cout << dv.get(i) << " ";
   }

   std::cout << std::endl;
   std::cout << std::endl;

   std::cout << "Used get(int n) to print out values in reverse : " << std::endl;

   for(int i = dv.size()-1; i > -1; i--)
   {
      std::cout << dv.get(i) << " ";
   }
   std::cout << std::endl;
   std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
