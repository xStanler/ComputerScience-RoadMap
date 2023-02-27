#include <iostream>
#include <map>
#include <string>
#include <vector>

std::map<char, std::vector<char>> graph;

void addNode(char nodeName)
{
	graph[nodeName].push_back('0');
}

void addEdge(char nodeA, char nodeB)
{
	if(graph[nodeA].front() == '0')
	{
		graph[nodeA].pop_back();
	}
	
	graph[nodeA].push_back(nodeB);
}

void print_graph(const std::map<char, std::vector<char>>& graph)
{
	for (const auto& n : graph)
	{
		std::cout<<'[' << n.first << "] = "; 

		for(const auto& i : n.second)
		{
			std::cout<< ' ' << i;
		}

		std::cout<< "; \n";
	}

}

int main()
{
	addNode('A');
	addNode('B');
	addNode('C');
	addNode('D');

	addEdge('A', 'B');
	addEdge('B', 'A');
	addEdge('C', 'B');
	addEdge('C', 'D');
	addEdge('D', 'A');
	addEdge('D', 'B');

	print_graph(graph);
}
