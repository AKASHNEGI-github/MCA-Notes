# RESUME

---

## Introduction

### Tell me about yourself
Good Morning/Afternoon/Evening sir/mam. I am Akash Negi. I am from Dehradun. I have completed MCA from Graphic Era Hill University, Dehradun with overall CGPA of 8.31. My Technical Skills includes programming in C++ and I am good at Web Development as well as I am also familiar with the concepts of Object-Oriented Programming, DBMS, Operating System and Computer Networks. I have also used these skills to build several Projects which includes Movie Recommendation System, React Password Generator Application and React Quiz Application. That is all about me. Thank You.

### Tell me your Strengths
I am Punctual, Quick Learner and eager to learn new technologies and Adaptable to the new work environment.

### Tell me your Weaknessess
I am Straight Forward and an Overthinker. I trust easily which is sometime not good for my work.

### Tell me your Hobbies
My Hobbies includes Running, Cycling and Trecking. 

### Why should we Hire you
As a Fresher it is a great opportunity to showcase my skills. I am a Quick Learner and eager to learn new technologies and bring fresh ideas. I am ready to Work Hard and be a positive part of the team.

### Where do you see yourself in next 5 Years
In next 5 Years, I see myself taking leadership responsibilities and contributing to stratezise initiatives within the organization and make a meaningfull impact.

## Project - Movie Recommendation Sytem

### What is Movie Recommendation System
The Movie Recommendation System is a content-based recommendation engine developed using Python and machine learning techniques. The system leverages Natural Language Processing (NLP) to analyze and process movie descriptions. The core NLP techniques used include text vectorization via Bag of Words and word stemming using the Porter Stemmer algorithm. Cosine similarity is applied to measure the similarity between movie descriptions, allowing the system to recommend movies that are closely related in content to a user's preference.

The system was designed to handle a dataset of 5,000 movies, transforming the processed data into a serialized pickle file for efficient retrieval and display on the web interface. The frontend of the application is built using Streamlit, providing an interactive and user-friendly platform for users to receive movie recommendations based on their selected preferences.

This project demonstrates the integration of machine learning, NLP, and web development to create a practical, real-world application.

### What is Recommendation System
A recommendation system is a type of information filtering system that seeks to predict the preference a user would give to an item. These systems are widely used across various platforms, such as e-commerce websites, social media, streaming services, and more, to suggest products, content, or services that a user is likely to be interested in. The goal is to enhance the user experience by providing personalized recommendations, thereby increasing user engagement and satisfaction.

Examples Of Recommendation Systems - 
- Online e-commerce model such as Amazon recommend goods based on your browsing and purchase history.
- Music streaming services like Spotify, propose songs and artists based on your listening history.
- Podcast streaming providers such as Netflix recommend movies and TV series based on your watching history.

### What are the Types of Recommendation System
- Content-Based Filtering
Overview : Content-based filtering recommends items based on a comparison between the content (features) of the items and a user’s preferences. For example, if a user has shown interest in action movies, the system recommends other action movies based on their content, such as genre, actors, or director.

How it Works : The system uses metadata (keywords, descriptions, tags) associated with the items and compares it to what the user has liked in the past. It calculates similarity using various methods like cosine similarity, Euclidean distance, etc.

Example : Spotify recommending songs based on the genre and artists you frequently listen to.

- Collaborative Filtering
Overview : Collaborative filtering recommends items based on the preferences of other users. It assumes that if users agreed on certain items in the past, they will likely agree in the future.

Types:
- User-based Collaborative Filtering : Finds users who are similar to the current user and recommends items that those similar users liked.
- Item-based Collaborative Filtering : Finds items that are similar to what the user has liked before and recommends those similar items.
- 
How it Works : The system creates a matrix of users and items (e.g., ratings, likes) and finds patterns or correlations between them to generate recommendations.

Example : Amazon's "Customers who bought this item also bought" feature.
  
- Hybrid Filtering
Overview : Hybrid filtering combines multiple recommendation techniques to improve the quality of recommendations. By leveraging the strengths of different approaches, it provides more accurate and diverse suggestions.

How it Works : It can be a combination of content-based and collaborative filtering or other models like knowledge-based or demographic-based recommendations.

Example : Netflix uses a hybrid approach by combining collaborative filtering with content-based methods to recommend movies and shows.

