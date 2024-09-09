# JAVASCRIPT

---

### Who created JavaScript
JavaScript was created by Brendan Eich in 1995 during his time at Netscape Communications. Initially it was developed under the name Mocha, but later the language was officially called LiveScript when it first shipped in beta releases of Netscape.

### Why is JavaScript treated as Single threaded
JavaScript is a single-threaded language. Because the language specification does not allow the programmer to write code so that the interpreter can run parts of it in parallel in multiple threads or processes. Whereas languages like java, go, C++ can make multi-threaded and multi-process programs.

### Is JavaScript a compiled or interpreted language
JavaScript is an interpreted language, not a compiled language. An interpreter in the browser reads over the JavaScript code, interprets each line, and runs it. Nowadays modern browsers 

### Is JavaScript a case-sensitive language
Yes, JavaScript is a case sensitive language. The language keywords, variables, function & object names, and any other identifiers must always be typed with a consistent capitalization of letters.

### Is there any relation between Java and JavaScript
No, they are entirely two different programming languages and have nothing to do with each other. But both of them are Object Oriented Programming languages and like many other languages, they follow similar syntax for basic features(if, else, for, switch, break, continue etc).

### What is ECMAScript
ECMAScript is the scripting language that forms the basis of JavaScript. ECMAScript standardized by the ECMA International standards organization in the ECMA-262 and ECMA-402 specifications. The first edition of ECMAScript was released in 1997.

### What is JSON
JSON (JavaScript Object Notation) is a lightweight format that is used for data interchanging. It is based on a subset of JavaScript language in the way objects are built in JavaScript.

### What are the syntax rules of JSON
- The data is in name/value pairs
- The data is separated by commas
- Curly braces hold objects
- Square brackets hold arrays

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

### What is the difference between == and === operators
Both are comparision operators. the difference is that == is used to compare values whereas === is used to compare both values as well as data-type.
```js
0 == false   // true
0 === false  // false
1 == "1"     // true
1 === "1"    // false
null == undefined // true
null === undefined // false
'0' == false // true
'0' === false // false
NaN == NaN or NaN === NaN // false
[]==[] or []===[] //false, refer different objects in memory
{}=={} or {}==={} //false, refer different objects in memory
```

### What is the purpose of the Array slice method
The slice() method returns the selected elements in an array as a new array object. It selects the elements starting at the given start argument, and ends at the given optional end argument without including the last element. If you omit the second argument then it selects till the end of the array. This method can also accept negative index which counts back from the end of the array. Slice method doesn't mutate the original array but it returns the subset as a new array.
```js
let arrayIntegers = [1, 2, 3, 4, 5];
let arrayIntegers1 = arrayIntegers.slice(0, 2); // returns [1,2]
let arrayIntegers2 = arrayIntegers.slice(2, 3); // returns [3]
let arrayIntegers3 = arrayIntegers.slice(4); //returns [5]
let arrayIntegers4 = arrayIntegers.slice(-3, -1); //returns [3, 4]
```

### What is the purpose of the Array splice method
The splice() method adds/removes items to/from an array, and then returns the removed item. The first argument specifies the array position/index for insertion or deletion whereas the optional second argument indicates the number of elements to be deleted. Each additional argument is added to the array. Splice method modifies the original array and returns the deleted array.
```js
let arrayIntegersOriginal1 = [1, 2, 3, 4, 5];
let arrayIntegersOriginal2 = [1, 2, 3, 4, 5];
let arrayIntegersOriginal3 = [1, 2, 3, 4, 5];

let arrayIntegers1 = arrayIntegersOriginal1.splice(0, 2); // returns [1, 2]; original array: [3, 4, 5]
let arrayIntegers2 = arrayIntegersOriginal2.splice(3); // returns [4, 5]; original array: [1, 2, 3]
let arrayIntegers3 = arrayIntegersOriginal3.splice(3, 1, "a", "b", "c"); //returns [4]; original array: [1, 2, 3, "a", "b", "c", 5]
```

### What is the difference between slice and splice
| Slice | Splice |
| ----- | ------ |
| Doesn't modify the original array (immutable) | Modifies the original array (mutable) |
| Returns the subset of original array | Returns the deleted elements as array |
| Used to pick the elements from array | Used to insert/delete elements to/from array |

