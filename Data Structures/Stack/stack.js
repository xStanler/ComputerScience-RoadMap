const stack = []

// pus
stack.push('mazda');

console.log(stack);

stack.push( 'fiat', 'volvo', 'volkswagen' ) 

console.log(stack)

// pop() - last item - in LIFO order
stack.pop()
console.log(stack)

stack.pop('volvo')
console.log(stack)

stack.pop(1)
console.log(stack)
