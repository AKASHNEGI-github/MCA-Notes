# REACTJS

---

### Rect-Vite Setup
![React-Vite-Setup](https://github.com/AKASHNEGI-github/MCA-Notes/blob/main/Images/React-Vite-Setup.png)

### What is React
React (aka React.js or ReactJS) is an open-source front-end JavaScript library that is used for building composable user interfaces, especially for single-page applications. It is used for handling view layer for web and mobile apps based on components in a declarative approach.

React was created by Jordan Walke, a software engineer working for Facebook. React was first deployed on Facebook's News Feed in 2011 and on Instagram in 2012.

### What are the major Features of React
- It uses **JSX** syntax, a syntax extension of JS that allows developers to write HTML in their JS code.
- It uses **Virtual DOM** instead of Real DOM considering that Real DOM manipulations are expensive.
- It supports **server-side rendering** which is useful for Search Engine Optimizations(SEO).
- It follows **Unidirectional or one-way** data flow or data binding.
- It uses **reusable/composable** UI components to develop the view.

### What are the Advantages of React
- Increases the application's performance with Virtual DOM.
- JSX makes code easy to read and write.
- It renders both on client and server side (SSR).
- Easy to integrate with frameworks (Angular, Backbone) since it is only a view library.
- Easy to write unit and integration tests with tools such as Jest.

### What are the Limitations of React
- React is just a view library, not a full framework.
- There is a learning curve for beginners who are new to web development.
- Integrating React into a traditional MVC framework requires some additional configuration.
- The code complexity increases with inline templating and JSX.
- Too many smaller components leading to over engineering or boilerplate.

### What is JSX
_JSX_ stands for _JavaScript XML_ and it is an XML-like syntax extension to ECMAScript. JSX allows us to write HTML-like code directly inside JavaScript, enabling us to create UI components more efficiently.

### What is Virtual DOM
The Virtual DOM (VDOM) is a lightweight, in-memory representation of the real DOM (Document Object Model). It helps React manage UI updates more efficiently by keeping a virtual version of the UI in memory. When changes occur, React updates only the necessary parts of the real DOM, instead of re-rendering everything.

### How Virtual DOM works
- Rendering the Virtual DOM: React creates a virtual representation of the UI as a tree of JavaScript objects.
- Updating State: It generates a new Virtual DOM tree to reflect the updated state when the application state changes.
- Diffing Algorithm: React compares the new Virtual DOM tree with the previous one using its efficient diffing algorithm to identify the minimal set of changes required.
- Updating the Real DOM: React applies only the necessary changes to the real DOM, optimizing rendering performance.

### What is Reconciliation
Reconciliation is the process through which React updates the Browser DOM and makes React work faster. React use a diffing algorithm so that component updates are predictable and faster. React would first calculate the difference between the real DOM and the copy of DOM (Virtual DOM) when there's an update of components. React stores a copy of Browser DOM which is called Virtual DOM. When we make changes or add data, React creates a new Virtual DOM and compares it with the previous one. This comparison is done by Diffing Algorithm. Now React compares the Virtual DOM with Real DOM. It finds out the changed nodes and updates only the changed nodes in Real DOM leaving the rest nodes as it is. This process is called Reconciliation.

### What is the difference between Virtual DOM and Real DOM
| Virtual DOM | Real DOM |
| ---------------------- |
| It is a lightweight copy of the original DOM | It is a tree representation of HTML elements |
| It is maintained by JavaScript libraries | It is maintained by the browser after parsing HTML elements |
| After manipulation it only re-renders changed elements | After manipulation, it re-render the entire DOM |
| Updates are lightweight | Updates are heavyweight |
| Performance is fast and UX is optimised	 | Performance is slow and the UX quality is low |
| Highly efficient as it performs batch updates | Less efficient due to re-rendering of DOM after each update |

### What are Fragments
ReactJS Fragments are a way to group multiple elements without adding an extra node to the DOM. It allows you to return multiple child elements from a component without wrapping them in a parent container like a <div>.
```jsx
import React from 'react'
import { useState } from 'react'
import './App.css'

function App() {
  return (
    <>
      <h1>Hello, Akash!</h1>
    </>
  )
}

export default App
```

```jsx
import React from 'react'
import { useState } from 'react'
import './App.css'

function App() {
  return (
    <React.Fragment>
      <h1>Hello, Akash!</h1>
    </React.Fragment>
  )
}

export default App
```

### What are Components in React
Components are the JavaScript functions or reusable piece of code which helps in creating User Interface (UI) in React.
- **Functional Component** - These are the pure JavaScript functions that accept prop object as one and only one parameter and return React element to render output.
```jsx
import React from 'react'
import { useState } from 'react'
import './App.css'

function App() {
  return (
    <>
      <h1>Hello, Akash!</h1>
    </>
  )
}

export default App
```

- **Class Component** - These components defiened using class keyword and include extends React.Component and render function.
```jsx
class App extends React.Component {
  render(){
    return(
      <>
        <h1>Akash Negi</h1>
      </>
    )
  }
}

export default App
```

### What is the difference between Functional Component and Class Component
### What is the difference between StateFull Component and StateLess Component
### What is the difference between Controlled Component and UnCntrolled Component
### What is the difference between State and Props

### What are Props in React
In React, props (short for "properties") are used to pass information from one component to another. The main purpose of props is to allow a parent component to send data to its child components.
- Props cannot be modified by the receiving component.
- They are strictly for reading data and should not be altered.
- Props can be updated when the parent component’s state changes.
```jsx
import { useState } from 'react'
import './App.css'

function Greet(props) {
  return (
    <>
      <h1>Hello : {props.name}!</h1>
    </>
  )
}

function App() {
  return (
    <>
      <Greet name="Akash"/>
    </>
  )
}

export default App
```

### What are Prop Drilling in React
```jsx
import React from 'react'
import { useState } from 'react'
import './App.css'

function Parent() {
  return (
    <>
      <h1>Parent Component</h1>
      <Child name="Akash"/>
    </>
  )
}

function Child(props) {
  return (
    <>
      <h1>Child Component</h1>
      <GrandChild name={props.name}/>
    </>
  )
}

function GrandChild(props) {
  return (
    <>
      <h1>Grand Child Component</h1>
      <h2>Hello, {props.name}!</h2>
    </>
  )
}

function App() {
  return (
    <>
      <Parent/>
    </>
  )
}

export default App
```

### What is State in React
State of a component is an object that holds some information that may change over the lifetime of the component. Whenever state changes, React re-renders the component to reflect the updated data. This enables you to build dynamic UIs that respond to user interactions.

Syntax : const [state, setState] = useState(initialState);
- state: The current state value.
- setState: A function that is used to update the state.
- initialState: The initial value that the state will hold when the component is first rendered.
```jsx
import React from 'react'
import { useState } from 'react'
import './App.css'

function Counter() {
  const [count , setCount] = useState(0);

  return (
    <>
      <h1>React Counter Application</h1>
      <h2>Count : {count}</h2>
      <button onClick={() => setCount(count+1)}>Increament</button>
      <button onClick={() =>setCount(0)}>Reset</button>
      <button onClick={() =>setCount(count-1)}>Decreament</button>
    </>
  )
}

function App() {
  return (
    <>
      <Counter/>
    </>
  )
}

export default App
```

### What are Hooks in React
React Hooks are functions that allow functional components in React to manage state, handle side effects, and access other React features without needing class components.
- Simplifies Code: Hooks provide a simpler and cleaner way to write components by using functions instead of classes.
- State and Side Effects: Hooks allow you to use state (useState) and side effects (useEffect) in functional components.
- Reusability: Hooks make it easier to share logic across components by creating custom hooks.
- Readability: Functional components with hooks tend to be more concise and easier to read than class components.

### What is useState Hook
### What is useEffect Hook
### What is useCallback Hook
### What is useRef Hook
### What is useMemo Hook
### What is Context Hook
### What is Performance Hook
### What is Custom Hook

### What is the difference between State and Props
In React, both state and props are plain JavaScript objects and used to manage the data of a component, but they are used in different ways and have different characteristics.

The state entity is managed by the component itself and can be updated using the setter(setState() for class components) function. Unlike props, state can be modified by the component and is used to manage the internal state of the component. i.e, state acts as a component's memory. Moreover, changes in the state trigger a re-render of the component and its children. The components cannot become reusable with the usage of state alone.

On the otherhand, props (short for "properties") are passed to a component by its parent component and are read-only, meaning that they cannot be modified by the own component itself. i.e, props acts as arguments for a function. Also, props can be used to configure the behavior of a component and to pass data between components. The components become reusable with the usage of props.

### What are Keys in React
Key is a special string attribute we need to include whe creating the lists of elements in React. Keys are used to give an identity to the element in the list. It is used to identify which item in the list is changed, updated, removed.



### What is the difference between Shadow DOM and Virtual DOM
The Shadow DOM is a browser technology designed primarily for scoping variables and CSS in web components. 
The Virtual DOM is a concept implemented by libraries in JavaScript on top of browser APIs.



### Why Fragments are better than container divs
- Fragments are a bit faster and use less memory by not creating an extra DOM node. This only has a real benefit on very large and deep trees.
- Some CSS mechanisms like Flexbox and CSS Grid have a special parent-child relationships, and adding divs in the middle makes it hard to keep the desired layout.
- The DOM Inspector is less cluttered.

### What are Stateful Components
If the behaviour of a component is dependent on the state of the component then it can be termed as Stateful Component. These stateful components are either function components with hooks or class components.

### What are Stateless Components
If the behaviour of a component is independent of its state then it can be termed as stateless component. You can use either a function or a class for creating stateless components. But unless you need to use a lifecycle hook in your components, you should go for function components. There are a lot of benefits if you decide to use function components here; they are easy to write, understand, and test, a little faster, and you can avoid the this keyword altogether.

### What are Controlled Components
Controlled Components are the Form elements like input, select, textarea that are managed by React state. The value of Form element is set and update through React state.

### What are Un-Controlled Components
Un-Controlled Components are the components that manage their own state internally rather than relying on React state. This approach is useful for simple forms where there is no need to manipulate input data through React state updates.

### What are Pure Components
Pure components are the components which render the same output for the same state and props. In function components, you can achieve these pure components through memoized React.memo() API wrapping around the component. This API prevents unnecessary re-renders by comparing the previous props and new props using shallow comparison. So it will be helpful for performance optimizations.

But at the same time, it won't compare the previous state with the current state because function component itself prevents the unnecessary rendering by default when you set the same state again.

### What is Lifting State Up in React
When several components need to share the same changing data then it is recommended to lift the shared state up to their closest common ancestor. That means if two child components share the same data from its parent, then move the state to parent instead of maintaining local state in both of the child components.

### What are Higher-Order Components
A higher-order component (HOC) is a function that takes a component and returns a new component. Basically, it's a pattern that is derived from React's compositional nature.

We call them Pure Components because they can accept any dynamically provided child component but they won't modify or copy any behavior from their input components.

Higher-Order Components can be used for many use cases -
- Code reuse, logic and bootstrap abstraction.
- Render hijacking.
- State abstraction and manipulation.
- Props manipulation.

### What is Children Prop
Children is a prop that allows to pass components as data to other components, just like any other prop. Component tree put between component's opening and closing tag will be passed to that component as children prop.

### What is React Fiber
Fiber is the new reconciliation engine or reimplementation of core algorithm in React v16. The goal of React Fiber is to increase its suitability for areas like animation, layout, gestures, ability to pause, abort, or reuse work and assign priority to different types of updates; and new concurrency primitives.

### What is the main goal of React Fiber?
The goal of React Fiber is to increase its suitability for areas like animation, layout, and gestures. Its headline feature is incremental rendering (the ability to split rendering work into chunks and spread it out over multiple frames).

Its main goals are - 
- Ability to split interruptible work in chunks.
- Ability to prioritize, rebase and reuse work in progress.
- Ability to yield back and forth between parents and children to support layout in React.
- Ability to return multiple elements from render().
- Better support for error boundaries.












---