### What is the difference between Call , Apply and Bind
Call and Apply are pretty much interchangeable. Both execute the current function immediately. You need to decide whether it’s easier to send in an array or a comma separated list of arguments. You can remember by treating Call is for comma (separated list) and Apply is for Array.
Bind creates a new function that will have this set to the first parameter passed to bind().

- Call : The call() method invokes a function with a given this value and arguments provided one by one.
```js
var employee1 = { firstName: "John", lastName: "Rodson" };
var employee2 = { firstName: "Jimmy", lastName: "Baily" };

function invite(greeting1, greeting2) {
  console.log(
    greeting1 + " " + this.firstName + " " + this.lastName + ", " + greeting2
  );
}

invite.call(employee1, "Hello", "How are you?"); // Hello John Rodson, How are you?
invite.call(employee2, "Hello", "How are you?"); // Hello Jimmy Baily, How are you?
```

- Apply : Invokes the function with a given this value and allows you to pass in arguments as an array.
```js
var employee1 = { firstName: "John", lastName: "Rodson" };
var employee2 = { firstName: "Jimmy", lastName: "Baily" };

function invite(greeting1, greeting2) {
  console.log(
    greeting1 + " " + this.firstName + " " + this.lastName + ", " + greeting2
  );
}

invite.apply(employee1, ["Hello", "How are you?"]); // Hello John Rodson, How are you?
invite.apply(employee2, ["Hello", "How are you?"]); // Hello Jimmy Baily, How are you?
```

- Bind : returns a new function, allowing you to pass any number of arguments.
```js
var employee1 = { firstName: "John", lastName: "Rodson" };
var employee2 = { firstName: "Jimmy", lastName: "Baily" };

function invite(greeting1, greeting2) {
  console.log(
    greeting1 + " " + this.firstName + " " + this.lastName + ", " + greeting2
  );
}

var inviteEmployee1 = invite.bind(employee1);
var inviteEmployee2 = invite.bind(employee2);
inviteEmployee1("Hello", "How are you?"); // Hello John Rodson, How are you?
inviteEmployee2("Hello", "How are you?"); // Hello Jimmy Baily, How are you?
```

### What is Scope in Javacript
Scope is the accessibility of variables, functions, and objects in some particular part of your code during runtime. In other words, scope determines the visibility of variables and other resources in areas of your code.

### What is the purpose of the let keyword
The let statement declares a block scope local variable. Hence the variables defined with let keyword are limited in scope to the block, statement, or expression on which it is used. Whereas variables declared with the var keyword used to define a variable globally, or locally to an entire function regardless of block scope.
```js
let counter = 30;
if (counter === 30) {
  let counter = 31;
  console.log(counter); // 31
}
console.log(counter); // 30 (because the variable in if block won't exist here)
```

### What is the difference between let and var
| var | let |
| --- | --- |
| It has been available from the beginning of JavaScript | Introduced as part of ES6 |
| It has function scope | It has block scope |
| Variable declaration will be hoisted, initialized as undefined	 | Hoisted but not initialized |
| It is possible to re-declare the variable in the same scope | It is not possible to re-declare the variable |

```js
function userDetails(username) {
  if (username) {
    console.log(salary); // undefined due to hoisting
    console.log(age); // ReferenceError: Cannot access 'age' before initialization
    let age = 30;
    var salary = 10000;
  }
  console.log(salary); //10000 (accessible due to function scope)
  console.log(age); //error: age is not defined(due to block scope)
}
userDetails("John");
```

### What is the use of setTimeout
The setTimeout() method is used to call a function or evaluate an expression after a specified number of milliseconds.
Example - let's log a message after 2 seconds using setTimeout method.
```js
setTimeout(function () {
  console.log("Good morning");
}, 2000);
```

### What is the use of setInterval
The setInterval() method is used to call a function or evaluate an expression at specified intervals (in milliseconds). 
Example - let's log a message after 2 seconds using setInterval method.
```js
setInterval(function () {
  console.log("Good morning");
}, 2000);
```

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

