# JAVASCRIPT

---

---

### What is a first order function
A first-order function is a function that doesn’t accept another function as an argument and doesn’t return a function as its return value.
```js
const firstOrder = () => console.log("I am a first order function!");
```

### What is a higher order function
A higher-order function is a function that accepts another function as an argument or returns a function as a return value or both. 
```js
const firstOrderFunc = () =>
{
  console.log("Hello, I am a First order function");
}
const higherOrder = (ReturnFirstOrderFunc) =>
{
  ReturnFirstOrderFunc();
}
higherOrder(firstOrderFunc);
```

### What is a unary function
A unary function (i.e. monadic) is a function that accepts exactly one argument. It stands for a single argument accepted by a function.
```js
const unaryFunction = (a) => console.log(a + 10); // Add 10 to the given argument and display the value
```

### What is the currying function
Currying is the process of taking a function with multiple arguments and turning it into a sequence of functions each with only a single argument. Currying is named after a mathematician Haskell Curry. By applying currying, an n-ary function turns into a unary function.
```js
const multiArgFunction = (a, b, c) => a + b + c;
console.log(multiArgFunction(1, 2, 3)); // 6

const curryUnaryFunction = (a) => (b) => (c) => a + b + c;
curryUnaryFunction(1); // returns a function: b => c =>  1 + b + c
curryUnaryFunction(1)(2); // returns a function: c => 3 + c
curryUnaryFunction(1)(2)(3); // returns the number 6
```

### What is a pure function
A Pure function is a function where the return value is only determined by its arguments without any side effects. i.e, If you call a function with the same arguments 'n' number of times and 'n' number of places in the application then it will always return the same value.
```js
//Impure
let numberArray = [];
const impureAddNumber = (number) => numberArray.push(number);
//Pure
const pureAddNumber = (number) => (argNumberArray) =>
  argNumberArray.concat([number]);

//Display the results
console.log(impureAddNumber(6)); // returns 1
console.log(numberArray); // returns [6]
console.log(pureAddNumber(7)(numberArray)); // returns [6, 7]
console.log(numberArray); // returns [6]
```

As per the above code snippets, the Push function is impure itself by altering the array and returning a push number index independent of the parameter value, whereas Concat on the other hand takes the array and concatenates it with the other array producing a whole new array without side effects. Also, the return value is a concatenation of the previous array.

Remember that Pure functions are important as they simplify unit testing without any side effects and no need for dependency injection. They also avoid tight coupling and make it harder to break your application by not having any side effects. These principles are coming together with the Immutability concept of ES6: giving preference to const over let usage.

### What is the Temporal Dead Zone
The Temporal Dead Zone(TDZ) is a specific period or area of a block where a variable is inaccessible until it has been initialized with a value. This behavior in JavaScript that occurs when declaring a variable with the let and const keywords, but not with var. In ECMAScript 6, accessing a let or const variable before its declaration (within its scope) causes a ReferenceError.
```js
function somemethod() {
  console.log(counter1); // undefined
  console.log(counter2); // ReferenceError
  var counter1 = 1;
  let counter2 = 2;
}
```

### What is an IIFE (Immediately Invoked Function Expression)
IIFE (Immediately Invoked Function Expression) is a JavaScript function that runs as soon as it is defined. 
```js
(function () {
  // logic here
})();
```

The primary reason to use an IIFE is to obtain data privacy because any variables declared within the IIFE cannot be accessed by the outside world. i.e, If you try to access variables from the IIFE then it throws an error as below.
```js
(function () {
  var message = "IIFE";
  console.log(message);
})();
console.log(message); //Error: message is not defined
```









