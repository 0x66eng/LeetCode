#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		
		int nLoc = 0;
		for(int i=1; i<nums.size();i++)
		{
			//双哨兵，nLoc标记了数组遍历的靠前位置，i标记了靠后的遍历位置
			if (nums[nLoc] != nums[i])
			{
				nums[++nLoc] =nums[i];
			}
		}
		return nLoc+1;

	}
};


//int main()
//{
//	int a[6] = {1,2,3,3,5,6};
//	vector<int> vec(a,a+6);
//	int resout = Solution().removeDuplicates(vec);
//	cout<<resout<<endl;
//	system("pause");
//	return 0;
//}

