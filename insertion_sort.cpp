#include "project1.h"
#include <iostream>


void insertion_sort(std::vector<int>& nums)
{
	int i, temp, j;
	for (i=1; i < nums.size(); i++){
		temp=nums[i];
		 j=i-1;;
		while (j>=0 && (nums[j] > temp)){
			nums[j+1]=nums[j];
			j--;
		}
	
	nums[j+1]=temp;
	}
}

