#include <iostream>
#include "IntegerVector.h"
#include "DoubleVector.h"
#include "CharacterVector.h"
#include <stdexcept>

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
   iv.put(78);

   std::cout << "iv.get(0): " <<  iv.get(0) << " [78]" << std::endl;
   std::cout << "iv.size(): " << iv.size() << " [1]" << std:: endl;

   std::cout << "Add 5 elements to iv" << std::endl;
   for (int i = 79; i < 84; i++)
   {
     std::cout << "Element being added: " << i << std::endl;
     iv.put(i); // add 5 elements to iv
   }
   for (int i = 0; i < iv.size(); i++)
   {
     std::cout << "iv.get(" << i << "): " << iv.get(i) << " [" << i+78 <<"]"<< std::endl;
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
   std::cout << "cv.get(0)" << cv.get(0)<< ": 'h'" << std::endl;
   std::cout << "cv.size()" << cv.size() <<  ": 0" << std::endl;
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
   std::cout << "-------------" << std:: endl;
   dv.put(106.0);
   std::cout << "dv.put(106.0): " << dv.get(0) << " [106]" << std::endl;
   dv.put(107.3);
   std::cout << "dv.put(107.3): " << dv.get(1) << " [107.3]" << std::endl;
   dv.put(108.4);
   std::cout << "dv.put(108.4): " << dv.get(2) << " [108.4]" << std::endl;
   std::cout << "dv.get(0): " << dv.get(0) << " [106]" << std::endl;
   std::cout << "dv.get(1): " << dv.get(1) << " [107.3]" << std::endl;
   std::cout << "dv.get(2): " << dv.get(2) << " [108.4]" << std::endl;
   dv.put(107.9, 1);
   std::cout << "dv.put(107.9, 1): " << dv.get(1) << " [107.9]" << std::endl;
   std::cout << "dv.size(): " << dv.size() << " [3]" << std::endl;
   std::cout << "dv.get(0): " << dv.get(0) << " [106]" << std::endl;
   std::cout << "dv.get(1): " << dv.get(1) << " [107.9]" << std::endl;
   std::cout << "dv.get(2): " << dv.get(2) << " [108.4]" << std::endl;

   std::cout << std::endl;

   try
   {
     std::cout << "dv.get(10): " << dv.get(10) << std::endl;
   } catch (std::out_of_range)
   {
     std::cout<< "Index out of range" << std::endl;
   }


   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------
   iv2 = iv;
   iv2.appendDoubleVector(dv);
   iv2.appendCharacterVector(cv);
   for(int i = 0; i < iv2.size(); i++)
     std::cout << iv2.get(i) << std::endl;



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

   dv2 = dv;
   dv2.appendIntegerVector(iv);
   dv2.appendCharacterVector(cv);
   for(int i = 0; i < dv2.size(); i++)
   {
     std::cout << dv2.get(i) << std::endl;
   }
   //-------------------------------------------------------------------------

   return 0;
}
