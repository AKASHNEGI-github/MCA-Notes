# JAVASCRIPT

---

### What is a strict mode in javascript
Strict Mode is a new feature in ECMAScript 5 that allows you to place a program, or a function, in a “strict” operating context. This way it prevents certain actions from being taken and throws more exceptions. The literal expression "use strict"; instructs the browser to use the javascript code in the Strict mode.

### Why do you need strict mode
Strict mode is useful to write "secure" JavaScript by notifying "bad syntax" into real errors. For example, it eliminates accidentally creating a global variable by throwing an error and also throws an error for assignment to a non-writable property, a getter-only property, a non-existing property, a non-existing variable, or a non-existing object.

### How do you declare strict mode
The strict mode is declared by adding "use strict"; to the beginning of a script or a function. If declared at the beginning of a script, it has global scope.
```js
"use strict";
x = 3.14; // This will cause an error because x is not declared
```

 If declared inside a function, it has local scope.
```js
x = 3.14; // This will not cause an error.
myFunction();

function myFunction() {
  "use strict";
  y = 3.14; // This will cause an error
}
```

### What is Scope in Javacript
Scope is the accessibility of variables, functions, and objects in some particular part of your code during runtime. In other words, scope determines the visibility of variables and other resources in areas of your code.

### What is Hoisting
Hoisting is a JavaScript mechanism where variables, function declarations and classes are moved to the top of their scope before code execution. Remember that JavaScript only hoists declarations, not initialisation. This hoisting makes functions to be safely used in code before they are declared.
```js
console.log(message); //output : undefined
var message = "The variable Has been hoisted";
```
The above code looks like as below to the interpreter.
```js
var message;
console.log(message);
message = "The variable Has been hoisted";
```
In the same fashion, function declarations are hoisted too.
```js
message("Good morning"); //Good morning

function message(name) {
  console.log(name);
}
```

### What are Lambda Expressions or Arrow Functions
An arrow function is a shorter/concise syntax for a function expression and does not have its own this, arguments, super, or new.target. 
```js
const arrowFunc1 = (a, b) => a + b; // Multiple parameters
const arrowFunc2 = a => a * 10; // Single parameter
const arrowFunc3 = () => {} // no parameters
```

### What is a First Class Function
In Javascript, functions are first class objects. First-Class functions means when functions are treated like any other variable.
For example, in such a language, a function can be passed as an argument to other functions, can be returned by another function and can be assigned as a value to a variable.
```js
const handler = () => console.log("This is a click handler function");
document.addEventListener("click", handler);
```

### What is a First Order Function
A function that doesn’t accept another function as an argument and doesn’t return a function as its return value.
```js
const firstOrder = () => console.log("I am a first order function!");
```

### What is a Higher Order Function
A higher-order function is a function that accepts another function as an argument or returns a function as a return value or both. The higher order function is helpful to write the modular and reusable code.
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

### What is a Unary Function
A unary function (i.e. monadic) is a function that accepts exactly one argument. It stands for a single argument accepted by a function.
```js
const unaryFunction = (a) => console.log(a + 10); // Add 10 to the given argument and display the value
```

### What is a Pure Function
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

### What is the Currying Function
Currying is the process of taking a function with multiple arguments and turning it into a sequence of functions each with only a single argument. Currying is named after a mathematician Haskell Curry. By applying currying, an n-ary function turns into a unary function.
```js
const multiArgFunction = (a, b, c) => a + b + c;
console.log(multiArgFunction(1, 2, 3)); // 6

const curryUnaryFunction = (a) => (b) => (c) => a + b + c;
curryUnaryFunction(1); // returns a function: b => c =>  1 + b + c
curryUnaryFunction(1)(2); // returns a function: c => 3 + c
curryUnaryFunction(1)(2)(3); // returns the number 6
```

### What is the Temporal Dead Zone
The Temporal Dead Zone (TDZ) is a specific period or area of a block where a variable is inaccessible until it has been initialized with a value. This behavior in JavaScript that occurs when declaring a variable with the let and const keywords, but not with var. In ECMAScript 6, accessing a let or const variable before its declaration (within its scope) causes a ReferenceError.
```js
function somemethod() {
  console.log(counter1); // undefined
  console.log(counter2); // ReferenceError
  var counter1 = 1;
  let counter2 = 2;
}
```

