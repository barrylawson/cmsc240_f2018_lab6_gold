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
    get(0): 78 [Expected: 78]
		Size: 1 [Expected: 1]

	This shows that the put, get and size methods work as expected.
---------------------------------------------------------------------------------------------------------------------
TEST 2: get() out of range
	THE second test verifies that getting an element at an index larger than
  the size results in an exception.

	RESULT:
		get(10): Index out of range [Expected: "Index out of range"]

	Hence, get() works with invalid arguments

---------------------------------------------------------------------------------------------------------------------

TEST 3: append**Vector()
	The third test verifies that append**Vector() works. Elements from the two other
  vectors are appended.

	RESULT:
	 The elements of the two other arrays are correctly cast and added to the end of the
   specific vector

	Hence, append**Vector() works as expected.
---------------------------------------------------------------------------------------------------------------------

TEST 4:
	The fourth test consists of proving whether two substrings with identical arguments on the same
 	instance of Object.

	RESULT:
		1 [Expected: 1]

	This shows that two substrings on the same String with the same arguments are equal, which is
	what is needed
---------------------------------------------------------------------------------------------------------------------

TEST 5:
	The fifth test is variation of the third one. Two substrings with different arguments on the
	same String are tested for equality.

	RESULT:
		0 [Expected: 0]

	This shows that two substrings with different parameters on the same string are not equal, which
	is what is needed.
---------------------------------------------------------------------------------------------------------------------

TEST 6:
	The sixth test uses the overload operator = on a substring.
	It assigns a String previously declared to a substring of another String.

	RESULT:
		"eff " [Expected: "eff "]

	This shows that the overload operator correctly assigns a substring to a String.
---------------------------------------------------------------------------------------------------------------------

TEST 7:
	The seventh test uses the += operator to add a substring to a String.
	This tests whether the += is able to handle such operation.

	RESULT:
		"Jeff Tweedyof " [Expected: "Jeff Tweedyof " ]

	This shows that the += operator is able to concatenate a String with a substring
---------------------------------------------------------------------------------------------------------------------

TEST 8:
	The eighth tests uses the += operator to add a const char* to a String.

	RESULT:
		"Jeff Tweedy of Wilco! in Paris!" [Expected: "Jeff Tweedy of Wilco! in Paris!"]

	This shows that the += is able to handle a const char* which is what is needed.


These tests, in addition to those already provided, demonstrate the correctness of the implementation of the String class.

NOTE: These tests all prove that toString() and length() are correct since they provide the right length each time.
