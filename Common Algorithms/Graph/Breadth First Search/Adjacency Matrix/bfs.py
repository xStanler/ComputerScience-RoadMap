n = 7
graph = [[0 for i in range(n)] for j in range (n)]

graph[0][1] = 1;
graph[0][3] = 1;
graph[0][4] = 1;
graph[1][0] = 1;
graph[1][2] = 1;
graph[1][4] = 1;
graph[2][1] = 1;
graph[2][6] = 1;
graph[3][0] = 1;
graph[3][4] = 1;
graph[3][6] = 1;
graph[4][0] = 1;
graph[4][1] = 1;
graph[4][3] = 1;
graph[4][5] = 1;
graph[5][4] = 1;
graph[6][2] = 1;
graph[6][3] = 1;

queue = []
visited = [0 for i in range(n)]

def BreathFirstSearch(start):
    queue.append(start)
    while len(queue) != 0:
        node = queue.pop(0)
        visited[node] = 1

        for k in range(n):
            if graph[node][k] != 0:
                if visited[k] == 0:
                    visited[k] = 1
                    queue.append(k)

                    print(k)

BreathFirstSearch(0)
