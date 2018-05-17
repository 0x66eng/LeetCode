#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
	int search(vector<int>& nums, int target) {
		if (nums.size() == 0) return -1;

		int nMid = 0, nHead = 0, nTail = nums.size()-1;
		while(nHead <= nTail)
		{
			nMid = (nHead+nTail)/2;
			//cout<<"nmid is "<<nMid<<endl;
			//cout<<"mid num is "<<nums[nMid]<<endl;
			if (nums[nMid] == target)
				return nMid;

			if (nums[nMid] < nums[nTail] )  // mid 在后半区 如7812345
			{
				if (target <nums[nMid] || target > nums[nTail])
				{
					nTail = nMid -1;
					
				}
				else
					nHead = nMid+1;
					
			}
			else                            //mid在前半区  如56789123
			{
				if (target > nums[nMid] || target < nums[nHead])
				{
					nHead = nMid+1;
				}	
				else
					nTail = nMid -1;
				

			}
		}
		return -1;

	}
};


//int main()
//{
//	int a[8] = {4,5,6,7,8,1,2,3};
//	vector<int> vec(a,a+8);
//	int resout = Solution().search(vec,8);
//	cout<<resout<<endl;
//	system("pause");
//	return 0;
//}
