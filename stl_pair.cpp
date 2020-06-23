#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void printPair(pair<int, int> p)
{
	cout << p.first << "," << p.second << endl;
}

void showStack(stack<pair<int, int>> s)
{
	while (!s.empty())
	{
		printPair(s.top());
		s.pop();
	}
	cout << endl;
}

int main()
{
	stack<pair<int, int>> s;
	s.push({ 10,20 });
	s.push({ 30,40 });
	s.push({ 3,4 });
	s.push({ 1,2 });
	s.push({ 5,10 });
	s.push({ 2,8 });

	showStack(s);
	return 0;
}
