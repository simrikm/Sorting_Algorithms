#include <iostream>
#include "project1.h"

void shell_sort(std::vector<int>& nums, const std::vector<int>& gaps)
{
	for (auto &gap : gaps)
	{
		for (int i =gap; i < nums.size() ;i++)
		{
			int temp=nums[i];
			int j=i;
			while (j>=gap && temp < nums[j-gap]){
				nums[j]=nums[j-gap];
				j-=gap;
			}
			nums[j]=temp;
		}
	}
}

