const queue = []

// push()
queue.push('The Witcher')
queue.push('Sherlock Holmes', 'Art of War')

console.log(queue)

// pop() - first element - in FIFO order
queue.pop(0)
console.log(queue)

queue.shift()
console.log(queue)

// size()
console.log(queue.length)

// setting the size of queue
queue.length = 2
