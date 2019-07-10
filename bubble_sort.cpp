#include "project1.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>

void bubble_sort(std::vector<int>& nums)
{
	int temp=0;
	for (int i=0; i< nums.size(); i++){
		for (int j=i+1; j < nums.size(); j++){
			if (nums[i] > nums[j]){
				std::swap(nums[i],nums[j]);
			}
		}
	}

}

