#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	bool myfind(string s, string t, int l, int r)
	{
		int freq[256] = { 0 };
		for (int i = l; i<=r; i++)
		{
			freq[s[i]]++;
		}
		int i;
		for (i = 0; i<t.size(); i++)
		{
			if (freq[t[i]])
			{
				freq[t[i]]--;
			}
			else
				break;
		}
		if (i == t.size())
			return true;
		return false;
	}
	string minWindow(string s, string t) {
		int l = 0, r = t.size() - 1;
		string res;
		int length = s.size() + 1;
		while (r<s.size())
		{
			if (myfind(s, t, l, r) && (r - l + 1)<length)
			{
				res.clear();
				length = r - l + 1;
				res = s.substr(l, r);
			}
			if (l<s.size() - t.size() + 1 && myfind(s, t, l, r))
			{
				l++;
			}
			else
			{
				r++;
			}
		}
		return res;
	}
};

int main2()
{
	string res;
	Solution s;

	res = s.minWindow("a", "a");

	return 0;
}