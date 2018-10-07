###############################################################################
#
# Author: Michael Bonifonte, Matthew Johnson, Yanish Rambocus
# Date started: October 1st 2018
# Date last modified: October 7th 2018
# Purpose of program: VectorTester.cpp tests the correctness of Character, Double
and Integer Vectors implemented.
# This README provides an overview of the tests to prove such correctness.
#
################################################################################


# Implementation of Vector classes.

## Introduction

This is an implementation of the three different vector classes.
They each use the underlying c++ vector structures already
in place with some added functionality:

- A default constructor that accepts no parameters

- A copy constructor that accepts another String Object

- A c Style char* constructor that accepts a char*

For each Vector Class, the methods implemented are:

- size() which returns the length of the vector

- put(element, index (optional)) which allows adding an element at a specified location or to the end of the vector

- appendDoubleVector, appendIntegerVector, appendCharacterVector which, depending on which class
allows vectors of the two other classes to be added at the end of the vector class in question.



## Testing

A multitude of tests were performed to ensure code correctness.
Here are their descriptions and results.

TEST 1: put(), get() and size()
Added an element with put() and printed it to the console with get()

	RESULT:
		IntegerVector:
    	get(0): 78 [Expected: 78]
			Size: 1 [Expected: 1]
		CharacterVector:
			get(0): h [Expected: h]
			Size: 2 [Expected: 2]
		DoubleVector:
			get(0): 106.0 [Expected: 106.0]
			Size: 3 [Expected: 3]

	This shows that the put, get and size methods work as expected.
---------------------------------------------------------------------------------------------------------------------
TEST 2: get() out of range
	THE second test verifies that getting an element at an index larger than
  the size results in an exception.

	RESULT:
		IntegerVector:
			get(10): Index out of range [Expected: "Index out of range"]
		CharacterVector:
			get(10): Index out of range [Expected: "Index out of range"]
		DoubleVector:
			get(10): Index out of range [Expected: "Index out of range"]

	Hence, get() works with invalid arguments

---------------------------------------------------------------------------------------------------------------------

TEST 3: append**Vector()
	The third test verifies that append**Vector() works. Elements from the two other
  vectors are appended.

	RESULT:
		IntegerVector:
	 		The elements of the two other arrays are correctly cast and added to the end of the
   		specific vector
		CharacterVector:
			The elements of the two other arrays are correctly cast and added to the end of the
			specific vector
		DoubleVector:
			The elements of the two other arrays are correctly cast and added to the end of the
			specific vector

	Hence, append**Vector() works as expected.
---------------------------------------------------------------------------------------------------------------------
