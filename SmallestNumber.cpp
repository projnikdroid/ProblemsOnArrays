#include <iostream>

uint32_t testArr[10] = {100, 8, 9, 88, 76, 45, 2, 65, 43, 86};

// Find the smallest number in an array of testArr
uint32_t FindSmallestNumber()
{
	// Set the smallest number to the first element of the array
	uint32_t smallest = testArr[0];

	// Calculate the length of the array
	uint32_t arrLength = (sizeof(testArr))/sizeof(testArr[0]);

	// Loop through the array
	for (uint32_t count = 1; count < arrLength; count++)
	{
		// If the current element is smaller than the smallest element, set it to the smallest
		if (testArr[count] < smallest)
		{
			smallest = testArr[count];
		}
	}

	// Return the smallest number
	return smallest;
}

int main()
{
    std::cout << "smallest number in the array is " << FindSmallestNumber() << std::endl;
    return 0;
}
