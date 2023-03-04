tab = [1, 2, 6, 4, 3, 7, 12, 5, 3]

def selectionSort(array):
    n = len(array)

    for i in range(n):
        for j in range(i+1, n):
            if array[j] < array[i]:
                array[j], array[i] = array[i], array[j]


print(tab)

selectionSort(tab)
print(tab)
