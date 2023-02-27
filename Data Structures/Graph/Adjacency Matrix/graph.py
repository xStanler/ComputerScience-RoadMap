n = 5

graph = [ [0 for i in range(n)]for j in range(n) ]

A, B, C, D, E = 0, 1, 2, 3, 4

def addEdge(nodeA, nodeB):
    graph[nodeA][nodeB] = 1

for row in graph:
    print(row)

addEdge(A, B)
addEdge(B, A)
addEdge(C, B)
addEdge(C, D)
addEdge(D, A)
addEdge(D, B)

tab = 'A B C D E'.split(' ')
print()
print(tab)
for i, row in enumerate(graph):
    print(f'{tab[i]} {row}')
