#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;
class Solution {
public:
	int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
		unordered_map<int, int> record;
		for (int i = 0; i<A.size(); i++)
			for (int j = 0; j<B.size(); j++)
			{
				record[A[i] + B[j]]++;
			}
		int res = 0;
		for (int i = 0; i<C.size(); i++)
			for (int j = 0; j<D.size(); j++)
			{
				if (record.find(0 - C[i] - D[i]) != record.end())
					res = res + record[0 - C[i] - D[i]];
			}
		return res;
	}
};
int main4()
{
	vector<int> v1;
	v1.push_back(-1);
	v1.push_back(-1);
	vector<int> v2;
	v2.push_back(-1);
	v2.push_back(1);

	vector<int> v3;
	v3.push_back(-1);
	v3.push_back(1);

	vector<int> v4;
	v4.push_back(1);
	v4.push_back(-1);
	Solution s;

	int res;
	res = s.fourSumCount(v1, v2,v3,v4);
	return 0;
}