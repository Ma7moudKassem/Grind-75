#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> map;
	int n = nums.size();

	for (int i = 0; i < n; i++)
	{
		if (map.count(target - nums[i]))
			return { map[target - nums[i]] , i };

		map[nums[i]] = i;
	}

	return {};
}


int main()
{
	vector<int> arr = { 2,7,11,15 };

	twoSum(arr, 9);
}