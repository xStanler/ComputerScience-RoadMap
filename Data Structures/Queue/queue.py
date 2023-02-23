queue = []

# append() to push to queue
queue.append('1')
queue.append('2')
queue.append('3')

print('Initial queue')
print(queue)

# pop(0) to pop alement in FIFO order

print('\nElements popped from queue:')
print(queue.pop(0))
print(queue.pop(0))

print('\nQueue after popping')
print(queue)

#=================================================================

from collections import deque

q = deque()

# push()
q.apend('a')

# pop()
q.popleft()

#=================================================================

from queue import Queue

q = Queue(maxsize = 3)

# size()
q.qsize()

# push()
q.put('a')

# pop()
q.get()

# isFull()
q.full()

# isEmpty()
q.empty()
