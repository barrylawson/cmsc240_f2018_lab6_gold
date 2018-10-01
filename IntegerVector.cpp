#ifndef __INTEGER_VECTOR_CPP__
#define __INTEGER_VECTOR_CPP__

#include "IntegerVector.h"
#include "DoubleVector.h"
#include "CharacterVector.h"

IntegerVector::IntegerVector()  {}
IntegerVector::~IntegerVector() {}

int IntegerVector::size()
{
<<<<<<< HEAD
   return integerVector.size(); // use size method to return size
=======
   return 0;
>>>>>>> 6e64a31035a3c1d36da8e58bca784dbfefc577a7
}

// just return the integer at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
<<<<<<< HEAD
int IntegerVector::get(int index)
{
   return integerVector.at(index); // use at() method to access vector
=======
int IntegerVector::get(int index)  
{ 
   return 0;
>>>>>>> 6e64a31035a3c1d36da8e58bca784dbfefc577a7
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void IntegerVector::put(int value, int index)
{
  if (index < this->size()) // verify that index is smaller than size
  {
    integerVector.at(index) = value; // use insert method to add elements before index
  }
  else
  {
    this->put(value); // use put method defined hereafter to add to end of vector
  }
}

// use push_back to append
void IntegerVector::put(int value)
{
  integerVector.push_back(value); //use push_back method to add to end of vector
}

// for each double in doubleVector, use static_cast<int> to append as an
// integer to integerVector
void IntegerVector::appendDoubleVector(DoubleVector& doubleVector)
{
  for (int i = 0; i < doubleVector.size(); i++)
    this->put(static_cast<int>(doubleVector.get(i)));
}

// for each char in characterVector, use static_cast<int> to append as an
// integer to integerVector
void IntegerVector::appendCharacterVector(CharacterVector& characterVector)
{
  for (int i = 0; i < characterVector.size(); i++)
    this->put(static_cast<int>(characterVector.get(i)));
}


#endif
