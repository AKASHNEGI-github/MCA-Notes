# HYPERTEXT MARKUP LANGUAGE

---

- **Name : Akash Negi**
- **Course : MCA (Master of Computer Applications)**
- **College : Graphic Era Hill University , Dehradun**
- **Session : 2022 - 2024**

---

### What is HTML
HTML stands for HyperText Markup Language. It is the standard markup language used to create webpages. HTML is the backbone of a web page, defining its structure and layout. HTML allows web developers to structure and present content on the internet, making it accessible to users through web browsers.

### Explain the basic structure of an HTML document
- <!DOCTYPE html> : Declares the document type and version.
- <html> : The root element that contains all other HTML elements.
- <head> : Contains meta-information about the document, such as the character encoding and the title.
- <meta charset='UTF-8'> : Specifies the character encoding for the document (UTF-8 is commonly used for international character support).
- <title> : Sets the title of the web page, displayed in the browser's title bar or tab.
- <body> : Contains the visible content of the web page.

### What are the Features of HTML5
- Video and Audio Features 
- Header and Footer
- Input tag kinds have been expanded.
- Figure and figcaption
- Placeholders 
- Preload Videos 
- Controlling the display
- Regular Expressions 
- Adaptability
- Elements that appear inline
- Support for Dynamic Pages
- Email as a property
- Cryptographic Nonces
- Reverse Links 
- Images with a width of zero
- Canvas in HTML5 

### What is the difference between HTML and HTML5
| Features | HTML | HTML5 |
| -------- | ---- | ----- |
| Definition | A hypertext markup language (HTML) is the primary language for developing web pages. | HTML5 is a new version of HTML with new functionalities with markup language with Internet technologies. |
| Multimedia support | Language in HTML does not have support for video and audio. | HTML5 supports both video and audio. |
| Storage | The HTML browser uses cache memory as temporary storage. | HTML5 has the storage options like:application cache, SQL database, and web storage. |
| Browser compatibility | HTML is compatible with almost all browsers because it has been present for a long time, and the browser made modifications to support all the features. | In HTML5, we have many new tags, elements, and some tags that have been removed/modified, so only some browsers are fully compatible with HTML5. |
| Graphics support | In HTML, vector graphics are possible with tools LikeSilver light, Adobe Flash, VML, etc. | In HTML5, vector graphics are supported by default. |
| Threading	 | In HTML, the browser interface and JavaScript running in the same thread. | The HTML5 has the JavaScript Web Worker API, which allows the browser interface to run in multiple threads. |
| Storage | Uses cookies to store data. | Uses local storage instead of cookies |
| Vector and Graphics | Vector graphics are possible with the help of technologies like VML, Silverlight, Flash,etc. | Vector graphics is an integral part of HTML5, SVG and canvas. |
| Shapes | It is not possible to create shapes like circles, rectangles, triangles. | We can draw shapes like circles, rectangles, triangles. |

### What is the difference between SVG and Canvas
- SVG is a language for describing 2D graphics in XML, while Canvas draws 2D graphics, on the fly (with JavaScript).
- SVG is XML based, which means that every element is available within the SVG DOM. You can attach JavaScript event handlers to SVG graphics.
- In SVG, each drawn shape is remembered as an object. If attributes of an SVG object are changed, the browser can automatically re-render the shape.
- Canvas is rendered pixel by pixel. In canvas, once the graphic is drawn, it is forgotten by the browser. If its position should be changed, the entire scene needs to be redrawn, including any objects that might have been covered by the graphic.

| SVG | Canvas |
| --- | ------ |
| Resolution independent | Resolution dependent |
| Support for event handlers | No support for event handlers |
| Good text rendering capabilities | Poor text rendering capabilities |
| Slow rendering if complex | You can save the resulting image as .png or .jpg |
| Not suited for game applications | Well suited for graphic-intensive games |

### What is the purpose of DOCTYPE in HTML
It specifies the document type and version of the HTML being used in a web page. 

### What is the use of the <meta> tag
The <meta> tag is used to provide metadata about an HTML document. Common uses of the <meta> tag include setting the character encoding, specifying keywords for search engines, and controlling the viewport settings for responsive design.

### How do you create a comment in HTML
Comments are useful for documenting your HTML code, explaining complex sections, or temporarily disabling certain parts of the code for debugging purposes.

