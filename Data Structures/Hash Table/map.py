#In python dictionary is hash table/map

map = {
        "brand": "Ford",
        "model": "Mustang",
        "year": 1964
}

print(map)

# map.clear() - czyści całą mapę

x = map.copy()

print( map.get("brand") )

map.pop( "model" )

print(x)
print(map)
print()

map.popitem()
map.update({ 'color': 'red' })

print(x)
print(map)
