#include<iostream>
#include<vector>
using namespace std;

//�����������飬ÿ�������������Σ����ش��������鳤��
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		const int MAX_INT = 2;
		if (nums.size() < MAX_INT+1) return nums.size();
		
		////���µ�д���д���Ϊ�ڱ�����ǰ��д�����ݣ�����ʹ���޸ĺ�������ٴ���Ϊ�жϱ�׼
		//int nLoc = 0;
		//for(int i = MAX_INT; i< nums.size(); i++)
		//{
		//	if (nums[i] !=  nums[nLoc])
		//	{
		//		nums[nLoc+MAX_INT] = nums[nLoc];
		//		nLoc++;
		//	}
		//}


		//��if�ж��е�����λ���ϵ�����ȣ���˵���ظ�����������nLoc-2��i֮���Ԫ�ض�����ͬ�ģ�Ӧ�ý�i��λ�ú��ƣ���nLocλ��д��ͬ��Ԫ��
		//*****[nLoc]****[i],�ɼ�����ѭ���Ľ��У�nLoc��iλ��֮�䲿�������Ѿ�д�뵽nLoc��֮ǰ��λ�ã�������������Ϊ�жϱ�׼
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

