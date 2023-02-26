cities = 'Suwałki Warszawa Kraków Gdańsk Poznań Szczecin Białystok Lublin Wrocław'.split(' ')

routes = [
    [ 'Warszawa', 'Kraków' ],
    [ 'Warszawa', 'Gdańsk' ],
    [ 'Poznań', 'Warszawa' ],
    [ 'Warszawa', 'Białystok' ],
    [ 'Warszawa', 'Lublin' ],
    [ 'Szczecin', 'Gdańsk' ],
    [ 'Szczecin', 'Poznań' ],
    [ 'Wrocław', 'Kraków' ],
    [ 'Suwałki', 'Białystok' ],
]

adjacencyList = {}

def addNode(city):
    adjacencyList[f'{city}'] = []

def addEdge(origin, destination):
    adjacencyList.get(origin).append(destination)
    adjacencyList.get(destination).append(destination)



for city in cities:
    addNode(city)


for route in routes:
    addEdge(route[0], route[1])

for item in adjacencyList.items():
    print(item)
