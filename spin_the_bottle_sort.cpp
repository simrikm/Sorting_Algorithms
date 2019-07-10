#include "project1.h"
#include <iostream>
#include <random>
#include <algorithm>
#include <utility>

void spin_the_bottle_sort(std::vector<int>& nums)
{
	while ((std::is_sorted(nums.begin(),nums.end()))==false){
		for (int i=0; i < nums.size() ; i++)
		{
			std::random_device rd;
			std::mt19937 generator(rd());
			std::uniform_int_distribution<int> distr(0,i+1);
			int s=distr(generator);
			if(((i<s) && (nums[i] > nums[s]))||(i>s && nums[i] <nums[s])){
			std::swap(nums[i],nums[s]);
			}
		}
	}
	
}





