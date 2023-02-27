graph = {}

def addNode(node):
    graph[node] = []

def addEdge(nodeA, nodeB):
    graph[nodeA].append(nodeB)

# function that search is route existing

def searchRoute(nodeA, nodeB):
    if len(graph[nodeA]) < 1:
        print(f'{nodeA} -> {nodeB} - Not found!')
        return 0 
    
    if nodeA == nodeB:
        print(f'{nodeB} - Found!')
    else:
        print(nodeA)
        searchRoute(graph[nodeA].pop(), nodeB)

addNode('A')
addNode('B')
addNode('C')
addNode('D')

addEdge('A', 'B')
addEdge('B', 'A')
addEdge('C', 'B')
addEdge('C', 'D')
addEdge('D', 'A')
addEdge('D', 'B')

print(graph)

print()
searchRoute('B', 'C')
