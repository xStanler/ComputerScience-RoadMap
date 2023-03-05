graf = {
        0: [1, 3, 4],
        1: [0, 2, 4],
        2: [1, 6],
        3: [0, 4, 6],
        4: [0, 1, 3, 5],
        5: [4],
        6: [2, 3]
}

visited = set()

def depthFirstSearch(start):
    print(start)

    visited.add(start)
    nearby = graf.get(start)
    for node in nearby:
        if node not in visited:
            depthFirstSearch(node)

depthFirstSearch(0)
