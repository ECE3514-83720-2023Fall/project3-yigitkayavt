////////////////////////////////////////////////////////
// ECE 3514, Project 3, Yigit Kaya
// File name:   hw3_test.cpp
// Description: This file is for testing the functions that 
//				got implemented in the hw3_function.cpp file
// Date:        11/15/2023  
//
#define CATCH_CONFIG_MAIN			// this line tells Catch to provide a main() function
#define CATCH_CONFIG_COLOUR_NONE	// this line avoids problems due to color-coding the output
#include "catch.hpp"
#include "hw3_function.h"


extern int funcCallCounter; // Do not tounch this line of code.  
						//This is a global variable helping to count the number of times 
						//that a function is called

// The following set of tests needs to be expanded

TEST_CASE("Test Binary Count", "[binaryCount]") {

	funcCallCounter = 0;

	int myArrayWithDuplication[10] = { -1,3,5,5,8 };
	unsigned int count = binaryCount(myArrayWithDuplication, 0, 4, -5);
	CHECK(count == 0);
	REQUIRE(funcCallCounter > 1);

	funcCallCounter = 0;
	count = binaryCount(myArrayWithDuplication, 0, 4, 5);
	CHECK(count == 2);
	REQUIRE(funcCallCounter > 1);

	funcCallCounter = 0;
	count = binaryCount(myArrayWithDuplication, 0, 4, 3);
	CHECK(count == 1);
	REQUIRE(funcCallCounter > 1);

	funcCallCounter = 0;
	count = binaryCount(myArrayWithDuplication, 0, 4, 9);
	CHECK(count == 0);
	REQUIRE(funcCallCounter > 1);

	funcCallCounter = 0;
	count = binaryCount(myArrayWithDuplication, 0, 4, -2);
	CHECK(count == 0);
	REQUIRE(funcCallCounter > 1);


	

}

TEST_CASE("Test Binary Successor", "[binarySuccessor]") {

	funcCallCounter = 0;

	int myArrayWithNoDuplicate[10] = { -5, -3, -1, 0, 1, 5, 9 };
	int successor = binarySuccessor(myArrayWithNoDuplicate, 0, 8, 4);
	CHECK(successor != -1);
	CHECK(successor < 10);
	if ((successor < 10) && (successor > -1)) {
		CHECK(myArrayWithNoDuplicate[successor] == 5);
	}
	else
	{
		CHECK(false); // force an error record.  
	}
	REQUIRE(funcCallCounter > 1); // must be recursive implementation. 

	funcCallCounter = 0;
	successor = binarySuccessor(myArrayWithNoDuplicate, 0, 8, -3);
	CHECK(successor != -1);
	CHECK(successor < 10);
	if ((successor < 10) && (successor > -1)) {
		CHECK(myArrayWithNoDuplicate[successor] == -3);
	}
	else
	{
		CHECK(false); // force an error record.  
	}
	REQUIRE(funcCallCounter > 1); // must be recursive implementation. 



	funcCallCounter = 0;
	successor = binarySuccessor(myArrayWithNoDuplicate, 0, 8, 10);
	CHECK(successor == -1);
	REQUIRE(funcCallCounter > 1);

	funcCallCounter = 0;
	successor = binarySuccessor(myArrayWithNoDuplicate, 0, 8, -6);
	CHECK(successor == 0);
	REQUIRE(funcCallCounter > 1);

}

TEST_CASE("Test Exponetiation", "[expo]") {

	funcCallCounter = 0;

	int result = expo(1, 10);
	CHECK(result == 1);
	CHECK(funcCallCounter <= 5);
	CHECK(funcCallCounter > 2);
	REQUIRE(funcCallCounter > 1);
	
	funcCallCounter = 0;
	result = expo(-3, 4);
	CHECK(result == 81);
	REQUIRE(funcCallCounter > 1);
	CHECK(funcCallCounter <= 8);
	CHECK(funcCallCounter > 2);

	funcCallCounter = 0;
	result = expo(-3, 5);
	CHECK(result == -243);
	REQUIRE(funcCallCounter > 1);
	CHECK(funcCallCounter <= 8);
	CHECK(funcCallCounter > 2);

	funcCallCounter = 0;
	result = expo(1, 0);
	CHECK(result == 1);
	CHECK(funcCallCounter == 1);

	funcCallCounter = 0;
	result = expo(0, 1);
	CHECK(result == 0);
	CHECK(funcCallCounter == 1);



}

TEST_CASE("Test String Reverse", "[reverse]") {
	std::string s = "chdddwwe";

	funcCallCounter = 0;
	std::string result = reverse(s, s.length());
	CHECK(result.compare("ewwdddhc") == 0);
	CHECK(funcCallCounter < 10);
	REQUIRE(funcCallCounter > 1);

	std::string s1 = "ksjdhe r";

	funcCallCounter = 0;
	std::string result2 = reverse(s1, s1.length());
	CHECK(result2.compare("r ehdjsk") == 0);
	CHECK(funcCallCounter < 10);
	REQUIRE(funcCallCounter > 1);
	

}


TEST_CASE("Test finding the minimum", "[minArray]") {

	funcCallCounter = 0;
	int myArray[6] = { -2, 5, 3, -5, -7, 0 };
	int minv = minArray(myArray, 0, 5);
	CHECK(minv == -7);
	CHECK(funcCallCounter > 3);
	REQUIRE(funcCallCounter > 1);


	funcCallCounter = 0;
	int anotherArray[1] = { 3 };
	minv = minArray(anotherArray, 0, 0);
	CHECK(minv == 3);
	CHECK(funcCallCounter == 1);

	funcCallCounter = 0;
	int anotherArray2[1] = { };
	minv = minArray(anotherArray2, 0, 0);
	CHECK(minv == 0);
	CHECK(funcCallCounter == 1);
	
}



TEST_CASE("Test PowerSet", "[powerSet]") {
	
	
}