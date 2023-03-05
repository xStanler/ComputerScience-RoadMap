graf = [
        [0, 1, 0, 1, 1, 0, 0],
        [1, 0, 1, 0, 1, 0, 0],
        [0, 1, 0, 0, 0, 0, 1],
        [1, 0, 0, 0, 1, 0, 1],
        [1, 1, 0, 1, 0, 1, 0],
        [0, 0, 0, 0, 1, 0, 0],
        [0, 0, 1, 1, 0, 0, 0]
        ]

n = 7

# visited = [0 for i in range(n)]
visited = set()

def dfs(start):
    visited.add(start)
    print(start)
    
    for k in range(n):
        if graf[start][k] != 0:
            if k not in visited:
                dfs(k)


dfs(0)
