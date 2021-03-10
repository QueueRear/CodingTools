#pragma once

#include <stdio.h>
#include <tchar.h>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <assert.h>

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

string stringToString(string input)
{
	assert(input.length() >= 2);
	string result;
	for (int i = 1; i < input.length() - 1; i++)
	{
		char currentChar = input[i];
		if (input[i] == '\\')
		{
			char nextChar = input[i + 1];
			switch (nextChar)
			{
			case '\"':
				result.push_back('\"');
				break;
			case '/':
				result.push_back('/');
				break;
			case '\\':
				result.push_back('\\');
				break;
			case 'b':
				result.push_back('\b');
				break;
			case 'f':
				result.push_back('\f');
				break;
			case 'r':
				result.push_back('\r');
				break;
			case 'n':
				result.push_back('\n');
				break;
			case 't':
				result.push_back('\t');
				break;
			default:
				break;
			}
			i++;
		}
		else
		{
			result.push_back(currentChar);
		}
	}
	return result;
}
