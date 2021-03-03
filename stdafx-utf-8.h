#pragma once

#include <stdio.h>
#include <tchar.h>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

int stringToInteger(string input)
{
	return stoi(input);
}

string integerVectorToString(vector<int> list, int length = -1)
{
	if (length == -1)
	{
		length = list.size();
	}

	if (length == 0)
	{
		return "[]";
	}

	string result;
	for (int index = 0; index < length; index++)
	{
		int number = list[index];
		result += to_string(number) + ", ";
	}
	return "[" + result.substr(0, result.length() - 2) + "]";
}
