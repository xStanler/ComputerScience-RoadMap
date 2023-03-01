#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap<char, char> adjacencyList;

	adjacencyList.insert(make_pair('A', 'B'));
	adjacencyList.insert(make_pair('A', 'C'));
	adjacencyList.insert(make_pair('B', 'A'));

	for(auto& element: adjacencyList)
	{
		cout<<element.first << " -> " << element.second << endl;
	}
}
