function greet(name) {
    return `Hello, ${name}!`;
}
const numbers = [1, 2, 3, 4, 5];
const sum = numbers.reduce((acc, num) => acc + num, 0);
console.log(greet("World"));
console.log(`Sum: ${sum}`);