### What are Closures
A closure is the combination of a function bundled(enclosed) together with its lexical environment within which that function was declared. i.e, It is an inner function that has access to the outer or enclosing function’s variables, functions and other data even after the outer function has finished its execution.
```js
function Welcome(name) {
  var greetingInfo = function (message) {
    console.log(message + " " + name);
  };
  return greetingInfo;
}
var myFunction = Welcome("John");
myFunction("Welcome "); //Output: Welcome John
myFunction("Hello Mr."); //output: Hello Mr. John
```

### What is a Callback Function
A callback function is a function passed into another function as an argument. This function is invoked inside the outer function to complete an action. 
```js
function callbackFunction(name) {
  console.log("Hello " + name);
}

function outerFunction(callback) {
  let name = prompt("Please enter your name.");
  callback(name);
}

outerFunction(callbackFunction);
```

### Why do we need Callbacks
The callbacks are needed because javascript is an event driven language. That means instead of waiting for a response javascript will keep executing while listening for other events.
Example - The first function invoking an API call(simulated by setTimeout) and the next function which logs the message.
```js
function firstFunction() {
  // Simulate a code delay
  setTimeout(function () {
    console.log("First function called");
  }, 1000);
}
function secondFunction() {
  console.log("Second function called");
}
firstFunction();
secondFunction();

Output;
// Second function called
// First function called
```
As observed from the output, javascript didn't wait for the response of the first function and the remaining code block got executed. So callbacks are used in a way to make sure that certain code doesn’t execute until the other code finishes execution.

### What is a Callback Hell
Callback Hell is an anti-pattern with multiple nested callbacks which makes code hard to read and debug when dealing with asynchronous logic.
```js
async1(function(){
    async2(function(){
        async3(function(){
            async4(function(){
                ....
            });
        });
    });
});
```

### What is a Promise
The Promise is an object that represents the eventual completion (or failure) of an asynchronous operation and its resulting value. 

A Promise is a proxy for a value not necessarily known when the promise is created. It allows you to associate handlers with an asynchronous action's eventual success value or failure reason. This lets asynchronous methods return values like synchronous methods: instead of immediately returning the final value, the asynchronous method returns a promise to supply the value at some point in the future.

A Promise is in one of these states - 
- Pending : initial state, neither fulfilled nor rejected.
- Fulfilled : meaning that the operation was completed successfully.
- Rejected : meaning that the operation failed.

```js
const promise = new Promise(function (resolve, reject) {
  // promise description
});
```

```js
const promise = new Promise(
  (resolve) => {
    setTimeout(() => {
      resolve("I'm a Promise!");
    }, 5000);
  },
  (reject) => {}
);

promise.then((value) => console.log(value));
```

### Why do you need a Promise
Promises are used to handle asynchronous operations. They provide an alternative approach for callbacks by reducing the callback hell and writing the cleaner code.

### What is Promise Chaining
The process of executing a sequence of asynchronous tasks one after another using promises is known as Promise chaining.
```js
new Promise(function (resolve, reject) {
  setTimeout(() => resolve(1), 1000);
})
  .then(function (result) {
    console.log(result); // 1
    return result * 2;
  })
  .then(function (result) {
    console.log(result); // 2
    return result * 3;
  })
  .then(function (result) {
    console.log(result); // 6
    return result * 4;
  });
```

In the above handlers, the result is passed to the chain of .then() handlers with the below work flow - 
- The initial promise resolves in 1 second,
- After that .then handler is called by logging the result(1) and then return a promise with the value of result * 2.
- After that the value passed to the next .then handler by logging the result(2) and return a promise with result * 3.
- Finally the value passed to the last .then handler by logging the result(6) and return a promise with result * 4.

### What is promise.all
Promise.all is a promise that takes an array of promises as an input (an iterable), and it gets resolved when all the promises get resolved or any one of them gets rejected. 
```js
Promise.all([Promise1, Promise2, Promise3]) .then(result) => {   console.log(result) }) .catch(error => console.log(`Error in promises ${error}`))
```

### What is the purpose of the race method in Promise
Promise.race() method will return the promise instance which is firstly resolved or rejected. 
Example - race() method where promise2 is resolved first.
```js
var promise1 = new Promise(function (resolve, reject) {
  setTimeout(resolve, 500, "one");
});
var promise2 = new Promise(function (resolve, reject) {
  setTimeout(resolve, 100, "two");
});

Promise.race([promise1, promise2]).then(function (value) {
  console.log(value); // "two" // Both promises will resolve, but promise2 is faster
});
```


