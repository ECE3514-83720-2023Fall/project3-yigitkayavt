////////////////////////////////////////////////////////
// ECE 2574, Homework 3
// File name:   hw3_function.cpp
// Description: STARTER CODE
// Date:        2/2019  
//
#include "hw3_function.h"


int funcCallCounter = 0;  // Do not tounch this line of code.  
						//This is a global variable helping to count the number of times 
						//that a function is called


int expo(const int m, const unsigned int n) {
	
	funcCallCounter++;  // Do not tounch this line of code.  
						//This is a global variable helping to count the number of times 
						//that this function is called
	//If n = 0 then the answer is automatically 1
	if (n == 0) {
		return 1;
	}
	//If m = 0, the answer is 0 
	if (m == 0) {
		return 0;
	}
	//if n is even then do the following
	else if (n % 2 == 0) {
		int even = expo(m, n / 2);//using recursive to multiply
		return even * even;
	}
	//if n is odd then do the following
	else {
		int odd = expo(m, (n - 1) / 2); //using recursive to multiply
		return m * odd * odd;
	}

	
	//Add your code..............
	
}

std::string reverse(const std::string s, const unsigned int size) {
	funcCallCounter++;  // Do not tounch this line of code.  
						//This is a global variable helping to count the number of times 
						//that this function is called

	//Add your code..............
	//if the given string exist then reverse it 
	if (size > 0) {
		return s.substr(size - 1, 1) + reverse(s.substr(0, size - 1), size - 1);
	}
	//if no string exist then return a "" empty character
	else {
		return "";
	}
}
int minArray(const int anArray[], const  int first, const  int last) {
	funcCallCounter++;  // Do not tounch this line of code.  
						//This is a global variable helping to count the number of times 
						//that this function is called
	int minValue;
	//if there is only one item in the array then return the value of the first value
	if (first == last) {
		return anArray[first];
	}
	//else return the minimum value 
	else if (first < last) {
		minValue = anArray[first];
		int nextValue = minArray(anArray, first + 1, last);
		if (minValue > nextValue) {
			minValue = nextValue;
		}
	}
	else {
		return -1;
	}
	return minValue;
}
	

int binaryCount(const int anArray[], const  int first, const int last, const int target)
{
	funcCallCounter++;  // Do not tounch this line of code.  
	//This is a global variable helping to count the number of times 
	//that this function is called

//Add your code..............
	int count = 0;
	int mid;
	
	if (first <= last) {
		//get the mid value of the array
		mid = first + (last - first) / 2;
		//if the target is in mid then increase count
		if (target == anArray[mid]) {
			count++;
			//check both sides to make sure there are no duplicates,
			//and if there are duplicates increase count
			count += binaryCount(anArray, mid + 1, last, target);
			count += binaryCount(anArray, first, mid - 1, target);
		}
		//if the target is bigger than mid value, increase mid by 1
		else if (target > anArray[mid]) {
			count+= binaryCount(anArray,mid + 1,last,target);
		}
		//if the target is smaller than mid value, decrease mid by 1
		else {
			count += binaryCount(anArray, first, mid - 1, target);
		}
	}
	return count;
}  


int binarySuccessor(const int anArray[], const  int first, const int last, const int target)
{
	funcCallCounter++;  // Do not tounch this line of code.  
	//This is a global variable helping to count the number of times 
	//that this function is called
	
//Add your code..............

	int leftSide;
	if(first <= last) {
		//get the mid value of the array
		int mid = first + (last - first) / 2;
		//if the target is equal to the mid value, then return mid
		//value since they are equal then it needs to be the smallest value integer
		if (target == anArray[mid]) {
			return mid; 
		}
		//if target is bigger than the mid value then, increase mid by 1
		//return the smallest value
		else if (target > anArray[mid]) {
			return binarySuccessor(anArray, mid + 1, last, target); 
		}
		else {
			//if target is smaller than the mid value then, decrease the mid value by 1
			//if there is nothing bigger than target, return the mid value, if there is then 
			//return the smallest value. 
			leftSide = binarySuccessor(anArray, first, mid - 1, target);
			if (leftSide == -1) {
				return mid;
			}
			else {
				return leftSide;
			}

		}
	}
	return -1;
}  





void powerSet(std::vector<std::string>& pSet,  const std::string bSet, std::string start = "", int i = 0) {

	funcCallCounter++;  // Do not tounch this line of code.  
							//This is a global variable helping to count the number of times 
							//that this function is called

	//Add your code..............
	

	
}



