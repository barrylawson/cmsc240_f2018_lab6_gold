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
   std::cout << "iv.put(10)" << std::endl;
   iv.put(10);

   std::cout << "iv.get(0): " <<  iv.get(0) << " [10]" << std::endl;
   std::cout << "iv.size(): " << iv.size() << " [1]" << std:: endl;

   std::cout << "Add 5 elements to iv" << std::endl;
   for (int i = 0; i < 5; i++)
   {
     std::cout << "Element being added: " << 3*i << std::endl;
     iv.put(3*i, i + 6); // add 5 elements to iv
   }
   for (int i = 1; i < iv.size(); i++)
   {
     std::cout << "iv.get(" << i << "): " << iv.get(i) << " [" << 3*(i-1) <<"]"<< std::endl;
   }

   std::cout << "iv.size(): " << iv.size() << " [6]" << std::endl;
   try
   {
     std::cout << "iv.get(10): " <<iv.get(10) << std::endl;
   } catch (std::out_of_range)
   {
     std::cout<< "Index out of range" << std::endl;
   }


   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   cv.put('h');
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << cv.get(0)<< << ": 'h'"std::endl;
   std::cout << cv.size() <<  ": 0"std::endl;
   try
   {
     std::cout << "cv.get(10): " << cv.get(10) << std::endl;
   } catch (std::out_of_range)
   {
     std::cout<< "Index out of range" << std::endl;
   }
    std::cout << "----------------" << std::endl;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
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
