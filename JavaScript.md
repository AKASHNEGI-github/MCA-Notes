# JAVASCRIPT

---

### Who created JavaScript
JavaScript was created by Brendan Eich in 1995 during his time at Netscape Communications. Initially it was developed under the name Mocha, but later the language was officially called LiveScript when it first shipped in beta releases of Netscape.

### Why is JavaScript treated as Single threaded
JavaScript is a single-threaded language. Because the language specification does not allow the programmer to write code so that the interpreter can run parts of it in parallel in multiple threads or processes. Whereas languages like java, go, C++ can make multi-threaded and multi-process programs.

### Is JavaScript a compiled or interpreted language
JavaScript is an interpreted language, not a compiled language. An interpreter in the browser reads over the JavaScript code, interprets each line, and runs it. 

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

function myFunction(){
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

let arrayIntegers1 = arrayIntegersOriginal1.splice(0, 2); // returns [1, 2], original array: [3, 4, 5]
let arrayIntegers2 = arrayIntegersOriginal2.splice(3); // returns [4, 5], original array: [1, 2, 3]
let arrayIntegers3 = arrayIntegersOriginal3.splice(3, 1, "a", "b", "c"); //returns [4], original array: [1, 2, 3, "a", "b", "c", 5]
```

### What is the difference between slice and splice
| Slice | Splice |
| ----- | ------ |
| Returns the subset of original array | Returns the deleted elements as array |
| Doesn't modify the original array (immutable) | Modifies the original array (mutable) |
| Used to pick the elements from array | Used to insert/delete elements to/from array |

### What is the use of setTimeout
The setTimeout() method is used to call a function or evaluate an expression after a specified number of milliseconds.
Example - Let's log a message after 2 seconds using setTimeout method.
```js
setTimeout(() => {
  console.log("Good morning"); // Good morning (only once)
}, 2000);
```

### What is the use of setInterval
The setInterval() method is used to call a function or evaluate an expression at specified intervals (in milliseconds). 
Example - Let's log a message after every 2 seconds using setInterval method.
```js
setInterval(() => {
  console.log("Good morning"); // Good morning (after every 2 seconds)
}, 2000);
```

### What are Arrays
The Array object enables storing a collection of multiple items under a single variable name, and has members for performing common array operations.

- Array
```js
const arr = [1,2,3,4,5];
arr.push(6);
console.log(arr); // [ 1, 2, 3, 4, 5, 6 ]
arr.pop();
console.log(arr); // [ 1, 2, 3, 4, 5 ]
console.log(arr.indexOf(5)); // 4
console.log(arr.includes(3)); // true
```

- Dynamic Array
```js
const arr = new Array(1,2,3,4,5);
arr.unshift(0);
console.log(arr); // [ 0, 1, 2, 3, 4, 5 ]
arr.shift();
console.log(arr); // [ 1, 2, 3, 4, 5 ]
```

- Array inside Array
```js
const arr1 = [1,2,3];
const arr2 = [11,12,13];
arr1.push(arr2);
console.log(arr1); // [ 1, 2, 3, [ 11, 12, 13 ] ]
```

- Join
```js
arr1 = [1,2,3];
arr2 = arr1.join();
console.log(arr2); // 1,2,3
console.log(typeof(arr2)); // string
```

- Slice
```js
const arr1 = [1,2,3,4,5]
const arr2 = arr1.slice(1,3);
console.log(arr1); // [ 1, 2, 3, 4, 5 ]
console.log(arr2); // [ 2, 3 ]
```

- Splice
```js
const arr1 = [1,2,3,4,5]
const arr2 = arr1.splice(1,3);
console.log(arr1); // [ 1, 5 ]
console.log(arr2); // [ 2, 3, 4 ]
```
- Concat
```js
const arr1 = [1,2,3];
const arr2 = [11,12,13];
const arr3 = arr1.concat(arr2);
console.log(arr3); // [ 1, 2, 3, 11, 12, 13 ]
```

- Spread
```js
const arr1 = [1,2,3];
const arr2 = [11,12,13];
const arr3 = [21,22,23];
const arr4 = [...arr1,...arr2,...arr3];
console.log(arr4); // [1,  2,  3, 11, 12, 13, 21, 22, 23]
```

- Flat
```js
arr1 = [1,2,3,[4,5],6,[7,8,[9,10]]];
arr2 = arr1.flat(Infinity);
console.log(arr2); // [1, 2, 3, 4,  5, 6, 7, 8, 9, 10]
```

```js
let a=100 , b=200 , c=300;
console.log(Array.of(a,b,c)); // [ 100, 200, 300 ]
console.log(Array.isArray("AKASH")); // false
console.log(Array.from("AKASH")); // [ 'A', 'K', 'A', 'S', 'H' ]
```

### What is Filter
The filter() method is an iterative method. It calls a provided callbackFn function once for each element in an array, and constructs a new array of all the values for which callbackFn returns a truthy value. Array elements which do not pass the callbackFn test are not included in the new array. 
```js
const arr = [1,2,3,4,5,6,7,8,9];
let newArr = arr.filter((num) => num > 5);
console.log(newArr); // [ 6, 7, 8, 9 ]
```

```js
const arr = [1,2,3,4,5,6,7,8,9];
const newArr = arr.filter((num) => {
    for(let i=0 ; i<num ; i++){
        return (num % 2 == 0);
    }
})
console.log(newArr); // [ 2, 4, 6, 8 ]
```

### What is Map
The map() method is an iterative method. It calls a provided callbackFn function once for each element in an array and constructs a new array from the results.
```js
const arr = [1,2,3,4,5,6,7,8,9];
const newArr = arr.map((num) => {
    return (num+10);
})
console.log(newArr); // [11, 12, 13, 14, 15, 16, 17, 18, 19]
```

```js
const arr = [1,2,3,4,5,6,7,8,9];
const newArr = arr
    .map((num) => num*10)
    .map((num) => num+1)
    .filter((num) => num > 50);
console.log(newArr); // [ 51, 61, 71, 81, 91 ]
```

### What is Reduce
The reduce() method is an iterative method. It runs a "reducer" callback function over all elements in the array, in ascending-index order, and accumulates them into a single value. Every time, the return value of callbackFn is passed into callbackFn again on next invocation as accumulator. The final value of accumulator (which is the value returned from callbackFn on the final iteration of the array) becomes the return value of reduce(). 
```js
const arr = [1,2,3];
const initialValue = 0;
const sum = arr.reduce(function(accumulator , currentValue){
    console.log(`Accumulator : ${accumulator} & CurrentValue : ${currentValue}`);
    return (accumulator + currentValue);
} , initialValue);
console.log("Sum :" , sum); 
// Accumulator : 0 & CurrentValue : 1
// Accumulator : 1 & CurrentValue : 2
// Accumulator : 3 & CurrentValue : 3
// Sum : 6
```

### What is Call
The call() method of Function instances calls this function with a given this value and arguments provided individually.
Normally, when calling a function, the value of this inside the function is the object that the function was accessed on. With call(), you can assign an arbitrary value as this when calling an existing function, without first attaching the function to the object as a property. This allows you to use methods of one object as generic utility functions.
```js
let user = {
    name:"Akash",
    print:function(){
        console.log(this.name);
    }
};
user.print(); // Akash
```

```js
let user1 = {
    name:"Akash",
    print:function(){
        console.log(this.name);
    }
};
let user2 = {
    name:"Aman",
};
// Function Borrowing
user1.print.call(user2); // Aman
```

```js
let user = {
    name:"Akash"
};
let print = function(){ // Generic Function
    console.log(this.name);
}
print.call(user); // Akash
```

```js
let user = {
    name:"Akash"
};
let print = function(city , country){ // Generic Function
    console.log(this.name , city , country);
}
print.call(user , "Dehradun" , "India"); // Akash Dehradun India
```

### What is Apply
The apply() method of Function instances calls this function with a given this value, and arguments provided as an array (or an array-like object).
Normally, when calling a function, the value of this inside the function is the object that the function was accessed on. With apply(), you can assign an arbitrary value as this when calling an existing function, without first attaching the function to the object as a property. This allows you to use methods of one object as generic utility functions.

```js
let user = {
    name:"Akash"
};
let print = function(city , country){ // Generic Function
    console.log(this.name , city , country);
}
print.apply(user , ["Dehradun" , "India"]); // Akash Dehradun India
```

### What is Bind
The bind() method of Function instances creates a new function that, when called, calls this function with its this keyword set to the provided value, and a given sequence of arguments preceding any provided when the new function is called.
The bind() function creates a new bound function. Calling the bound function generally results in the execution of the function it wraps, which is also called the target function. The bound function will store the parameters passed — which include the value of this and the first few arguments — as its internal state. These values are stored in advance, instead of being passed at call time. You can generally see const boundFn = fn.bind(thisArg, arg1, arg2) as being equivalent to const boundFn = (...restArgs) => fn.call(thisArg, arg1, arg2, ...restArgs) for the effect when it's called (but not when boundFn is constructed).

```js
let user = {
    name:"Akash"
};
let print = function(city , country){ // Generic Function
    console.log(this.name , city , country);
}
const fun = print.bind(user , "Dehradun" , "India"); 
fun(); // Akash Dehradun India
```

### What is the difference between let and var
| var | let |
| --- | --- |
| It has been available from the beginning of JavaScript | Introduced as part of ES6 |
| It has function scope | It has block scope |
| Variable declaration will be hoisted, initialized as undefined	 | Hoisted but not initialized |
| It is possible to re-declare the variable in the same scope | It is not possible to re-declare the variable |

```js
var c = 300;
if(true)
{
  let a = 10;
  const b = 20;
  var c = 30;
  d = 40;
}
console.log(a); // ReferenceError: a is not defined
console.log(b); // ReferenceError: b is not defined
console.log(c); // 30
console.log(d); // 40
```

### What is Scope in Javacript
Scope is the accessibility of variables, functions, and objects in some particular part of your code during runtime. In other words, scope determines the visibility of variables and other resources in areas of your code.
```js
console.log(addOne(5)); // 6
function addOne(num){
  return (num + 1);
}
```

```js
console.log(addTwo(5)); // ReferenceError: Cannot access 'addTwo' before initialization
const addTwo = function(num){
  return (num + 2);
}
```

### What is Lexical Scope
```js
function outer(){
  let outerVar = "Outer Variable";
  console.log(outerVar); // Outer Variable

  function innerOne(){
    let innerOneVar = "Inner Variable One";
    console.log(outerVar); // Outer Variable
  }

  function innerTwo(){
    let innerTwoVar = "Inner Variable Two";
    console.log(innerOneVar); // ReferenceError: innerOneVar is not defined
  }

  innerOne();
  innerTwo();
}
outer();
console.log(outerVar); // ReferenceError: outerVar is not defined
```

### What are Closures
A closure is the combination of a function bundled together (enclosed) with references to its surrounding state (the lexical environment). In other words, a closure gives a function access to its outer scope. In JavaScript, closures are created every time a function is created, at function creation time.
```js
function outerFunction(){
    let name = "Akash";
    function innerFunction(){
        console.log(name);
    }
    return innerFunction;
}
let inner = outerFunction();
inner(); // Akash
```

### What is Hoisting
JavaScript Hoisting refers to the process whereby the interpreter appears to move the declaration of functions, variables, classes, or imports to the top of their scope, prior to execution of the code.
```js
//console.log(a); // ReferenceError: Cannot access 'a' before initialization
//console.log(b); // ReferenceError: Cannot access 'b' before initialization
//console.log(c); // undefined
//console.log(d); // undefined

//fun1(); // Function-1
//fun2(); // ReferenceError: Cannot access 'fun2' before initialization
//fun3(); // ReferenceError: Cannot access 'fun3' before initialization

//console.log(fun1); // [Function: fun1]
//console.log(fun2); // ReferenceError: Cannot access 'fun2' before initialization
//console.log(fun3); // ReferenceError: Cannot access 'fun3' before initialization

let a;
let b = 10;

var c;
var d = 20;

function fun1(){
    console.log("Function-1");
}

let fun2 = function(){
    console.log("Function-2");
}

let fun3 = () => {
    console.log("Function-3");
}
```

### What is the Temporal Dead Zone
The Temporal Dead Zone (TDZ) is a specific period or area of a block where a variable is inaccessible until it has been initialized with a value. This behavior in JavaScript that occurs when declaring a variable with the let and const keywords, but not with var. In ECMAScript 6, accessing a let or const variable before its declaration (within its scope) causes a ReferenceError.
```js
//console.log(a); // ReferenceError: Cannot access 'a' before initialization
//console.log(b); // ReferenceError: Cannot access 'b' before initialization
//console.log(c); // undefined
//console.log(d); // undefined
//fun1(); // Function-1

let a;
let b = 10;

var c;
var d = 20;

function fun1(){
    console.log("Function-1");
}
```

### What is an Arrow Function Lambda Expression
An Arrow Function is a shorter/concise syntax for a function expression and does not have its own this, arguments, super, or new.target. 
```js
const addTwo = (num1 , num2) => {
  return (num1 + num2);
}
console.log(addTwo(2,3)); // 5
```

```js
const addTwo = (num1 , num2) => num1 + num2;
console.log(addTwo(2,3)); // 5
```
```js
const addTwo = (num1 , num2) => (num1 + num2);
console.log(addTwo(2,3)); // 5
```

```js
const addTwo = (num1 , num2) => {num1 + num2};
console.log(addTwo(2,3)); // undefined
```

```js
const addTwo = (num1 , num2) => {name : "Akash"};
console.log(addTwo(2,3)); // undefined
```

```js
const addTwo = (num1 , num2) => ({name : "Akash"}); 
console.log(addTwo(2,3)); // { name: 'Akash' }
```

### What is an IIFE (Immediately Invoked Function Expression)
IIFE (Immediately Invoked Function Expression) is a JavaScript function that runs as soon as it is defined. 
```js
(function print(){
  console.log("Akash Negi");
})();
```

```js
(() => {
  console.log("Akash");
})(); // Akash
```

```js
((name) => {
  console.log(`Name : ${name}`);
})("Akash"); // Name : Akash
```

### What is the Currying Function
Currying is the process of taking a function with multiple arguments and turning it into a sequence of functions each with only a single argument. Currying is named after a mathematician Haskell Curry. By applying currying, an n-ary function turns into a unary function.
```js
function sum(n1){
    return function(n2){
        return function(n3){
            return (n1 + n2 + n3);
        }
    }
}

console.log("Sum :" , sum(1)(2)(3)); // Sum : 6
```

### What is Memoization
Memoization is a functional programming technique which attempts to increase a function’s performance by caching its previously computed results. Each time a memoized function is called, its parameters are used to index the cache. If the data is present, then it can be returned, without executing the entire function. Otherwise the function is executed and then the result is added to the cache.
```js
function multiply(n){
  return (n * 10);
}

function memoized(multiply){
  let cache = {};
  return function(x){
    if(cache[x]){
      console.log("Return from Cache");
      return cache[x];
    }
    else{
      console.log("Add to Cache")
      const result = multiply(x);
      cache[x] = result;
      return result;
    }
  }
}

let calculate = memoized(multiply);
console.log(calculate(5)); // Add to Cache-50
console.log(calculate(5)); // Return from Cache-50
```

### What is a First Class Function
A programming language is said to have First-class functions when functions in that language are treated like any other variable. For example, in such a language, a function can be passed as an argument to other functions, can be returned by another function and can be assigned as a value to a variable.

- Assigning a function to a variable
```js
let f1 = function(){
  console.log("Function-1");
};

f1(); // Function-1
```

- Passing a function as an argument
```js
function hi() {
  return ("Hi-");
}

function f2(hi, name) {
  console.log(hi() + name);
}

f2(hi, "Akash"); // Hi-Akash
```

- Returning a function
```js
function f3() {
  return function(){
    console.log("Function-3");
  };
}

let x = f3();
x(); // Function-3
```

### What is a Higher Order Function
A higher-order function is a function that accepts another function as an argument or returns a function as a return value or both. The higher order function is helpful to write the modular and reusable code.
```js
function areaCircle(radius){ // Function Statement/Declaration/Definition
    return (Math.PI * radius * radius);
}

function calculate(radius , areaCircle){ // Higher Order Function
    return function(){
        console.log("Area of Circle :" , areaCircle(radius));
    }
}

let f1 = calculate(3 , areaCircle); // Function Expression
f1(); // Area of Circle : 28.274333882308138
```

### What is a Callback Function
A callback function is a function passed into another function as an argument, which is then invoked inside the outer function to complete some kind of routine or action.
```js
function callbackFunction(name){
  console.log("Hello " + name);
}

function outerFunction(callbackFunction){
  let name = "Akash";
  callbackFunction(name);
}

outerFunction(callbackFunction); // Hello Akash
```

### Why do we need Callbacks
The callbacks are needed because javascript is an event driven language. That means instead of waiting for a response javascript will keep executing while listening for other events.
Example - The first function invoking an API call(simulated by setTimeout) and the next function which logs the message.
```js
function fun1(){
  setTimeout(function(){ // Simulate a code delay
    console.log("Function-1");
  } , 2000);
}

function fun2(){
    console.log("Function-2");
}

fun1();
fun2();
// Function-2
// Function-1
```
As observed from the output, javascript didn't wait for the response of the first function and the remaining code block got executed. So callbacks are used in a way to make sure that certain code doesn’t execute until the other code finishes execution.

### What is a Callback Hell
Callback Hell is an anti-pattern with multiple nested callbacks which makes code hard to read and debug when dealing with asynchronous logic.
```js
function task1(callback){
    console.log("Task-1");
    callback();
}

function task2(callback){
    console.log("Task-2");
    callback();
}

function task3(callback){
    console.log("Task-3");
    callback();
}

task1(function(){
    task2(function(){
        task3(function(){
            console.log("All Tasks Completed");
        });
    });
});
```

```
Task-1
Task-2
Task-3
All Tasks Completed
```

### What is a Promise
The Promise object represents the eventual completion (or failure) of an asynchronous operation and its resulting value.

A Promise is a proxy for a value not necessarily known when the promise is created. It allows you to associate handlers with an asynchronous action's eventual success value or failure reason. This lets asynchronous methods return values like synchronous methods: instead of immediately returning the final value, the asynchronous method returns a promise to supply the value at some point in the future.

A Promise is in one of these states - 
- Pending : initial state, neither fulfilled nor rejected.
- Fulfilled : meaning that the operation was completed successfully.
- Rejected : meaning that the operation failed.

```js
const promise1 = new Promise(function(resolve , reject){
    setTimeout(function(){
        console.log("Async task is completed");
        resolve();
    }, 1000);
});

promise1.then(function(){
    console.log("Promise completed");
});
```

```js
const promise2 = new Promise(function(resolve , reject){
    setTimeout(function(){
        resolve({name:"Akash" , course:"MCA"});
    }, 1000);
});

promise2.then(function(user){
    console.log(user); // { name: 'Akash', course: 'MCA' }
});
```

```js
const promise3 = new Promise(function(resolve , reject){
    setTimeout(function(){
        let error = false;
        if(!error){
            resolve({name:"Akash" , course:"MCA"});
        }
        else{
            reject("ERROR");
        }
    }, 1000)
});

promise3.then((user) => {
    console.log(user); // { name: 'Akash', course: 'MCA' }
    return user.name;
}).then((username) => {
    console.log(username); // Akash
}).catch(function(error){
    console.log(error);
}).finally(() => {
    console.log("FINALLY"); // FINALLY
});
```

```js
const promise4 = new Promise(function(resolve , reject){
    setTimeout(function(){
        let error = false;
        if(!error){
            resolve({name:"Akash" , course:"MCA"});
        }
        else{
            reject("ERROR");
        }
    }, 1000)
});

async function consumePromise4(){
    try{
        const response = await promise4
        console.log(response); // { name: 'Akash', course: 'MCA' }
    }
    catch(error){
        console.log(error);
    }
}

consumePromise4();
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
new Promise(function(resolve , reject){
    setTimeout(() => {resolve(1)}, 2000);
}).then(function(result){
    console.log(result); // 1
    return (result * 2);
}).then(function(result){
    console.log(result); // 2
    return (result * 3);
}).then(function(result){
    console.log(result); // 6
    return (result * 4);
}).then(function(result){
    console.log(result); // 24
    return (result * 5);
}).then(function(result){
    console.log(result); // 120
});
```

In the above handlers, the result is passed to the chain of .then() handlers with the below work flow - 
- The initial promise resolves in 2 second,
- After that .then handler is called by logging the result(1) and then return a promise with the value of result * 2.
- After that the value passed to the next .then handler by logging the result(2) and return a promise with result * 3.
- After that the value passed to the next .then handler by logging the result(2) and return a promise with result * 4.
- Finally the value passed to the last .then handler by logging the result(6) and return a promise with result * 5.

### What is promise.all
The Promise.all() static method takes an iterable of promises as input and returns a single Promise. This returned promise fulfills when all of the input's promises fulfill (including when an empty iterable is passed), with an array of the fulfillment values. It rejects when any of the input's promises rejects, with this first rejection reason.
```js
const promise1 = new Promise(function(resolve , reject){
    setTimeout(function(){
        resolve("Promise-1");
    }, 1000);
});

const promise2 = new Promise(function(resolve , reject){
    setTimeout(function(){
        resolve("Promise-2");
    }, 1000);
});

const promise3 = new Promise(function(resolve , reject){
    setTimeout(function(){
        resolve("Promise-3");
    }, 1000);
});

Promise.all([promise1, promise2, promise3]).then(function(result){
    console.log(result); // [ 'Promise-1', 'Promise-2', 'Promise-3' ]
}).catch(function(error){
    console.log(error);
});
```

```js
const promise1 = new Promise(function(resolve , reject){
    setTimeout(function(){
        resolve("Promise-1");
    }, 1000);
});

const promise2 = new Promise(function(resolve , reject){
    setTimeout(function(){
        reject("Rejected : Promise-2");
    }, 1000);
});

Promise.all([promise1, promise2]).then(function(result){
    console.log(result);
}).catch(function(error){
    console.log(error); // Rejected : Promise-2
});
```

### What is Async-Await
Async/Await is a simpler way to work with Promises in JavaScript. It lets you write code that handles tasks which take time, like fetching data, in a way like regular, step-by-step code. The async keyword is used to create a function that returns a Promise, while the await keyword pauses the function's execution until the Promise is done.
- Async Functions: An async function returns a Promise. It allows the use of the await keyword inside it.
- Await: The await keyword pauses the execution of the async function until the Promise is resolved or rejected.

### Promise vs Async/Await
| Promise | Async/Await |
|------------|------------------|
| A Promise represents an intermediate state of an operation and is guaranteed to complete its execution at some point in the future. | Async/Await is syntactic sugar for Promises, making asynchronous code behave more synchronously. |
| Promise has 3 states – resolved, rejected, and pending. | It does not have states of its own. It simply returns a Promise that will be resolved or rejected. |
| If the function `fxn1` is to be executed after the promise, then `promise.then(fxn1)` continues execution of the current function after adding `fxn1` to the callback chain. | If `fxn1` is to be executed after `await`, then `await X()` suspends execution of the current function and then `fxn1` is executed. |
| Error handling is done using `.then()` and `.catch()` methods. | Error handling is done using `try` and `catch` blocks. |
| Promise chains can become difficult to understand sometimes. | Async/Await makes it easier to read and understand the flow of the program compared to promise chains. |


### Explain Fetch API
The Fetch API provides a JavaScript interface for making HTTP requests and processing the responses.

Fetch is the modern replacement for XMLHttpRequest: unlike XMLHttpRequest, which uses callbacks, Fetch is promise-based and is integrated with features of the modern web such as service workers and Cross-Origin Resource Sharing (CORS).

With the Fetch API, you make a request by calling fetch(), which is available as a global function in both window and worker contexts. You pass it a Request object or a string containing the URL to fetch, along with an optional argument to configure the request.

The fetch() function returns a Promise which is fulfilled with a Response object representing the server's response. You can then check the request status and extract the body of the response in various formats, including text and JSON, by calling the appropriate method on the response.

- fetch() using .then
```js
const API = "https://jsonplaceholder.typicode.com/users";
fetch(API).then((response) => {
    return response.json();
}).then((data) => {
    console.log(data); // (data is the response from the API)
}).catch((error) => {
    console.log(error);
})
```

- fetch() using async-await
```js
const API = "https://jsonplaceholder.typicode.com/users";
async function getAPI() {
    try{
        const response = await fetch(API);
        const data = await response.json();
        console.log(data); 
    }
    catch(error){
        console.log(error);
    }
}
getAPI(); // (data is the response from the API)
```

### What is Debouncing
Debouncing, in the context of programming, means to discard operations that occur too close together during a specific interval, and consolidate them into a single invocation.

Debouncing is very similar to throttling. The key difference is that throttling enforces limits on continuous operations, while debouncing waits for invocations to stop for a specific time to consolidate many noisy invocations into one single invocation.

A typical use case of debouncing is when responding to user input. When the user is typing, no other action should be taken to avoid the UI becoming laggy. When the user pauses typing, we can start processing the input, such as filtering results, giving suggestions, etc. If the function search is debounced by 10 milliseconds, it means:
- The first call to search is known as the leading edge.
- For every next call to search, if it is within 10 milliseconds from the previous call, it is in the same "batch" as the previous call.
- After 10 milliseconds have elapsed from the last call to search, if no other calls have happened, we have reached the trailing edge.
Usually, search is executed once on the trailing edge only, although sometimes it might be executed on the leading edge, or even both edges, depending on the specific use case. If executed on both edges, the debouncing implementation usually also ensures that the next leading edge invocation doesn't fire at least 10 milliseconds after the previous trailing edge.

```js

```

### What is Throttling
Throttling originally meant slowing down the rate of fluid flow using an obstruction. In the context of programming, it refers to slowing down a process such that an operation can only be performed at a certain rate.

Throttling is very similar to debouncing. The key difference is that when invocations happen continuously, throttling ensures that the operation is still performed at a certain maximum rate, while debouncing waits indefinitely until the invocations stop for a certain amount of time.

A typical use case of throttling is when synchronizing with another constantly-updating state. Consider a function onScrolled, which listens for the scroll event. The scroll event may fire as often as every pixel scrolled, so the function will be called in very short intervals. If onScrolled is computationally expensive, earlier invocations might block later invocations from happening on time, or block other things from executing in the meantime, leading to a noticeable jank. In this case, we can throttle onScrolled, such that it can only be called at most once every 10 milliseconds:

The first call to onScrolled is known as the leading edge.
For every next call to onScrolled, if it is within 10 milliseconds from the first call, it is in the same "batch" as the first call.
After 10 milliseconds have elapsed from the first call to onScrolled, we have reached the trailing edge.
Usually, onScrolled is executed once on the leading edge only, although sometimes it might be executed on the trailing edge, or even both edges, depending on the specific use case. If executed on both edges, the throttling implementation usually also ensures that the next leading edge invocation doesn't fire at least 10 milliseconds after the previous trailing edge.

Via throttling, the effect of onScrolled is still continuously updated and applied — for example, if it moves another DOM element based on the document's scroll position, that DOM element is still continuously moved while the page is scrolling — but it isn't executed more often than necessary.

Network throttling means to simulate a slower network connection by only allowing a certain amount of data to be transferred at a time. Throttling a timer means to coarsen the timer's precision such that when reading the timer (such as Date.now()) continuously, the timer's value only changes at a certain maximum rate. Both are specific applications of the general concept of throttling.

```js

```

### Debouncing vs Throttling
| Aspect | Debouncing | Throttling |
|--------|-------------------------|
| Definition | Delays execution until a period of inactivity | Limits execution to a fixed rate |
| Execution Timing | Executes once after the last event | Executes at regular intervals |
| Use Case | Ideal for events with intermittent pauses (e.g., typing, resizing) | Ideal for events with constant activity (e.g., scrolling, mouse move) |
| Advantage | Reduces number of executions, improving performance and reducing unnecessary operations | Ensures function executes at a controlled rate, preventing performance degradation |
| Disadvantage | Delays execution; may miss immediate feedback | May miss events if the throttle interval is too long |

### What are Events
Events are "things" that happen to HTML elements. When JavaScript is used in HTML pages, JavaScript can react on these events. 

Some of the examples of HTML events are - 
- Web page has finished loading
- Input field was changed
- Button was clicked

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Events</title>
</head>
<body>
    <ul id="parent">
        <button id="child">Click Me</button>
    </ul>

    <script>
        // Events
        document.querySelector("button").addEventListener("click" , function(event){
            console.log("Button Clicked");
        } , false);

        // Button Clicked
    </script>
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

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Event Bubbling</title>
</head>
<body>
    <ul id="parent">
        <button id="child">Click Me</button>
    </ul>

    <script>
        // Event Bubbling (Inside -> Outside)
        document.querySelector("#parent").addEventListener("click" , function(){
            console.log("Parent Clicked");
        } , false);

        document.querySelector("#child").addEventListener("click" , function(){
            console.log("Child Clicked");
        } , false);

        // Child Clicked
        // Parent Clicked
    </script>
</body>
</html>
```

### What is Event Capturing
Event capturing is a type of event propagation where the event is first captured by the outermost element, and then successively triggers on the descendants (children) of the target element in the same nesting hierarchy till it reaches the innermost target DOM element.
You need to pass true value for addEventListener method to trigger event handlers in event capturing phase.

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Event Capturing</title>
</head>
<body>
    <ul id="parent">
        <button id="child">Click Me</button>
    </ul>

    <script>
        // Event Capturing (Outside -> Inside)
        document.querySelector("#parent").addEventListener("click" , function(){
            console.log("Parent Clicked");
        } , true);

        document.querySelector("#child").addEventListener("click" , function(){
            console.log("Child Clicked");
        } , true);

        // Parent Clicked
        // Child Clicked
    </script>
</body>
</html>
```

### What is the use of preventDefault method
The preventDefault() method cancels the event if it is cancelable, meaning that the default action or behaviour that belongs to the event will not occur.
Example - Prevent form submission when clicking on submit button and prevent opening the page URL when clicking on hyperlink are some common use cases. Remember that not all events are cancelable.

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Prevent Default</title>
</head>
<body>
    <ul id="parent">
        <a id="child" href="https://www.google.com/">Click Me</a>
    </ul>

    <script>
        // Prevent Default (Stop Default Behaviour)
        document.querySelector("#child").addEventListener("click" , function(event){
            console.log("Google Clicked");
            event.preventDefault();
        } , true);

        // Google Clicked
    </script>
</body>
</html>
```

### What is the use of stopPropagation method
The stopPropagation method is used to stop the event from bubbling up the event chain. 
Example - The below nested divs with stopPropagation method prevents default event propagation when clicking on nested div(Div1).

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Stop Propogation</title>
</head>
<body>
    <ul id="parent">
        <button id="child">Click Me</button>
    </ul>

    <script>
        // Stop Propogation (Stop Event Bubbling)
        document.querySelector("#parent").addEventListener("click" , function(){
            console.log("Parent Clicked");
        } , false);

        document.querySelector("#child").addEventListener("click" , function(event){
            console.log("Child Clicked");
            event.stopPropagation();
        } , false);

        // Child Clicked
    </script>
</body>
</html>
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

### Explain 'this' keyword in JavaScript
```js
const student = {
  name : "Akash",
  printName : function(){
    console.log(`Name : ${this.name}`);
  }
}
student.printName(); // Name : Akash
```

```js
const student = {
  name : "Akash",
  printName : function(){
    console.log(this);
  }
}
student.printName(); // { name: 'Akash', printName: [Function: printName] }
```

```js
function print(){
  let name = "Akash";
  console.log(this.name);
}
print(); // undefined
```

```js
function print(){
  console.log(this);
}
print(); // Object [global]
```

```js
console.log(this); // {}
```

```js
console.log(this); // window(Object)
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

---

### JavaScript Projects

- Background Color Changer (Closure)
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Closure</title>
    <style>
        .container 
        {
            display: flex;
            justify-content: center;
            align-items: center;
        }
    </style>
</head>
<body>
    <div class="container">
        <button id="red">Red</button>
        <button id="yellow">Yellow</button>
        <button id="green">Green</button>
    </div>
</body>
<script>
    function clickHandler(color){
        return function(){
            document.body.style.backgroundColor = `${color}`;
        }
    }
    document.getElementById("red").onclick = clickHandler("red");
    document.getElementById("yellow").onclick = clickHandler("yellow");
    document.getElementById("green").onclick = clickHandler("green");
</script>
</html>
```

- What is Document Object Model
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>DOM</title>
</head>
<body>
    <div>
        <h3>Months</h3>
        <ul id="months-list">
            <li>January</li>
            <li>February</li>
            <li>March</li>
            <li>April</li>
            <li>May</li>
            <li>June</li>
            <li>July</li>
            <li>August</li>
        </ul>
    </div>
    <div>
        <h3>Days</h3>
        <ul id="days-list">
            <li>Thursday</li>
            <li>Friday</li>
            <li>Saturday</li>
            <li>Sunday</li>
        </ul>
    </div>

    <script>
        // Create Element
        const monthsList = document.getElementById("months-list");
        const september = document.createElement("li");
        september.innerText = "September";
        monthsList.appendChild(september);
        
        const october = document.createElement("li");
        october.appendChild(document.createTextNode("October"));
        monthsList.appendChild(october);

        // Add Element
        function addNewMonth(month){
            const november = document.createElement("li");
            november.innerHTML = `${month}`;
            document.querySelector("#months-list").appendChild(november);
        }
        addNewMonth("November");

        function addNewMonthOptimized(month){
            const december = document.createElement("li");
            december.appendChild(document.createTextNode(month));
            document.querySelector("#months-list").appendChild(december);
        }
        addNewMonthOptimized("December");

        // Edit Element
        const thursday = document.querySelector("#days-list li:first-child");
        thursday.innerHTML = "Monday";

        const friday = document.querySelector("#days-list li:nth-child(2)");
        const tuesday = document.querySelector("li");
        tuesday.textContent = "Tuesday";
        friday.replaceWith(tuesday);

        const saturday = document.querySelector("#days-list li:nth-child(3)");
        saturday.outerHTML = "<li>Wednesday</li>";

        // Remove Element
        const sunday = document.querySelector("#days-list li:last-child");
        sunday.remove();
    </script> 
</body>
</html>
```








---