```html
<!-- This is a comment -->
```

### What is an HTML entity
An HTML entity is a sequence of characters that represents a reserved character, special symbol, or character that is not easily typable or displayable in HTML.
Example - &gt; represents the greater-than sign > , &amp; represents the ampersand &.

###  What are HTML Tags
Tags are the fundamental building blocks of HTML. They are used to define and structure the content within an HTML document. Tags are enclosed within angle brackets (< and >), and most come in pairs with an opening tag and a closing tag. Tags tell the web browser how to display the content enclosed between them.

### What are HTML Attributes
Attributes provide additional information about an HTML element. Attributes can be used to modify the behavior or appearance of an element. Attributes are always specified in the opening tag and consist of a name and a value, separated by an equals sign (=). 

### What are HTML block-level elements
Block-level elements in HTML are those that typically create a new block or section on a web page.
Example - <div> , <p> , <h1> , <ul> , <ol> , <li> , <table> , <form>.

### What are HTML inline elements
Inline elements in HTML are used to format and style specific parts of text within a block-level element, without creating a new block-level container.
Example - <a> , <span> , <strong> , <br> , <img>.

### Describe the difference between <div> and <span> elements
| <div> | <span> |
| ----- | ------ |
| The <div> tag is a block level element. | The <span> tag is an inline element. |
| It is best to attach it to a section of a web page. | It is best to attach a CSS to a small section of a line in a web page. |
| It accepts align attribute. | It does not accept align attribute. |
| This tag should be used to wrap a section, for highlighting that section. | This tag should be used to wrap any specific word that you want to highlight in your webpage. |

### Explain the <a> tag and its attributes
The <a> tag is used to create hyperlinks, allowing users to navigate to other web pages or resources.
- href : Specifies the URL of the linked resource.
- target : Specifies where to open the linked resource (e.g., _blank for a new tab/window).
- title : Provides additional information about the link (usually displayed as a tooltip).

### What are semantic HTML elements
Semantic HTML elements are elements that convey meaning about the structure and content of a web page. They provide context to the content they enclose, making it easier for search engines and assistive technologies to understand the page.
- <header> : Represents a header section.
- <nav> : Represents navigation links.
- <main> : Represents the main content of the page.
- <article> : Represents a self-contained article or content block.
- <section> : Represents a thematic grouping of content.
- <aside> : Represents content that is tangentially related to the main content.
- <footer> : Represents a footer section.

### Explain the <img> element and its attributes
The <img> (image) element is used to embed images in an HTML document.
- src : Specifies the source URL of the image.
- alt : Provides alternative text for the image, which is essential for accessibility and SEO.
- width and height : Sets the dimensions of the image (in pixels).
- title : Provides a tooltip when the user hovers over the image.

```html
<img src='image.jpg' alt='Description of the image' width='300' height='200' title='Image Title'>
```

### Explain the purpose of the <iframe> tag
The <iframe> (Inline Frame) tag is used to embed another web page or external content within the current HTML document. It allows you to include content from other sources, such as videos, maps, or external websites, into your web page. The src attribute specifies the source URL of the content to be embedded. <iframe> is commonly used for embedding multimedia content and integrating external web services seamlessly into a webpage.

### Describe the <table> element and its essential attributes
The <table> element in HTML is used to create structured data tables. 
- border : Specifies the width of the table border (not recommended; use CSS for styling instead).
- width : Sets the width of the table.
- cellpadding : Specifies the space between the cell content and the cell border.
- cellspacing : Specifies the space between cells.
- summary : Provides a summary of the table for accessibility.

```html
<table border="1" width="80%" cellpadding="10" cellspacing="0" summary="Monthly expenses">
    <!-- Table content goes here -->
</table>
```

###  What is the purpose of the <form> element in HTML
The <form> element is used to create interactive forms on web pages. Forms are essential for gathering user input, such as text, checkboxes, radio buttons, and more. When a user submits a form, the data is sent to a server for processing. The action attribute in the <form> tag specifies the URL where the form data should be sent, and the method attribute defines the HTTP method to be used (usually 'GET' or 'POST').

```html
<form action="submit.php" method="post">
    <!-- Form fields go here -->
    <input type="text" name="username" placeholder="Username">
    <input type="password" name="password" placeholder="Password">
    <button type="submit">Submit</button>
</form>
```

---
