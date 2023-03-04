graph = {
    0: [1, 3, 4],
    1: [0, 4, 2],
    2: [1, 6],
    3: [0, 4, 6],
    4: [0, 1, 3, 5],
    5: [4],
    6: [2, 3]
}

queue = []

def bfs(start):
    visited = set()
    queue.append(start)

    while len(queue) != 0:
        node = queue.pop(0)
        visited.add(node)
        
        neighbours = graph.get(node)

        for neighbour in neighbours:
            if neighbour not in visited:
                visited.add(neighbour)
                queue.append(neighbour)
                print(neighbour)


print(bfs(0))
