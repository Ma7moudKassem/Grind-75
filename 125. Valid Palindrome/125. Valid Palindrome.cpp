#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
	string alphabets;

	for (auto c : s)
		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
			alphabets.push_back(tolower(c));

	int i = 0, j = alphabets.size() - 1;

	while (i < j)
	{
		if (alphabets[i] != alphabets[j])
			return false;

		i++;
		j--;
	}

	return true;
}

int main()
{

}