### What is Machine Learning
Machine learning is a method of data analysis that automates analytical model building. It is a branch of artificial intelligence based on the idea that systems can learn from data, identify patterns and make decisions with minimal human intervention.

### What is Natural Language Processing
Natural language processing (NLP) is a field of computer science and a subfield of artificial intelligence that aims to make computers understand human language. NLP uses computational linguistics, which is the study of how language works, and various models based on statistics, machine learning, and deep learning. These technologies allow computers to analyze and process text or voice data, and to grasp their full meaning, including the speaker’s or writer’s intentions and emotions.

Applications of NLP -
- Sentiment Analysis
- Machine Translation
- Chatbots and Virtual Assistants
- Text Summarization
- Speech Recognition
- Information Retrieval
- Named Entity Recognition (NER)
- Text Classification
- Language Modeling
- Document Clustering and Topic Modeling
- Optical Character Recognition (OCR)
- Personalization and Recommendation Systems
- Text Generation
- Question Answering Systems
- Sentiment and Emotion Recognition

### What are the Similarity Techniques used in Recommendation Systems
Similarity techniques in recommendation systems are used to measure the degree of similarity between items or users. The choice of similarity measure depends on the type of data and the recommendation system being used.

- Cosine Similarity : Cosine similarity measures the cosine of the angle between two non-zero vectors in a multi-dimensional space. It is widely used in text-based and collaborative filtering systems. It is often used in content-based filtering where items are represented as vectors of features (e.g., keywords or ratings). It works well for high-dimensional sparse data. Example - Finding the similarity between two movie descriptions based on their TF-IDF vectors.

- Pearson Correlation Coefficient : Pearson correlation measures the linear correlation between two variables, providing a value between -1 and 1. It is used in collaborative filtering to measure the similarity between users based on their ratings of items. Example - Recommending movies to a user based on the similarity of their rating pattern with other users.
  
- Euclidean Distance : Euclidean distance measures the straight-line distance between two points in a multi-dimensional space. It is used in both content-based and collaborative filtering systems to find similar items or users based on features or ratings. Example - Finding similar products in an e-commerce store based on numerical attributes like price, rating, and size.

### What is Text Vectorization in NLP
Vectorization in NLP is the process of converting text data into numerical vectors that can be processed by machine learning algorithms. These numerical representations capture the semantic meaning and contextual relationships of the text, allowing algorithms to perform tasks such as classification, clustering, and prediction.

- Bag of Words (BoW) : The Bag of Words model represents text by converting it into a collection of words (or tokens) and their frequencies, disregarding grammar, word order, and context. Each document is represented as a vector of word counts, with each element in the vector corresponding to the frequency of a specific word in the document.

- Term Frequency-Inverse Document Frequency (TF-IDF) : TF-IDF is an extension of BoW that weighs the frequency of words by their importance across documents. Term Frequency (TF) : Measures the frequency of a word in a document. Inverse Document Frequency (IDF) : Measures the importance of a word across the entire corpus. The TF-IDF score is the product of TF and IDF.

- Count Vectorizer : The Count Vectorizer is similar to BoW but focuses on counting the occurrences of each word in the document. It converts a collection of text documents to a matrix of token counts, where each element represents the count of a word in a specific document.

### What is Stemming in NLP
Stemming is a method in text processing that eliminates prefixes and suffixes from words, transforming them into their fundamental or root form, The main objective of stemming is to streamline and standardize words, enhancing the effectiveness of the natural language processing tasks. Example - “chocolates” becomes “chocolate” and “retrieval” becomes “retrieve.”

- Porter’s Stemmer : It is based on the idea that the suffixes in the English language are made up of a combination of smaller and simpler suffixes. This stemmer is known for its speed and simplicity. The main applications of Porter Stemmer include data mining and Information retrieval. Example - EED -> EE means “if the word has at least one vowel and consonant plus EED ending, change the ending to EE” as ‘agreed’ becomes ‘agree’. 

- Lovins Stemmer : It is proposed by Lovins in 1968, that removes the longest suffix from a word then the word is recorded to convert this stem into valid words. Example - sitting -> sitt -> sit.

### What is Corpus in NLP
In Natural Language Processing (NLP), a corpus (plural: corpora) refers to a large and structured collection of text that is used for training and evaluating machine learning models or for conducting linguistic analysis. The corpus typically contains text data in the form of documents, sentences, or speech transcripts, which are essential for developing language models, performing sentiment analysis, machine translation, text summarization, and other NLP tasks.

