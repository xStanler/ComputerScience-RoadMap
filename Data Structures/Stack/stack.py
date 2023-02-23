#stack implementation using list
stack = []

# append() to push to stack
stack.append('a')
stack.append('b')
stack.append('c')


print('Initial stack')
print(stack)

# pop() to pop element in LIFO order
print('\nElements popped form stack:')
print(stack.pop())
print(stack.pop())

print('\nStack after popping')
print(stack)


#===============================================================

from collections import deque

stack = deque()

# push()
stack.append('a')

# pop()
print(stack.pop())

#===============================================================

from queue import LifoQueue

stack = LifoQueue(maxsize=3)

# push()
stack.put('a')

# pop()
stack.get()

# size()
stack.qsize()

# isFull()
stack.full()

# isEmpty()
stack.empty()
