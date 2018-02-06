
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <functional>
#include <set>
#include <queue>
#include <string>
#include <map>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

long long int gause[100001][62];
long long int arr[100001];
const char frequencies[100] = { ' ', 'e', 't', 'a', 'o', 'i', 'h', 's', 'd', 'r', 'l', 'u', 'w', 'f', 'g', 'm', '.', 'c', 'b', ',', 'k', 'y', 'g', 'p', 'v', '-', '"', '\'', 'x', '0', 'j', '1', 'q', '2', 'z', '!', '?', '3', '5', '4', '9', '[', ']', '8', '6', '7' };
map<char, int> cnt;
map<char, char> result;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string s, s2, s_repair;
	int count = 0;
	while (cin)
	{
		count++;
		cin >> s2;
		s += s2;
		s_repair += s2;
		if (count > 1)
			s_repair += 'n';

	}
	vector<char> char_list;
	for (int i = 0; i < s.length(); i++)
	{
		if (cnt[s[i]] == 0)
			char_list.push_back(s[i]);
		cnt[s[i]]++;
	}
	int best = 5;
	char c;
	int pointer = 0;
	while (best >= 5)
	{
		best = 0;
		for (int i = 0; i < char_list.size(); i++)
		{
			if (cnt[char_list[i]] >= best)
			{
				best = cnt[char_list[i]];
				c = char_list[i];
			}
		}
		cnt[c] = 0;
		result[c] = frequencies[pointer];
		pointer++;
	}

	for (auto it : s_repair)
	{
		if (it == 'n')
			cout << 'n';
		else
		{
			if (result[it] == 0)
				cout << it;
			else
			{
				cout << result[it];
				SS.push_back(result[it]);
			}
		}
	}
}