## Project - React Password Generator Application

### What is State in React

### What is Hooks in React

### What is the role of useState, useEffect, useRef, useCallback Hooks in the Project
- useState Hook
Purpose: The useState hook is used to manage the component's state.
Role: It allows the component to re-render whenever the state changes. For example, when the user adjusts the password length or selects different character options, the state changes, triggering a re-render and updating the generated password.

- useEffect Hook
Purpose: The useEffect hook is used to handle side effects, such as fetching data or, in this case, generating a new password whenever the component's state changes.
Role: It automatically calls the passwordGenerator function whenever any of the dependencies (length, numberAllowed, lowercaseAllowed, uppercaseAllowed, specialCharacterAllowed, passwordGenerator) change. This ensures that the password is updated whenever the user modifies any of these options.

- useCallback Hook
Purpose: The useCallback hook is used to memoize functions, preventing them from being re-created on every render, which can optimize performance, especially in components that deal with heavy computations or are frequently re-rendered.
Role: It ensures that the passwordGenerator and copyPasswordToClipboard functions are only re-created when their dependencies change. This optimization reduces unnecessary re-renders and improves the application's performance, especially as the component grows in complexity.

- useRef Hook
Purpose: The useRef hook is used to persist values across renders without causing re-renders, and to directly access and manipulate DOM elements.
Role: It provides direct access to the DOM element (the password input field) so that the password can be selected and copied to the clipboard when the user clicks the "copy" button.

## Project - React Quiz Application

### What is State in React

### What is Hooks in React

### What is the role of useState, useRef Hooks in the Project
- useState Hook
Purpose: The useState hook is used to manage the component's state, which allows React to re-render the component whenever the state changes.
Role: **index**: Tracks which question is currently being presented to the user. **lock**: Prevents the user from selecting multiple answers after locking in a choice. **questions**: Dynamically updates the displayed question as the user progresses through the quiz. **score**: Updates in real-time as the user answers questions correctly. **result**: Triggers the end-of-quiz view, showing the final score and the option to reset the quiz.

- useRef
Purpose: The useRef hook is used to persist references to DOM elements (or other mutable values) across renders without causing re-renders.
Role: Answer Highlighting: The useRef hook allows direct access to the answer option DOM elements. This is used in the checkAnswer function to add the "correct" or "wrong" CSS class to the selected answer, visually indicating whether the user's selection is correct. Resetting Classes: When moving to the next question, the useRef hook allows the removal of CSS classes (like "correct" and "wrong") from the previous answer options, resetting them for the new question.

```jsx
import './PasswordGenerator.css'
import { useState , useCallback, useEffect , useRef} from 'react'

function PasswordGenerator() {

    const [length , setLength] = useState(5)
    const [numberAllowed , setNumberAllowed] = useState(false)
    const [lowercaseAllowed , setLowercaseAllowed] = useState(false)
    const [uppercaseAllowed , setUppercaseAllowed] = useState(false)
    const [specialCharacterAllowed , setspecialCharacterAllowed] = useState(false)
    const [password , setPassword] = useState("")
  
    const passwordRef = useRef(null)
  
    const passwordGenerator = useCallback(() => 
    {
      let pass = ""
      let str = ""
      
      if(numberAllowed)
      {
        str = str + "0123456789"
      }

      if(lowercaseAllowed)
      {
        str = str + "abcdefghijklmnopqrstuvwxyz"
      }

      if(uppercaseAllowed)
      {
        str = str + "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
      }
  
      if(specialCharacterAllowed)
      {
        str = str + "!@#$%^&*()-_=+[]{}"
      }
  
      for(let i=1 ; i<=length ; i++)
      {
        let char = Math.floor(Math.random() * str.length + 1)
        pass = pass + str.charAt(char)
      }
      
      setPassword(pass)
    } , [length , numberAllowed , lowercaseAllowed , uppercaseAllowed , specialCharacterAllowed , setPassword])
  
    const copyPasswordToClipboard = useCallback(() => 
    {
      passwordRef.current?.select();
      passwordRef.current?.setSelectionRange(0 , 10);
      window.navigator.clipboard.writeText(password)
    } , [password])
  
    useEffect(() => {passwordGenerator()} , [length , numberAllowed , lowercaseAllowed , uppercaseAllowed , specialCharacterAllowed , passwordGenerator])
  
    return (
      <>
        <div className="container">
          <h1>Password Generator</h1>
          <hr></hr>

          <div className="password">
            <input type="text" value={password} placeholder="Password" readOnly ref={passwordRef}/>
            <button onClick={copyPasswordToClipboard}>copy</button>
          </div>

          <div className="length">
            <input type="range" min={5} max={10} value={length} onChange={(e) => {setLength(e.target.value)}}/>
            <label>Length : {length}</label>
          </div>
  
          <div className="checkboxes">
            <input type="checkbox" defaultChecked={numberAllowed} id="numberInput" onChange={() => {setNumberAllowed((prev) => !prev);}}/>
            <label htmlFor="numberInput">Numbers</label>
          </div>

          <div className="checkboxes">
            <input type="checkbox" defaultChecked={lowercaseAllowed} id="numberInput" onChange={() => {setLowercaseAllowed((prev) => !prev);}}/>
            <label htmlFor="numberInput">Lowercase [a - z]</label>
          </div>

          <div className="checkboxes">
            <input type="checkbox" defaultChecked={uppercaseAllowed} id="numberInput" onChange={() => {setUppercaseAllowed((prev) => !prev);}}/>
            <label htmlFor="numberInput">Uppercase [A - Z]</label>
          </div>
  
          <div className="checkboxes">
            <input type="checkbox" defaultChecked={specialCharacterAllowed} id="characterInput" onChange={() => {setspecialCharacterAllowed((prev) => !prev)}}/>
            <label htmlFor="characterInput">Special Characters</label>
          </div>
          
          <h6>© Copyright 2024 <span class="akashnegi">Akash Negi</span>. All rights reserved.</h6>
        </div>
      </>
    )
  }

export default PasswordGenerator
```

