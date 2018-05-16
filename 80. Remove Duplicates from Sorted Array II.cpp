#include<iostream>
#include<vector>
using namespace std;

//处理排序数组，每个数最多出现两次，返回处理后的数组长度
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		const int MAX_INT = 2;
		if (nums.size() < MAX_INT+1) return nums.size();
		
		////以下的写法有错，因为哨兵会往前方写入数据，导致使用修改后的数据再次作为判断标准
		//int nLoc = 0;
		//for(int i = MAX_INT; i< nums.size(); i++)
		//{
		//	if (nums[i] !=  nums[nLoc])
		//	{
		//		nums[nLoc+MAX_INT] = nums[nLoc];
		//		nLoc++;
		//	}
		//}


		//若if判断中的两个位置上的数相等，则说明重复超过两个，nLoc-2到i之间的元素都是相同的，应该将i的位置后移，在nLoc位置写不同的元素
		//*****[nLoc]****[i],可见随着循环的进行，nLoc和i位置之间部分数据已经写入到nLoc及之前的位置，不能再用其作为判断标准
		int nLoc = MAX_INT;
		int nSize = nums.size();
		for (int i = MAX_INT; i< nSize;i++)
		{
			if (nums[nLoc-2] != nums[i])
			{
				nums[nLoc++] = nums[i];
			}
		}
		return nLoc;
        
    }
};