### What is Memoization
Memoization is a functional programming technique which attempts to increase a function’s performance by caching its previously computed results. Each time a memoized function is called, its parameters are used to index the cache. If the data is present, then it can be returned, without executing the entire function. Otherwise the function is executed and then the result is added to the cache.
```js
const memoizAddition = () => {
  let cache = {};
  return (value) => {
    if (value in cache) {
      console.log("Fetching from cache");
      return cache[value]; // Here, cache.value cannot be used as property name starts with the number which is not a valid JavaScript  identifier. Hence, can only be accessed using the square bracket notation.
    } else {
      console.log("Calculating result");
      let result = value + 20;
      cache[value] = result;
      return result;
    }
  };
};
// returned function from memoizAddition
const addition = memoizAddition();
console.log(addition(20)); //output: 40 calculated
console.log(addition(20)); //output: 40 cached
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

### What are the pros and cons of Promises over Callbacks
Pros :
- It avoids callback hell which is unreadable
- Easy to write sequential asynchronous code with .then()
- Easy to write parallel asynchronous code with Promise.all()
- Solves some of the common problems of callbacks(call the callback too late, too early, many times and swallow errors/exceptions)

Cons : 
- It makes little complex code
- You need to load a polyfill if ES6 is not supported

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

### What are Events
Events are "things" that happen to HTML elements. When JavaScript is used in HTML pages, JavaScript can react on these events. 

Some of the examples of HTML events are - 
- Web page has finished loading
- Input field was changed
- Button was clicked
```js
<!doctype html>
<html>
 <head>
   <script>
     function greeting() {
       alert('Hello! Good morning');
     }
   </script>
 </head>
 <body>
   <button type="button" onclick="greeting()">Click me</button>
 </body>
</html>
```

### What is an Event Flow
Event flow is the order in which event is received on the web page. When you click an element that is nested in various other elements, before your click actually reaches its destination, or target element, it must trigger the click event for each of its parent elements first, starting at the top with the global window object.

There are two ways of event flow
- Top to Bottom (Event Capturing)
- Bottom to Top (Event Bubbling)

### What is Event Bubbling
Event bubbling is a type of event propagation where the event first triggers on the innermost target element, and then successively triggers on the ancestors (parents) of the target element in the same nesting hierarchy till it reaches the outermost DOM element(i.e, global window object).
By default, Event Handlers triggered in event bubbling phase.
```js
<div>
  <button class="child">Hello</button>
</div>

<script>
  const parent = document.querySelector("div");
  const child = document.querySelector(".child");

  parent.addEventListener("click",
    function () {
      console.log("Parent");
    }
  );

  child.addEventListener("click", function () {
    console.log("Child");
  });
</script>
// Child
// Parent
```

### What is Event Capturing
Event capturing is a type of event propagation where the event is first captured by the outermost element, and then successively triggers on the descendants (children) of the target element in the same nesting hierarchy till it reaches the innermost target DOM element.
You need to pass true value for addEventListener method to trigger event handlers in event capturing phase.
```js
<div>
  <button class="child">Hello</button>
</div>

<script>
  const parent = document.querySelector("div");
  const child = document.querySelector(".child");

  parent.addEventListener("click",
    function () {
      console.log("Parent");
    },
    true
  );

  child.addEventListener("click", function () {
    console.log("Child");
  });
</script>
// Parent
// Child
```

### What is the use of preventDefault method
The preventDefault() method cancels the event if it is cancelable, meaning that the default action or behaviour that belongs to the event will not occur.
Example - Prevent form submission when clicking on submit button and prevent opening the page URL when clicking on hyperlink are some common use cases. Remember that not all events are cancelable.
```js
document
  .getElementById("link")
  .addEventListener("click", function (event) {
    event.preventDefault();
  });
```

### What is the use of stopPropagation method
The stopPropagation method is used to stop the event from bubbling up the event chain. 
Example - The below nested divs with stopPropagation method prevents default event propagation when clicking on nested div(Div1).
```js
<p>Click DIV1 Element</p>
<div onclick="secondFunc()">DIV 2
  <div onclick="firstFunc(event)">DIV 1</div>
</div>

<script>
function firstFunc(event) {
  alert("DIV 1");
  event.stopPropagation();
}

function secondFunc() {
  alert("DIV 2");
}
</script>
```

### What is an Event Delegation
Event Delegation is a technique for listening to events where you delegate a parent element as the listener for all of the events that happen inside it.
Example - If you wanted to detect field changes inside a specific form, you can use event delegation technique.
```js
var form = document.querySelector("#registration-form");

// Listen for changes to fields inside the form
form.addEventListener(
  "input",
  function (event) {
    // Log the field that was changed
    console.log(event.target);
  },
  false
);
```



---