```jsx
import { useRef, useState } from 'react'
import './Quiz.css'
import { data } from '../../assets/data'

function Quiz() {

    let [index , setIndex] = useState(0)
    let [lock , setLock] = useState(false)
    let [questions , setQuestions] = useState(data[index])
    let [score , setScore] = useState(0)
    let [result , setResult] = useState(false)

    let option1 = useRef(null)
    let option2 = useRef(null)
    let option3 = useRef(null)
    let option4 = useRef(null)

    let options = [option1 , option2 , option3 , option4]

    const checkAnswer = (e , ans) =>
    {
        if(lock === false)
        {
            if(questions.ans === ans)
            {
                e.target.classList.add("correct")
                setScore(++score)
            }
            else
            {  
                e.target.classList.add("wrong")
                options[questions.ans - 1].current.classList.add("correct")
            }
            setLock(true)
        }
    }

    const next = () =>
    {
        if(lock === true)
        {
            if(index === data.length - 1)
            {
                setResult(true)
                return 0
            }
            setIndex(++index)
            setQuestions(data[index])
            setLock(false)
            options.map((Option) =>
            {
                Option.current.classList.remove("wrong")
                Option.current.classList.remove("correct")
                return null
            })
        }
    }

    const reset = () =>
    {
        setIndex(0)
        setQuestions(data[0])
        setScore(0)
        setLock(false)
        setResult(false)
    }

    return (
      <>
        <div className="container">
            <h1>Quiz App</h1>
            <hr />
            {
                result? <></> : 
                <>
                <h2>{index + 1}. {questions.question}</h2>
                <ul>
                    <li ref={option1} onClick={(e) => {checkAnswer(e , 1)}} >{questions.option1}</li>
                    <li ref={option2} onClick={(e) => {checkAnswer(e , 2)}} >{questions.option2}</li>
                    <li ref={option3} onClick={(e) => {checkAnswer(e , 3)}} >{questions.option3}</li>
                    <li ref={option4} onClick={(e) => {checkAnswer(e , 4)}} >{questions.option4}</li>
                </ul>
                <button onClick={next}>Next</button>
                <div className="index">{index + 1} of {data.length} Questions</div>
                <h6>© Copyright 2024 <span class="akashnegi">Akash Negi</span>. All rights reserved.</h6>
                </>
            }
            {
                result? 
                <>
                <h2 className="score">Score : {score} out of {data.length}</h2>
                <button onClick={reset}>Reset</button>
                <h6>© Copyright 2024 <span class="akashnegi">Akash Negi</span>. All rights reserved.</h6>
                </> : <></>
            }
        </div>
      </>
    )
  }

  export default Quiz
```

## Companies 

### Cogizant




---
