#include "functions.h"


float findMinValue(float numb1, float numb2, float numb3)
{
		
	float min_number;
	min_number = min(min(numb1, numb2), numb3);
	cout << "min number:" << min_number;
	
	return min_number;
}
