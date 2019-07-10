#include "project1.h"
#include <iostream>
#include <algorithm>
#include <utility>
#include <random>

using namespace std;

void annealing_sort( vector<int>& nums, const  vector<int>& temps, const  vector<int>& reps)
{
	for (int j=1; j <temps.size(); j++)
	{
	 for (int i =1; i <(nums.size()-1);i++)
		{
			for (int k=1 ; k <reps[j]; k++)
			{
				 random_device rd;
				 mt19937 generator(rd());
				int min_num= min(static_cast<int>(nums.size()),(i+temps[j]));
				if(min_num <(i+1)){
					 uniform_int_distribution<int> distr(min_num,i+1);
					int s=distr(generator);
					if(nums[i]>nums[s])
					 swap(nums[i],nums[s]);
				}else{
					 uniform_int_distribution<int> distr(i+1,min_num);	
					int s=distr(generator);
					if(nums[i]>nums[s])
						 swap(nums[i],nums[s]);
				}
	
				}
			}
		

		 for (int i=nums.size(); i >1; i--)
		{
			for (int k=1 ; k <reps[j];k++)
			{
				 random_device rd;
				 mt19937 generator(rd());
				int max_num=  max(1,(i-temps[j]));
				if (max_num<(i-1)){
					 uniform_int_distribution<int> distr(max_num,i-1);
					int s=distr(generator);
					if(nums[s]>nums[i])
						 swap(nums[i],nums[s]);
				}else{
					 uniform_int_distribution<int> distr(i-1,max_num);
					int s=distr(generator);
					if (nums[s] > nums[i])
					 swap(nums[i],nums[s]);
				}

			}	
		}

	
	}
}
