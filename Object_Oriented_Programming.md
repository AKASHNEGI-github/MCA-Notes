# OBJECT - ORIENTED PROGRAMMING

---

- **Name : Akash Negi**
- **Course : MCA (Master of Computer Applications)**
- **College : Graphic Era Hill University , Dehradun**
- **Session : 2022 - 2024**

---

### What is meant by the term OOP
OOP refers to Object-Oriented Programming. It is the programming paradigm that is defined using objects. Objects can be considered as real-world instances of entities like class, that have some characteristics and behaviors.

### What is the need for OOP
- OOP helps users to understand the software easily, although they don’t know the actual implementation. 
- With OOP, the readability, understandability, and maintainability of the code increases. 
- Even very big software can be easily written and managed easily using OOPs.

### Why OOP is so popular
OOP programming paradigm is considered as a better style of programming because it helps in writing a complex piece of code easily and it also allows users to handle and maintain them easily as well. The main pillar of OOP - Data Abstraction, Encapsulation, Inheritance, and Polymorphism, makes it easy for programmers to solve complex scenarios. As a result of these, OOP is so popular.

### What are the advantages of using OOP
The advantages of OOP are - 
- OOP is very helpful in solving very complex problems. 
- Highly complex programs can be created, handled, and maintained easily using object-oriented programming. 
- OOP promotes code reuse, thereby reducing redundancy. 
- OOP also helps to hide the unnecessary details with the help of Data Abstraction. 
- OOP is based on a bottom-up approach, unlike the Structural programming paradigm, which uses a top-down approach.
- Polymorphism offers a lot of flexibility in OOPs.

### What are the dis-advantages of using OOP
The dis-advantages of OOP are - 
- Complexity
- Overhead
- Slower Execution
- Steeper Learning Curve

### What are Programming Paradigms
Programming paradigms refers to the method of classification of programming languages based on their features.
Types -
- Imperative Programming Paradigm
- Declarative Programming Paradigm

**Imperative Programming Paradigm** : Imperative programming focuses on HOW to execute program logic and defines control flow as statements that change a program state.
Types -
- **Procedural Programming Paradigm** : Procedural programming specifies the steps a program must take to reach the desired state, usually read in order from top to bottom.
- **Object-Oriented Programming** : Object-oriented programming organizes programs as objects, that contain some data and have some behavior.
- **Parallel Programming** : Parallel programming paradigm breaks a task into subtasks and focuses on executing them simultaneously at the same time.

**Declarative Programming Paradigm** : Declarative programming focuses on WHAT to execute and defines program logic, but not a detailed control flow. 
Types -
- **Logical Programming Paradigm** : Logical programming paradigm is based on formal logic, which refers to a set of sentences expressing facts and rules about how to solve a problem
- **Functional Programming Paradigm** : Functional programming is a programming paradigm where programs are constructed by applying and composing functions.
- **Database Programming Paradigm** : Database programming model is used to manage data and information structured as fields, records, and files.

### What is Structured Programming
Structured Programming refers to the method of programming which consists of a completely structured control flow. Here structure refers to a block, which contains a set of rules, and has a definitive control flow, such as (if/then/else), (while and for), block structures, and subroutines.Nearly all programming paradigms include Structured programming, including the OOPs model.

### What is the difference between Structure and Class
- Structure and Class both are user-defined data types in C++.
- We use struct for declaring structure and class for declaring a class in C++.
- The major difference between a structure and a class is that in a structure, the members are set to public by default while in a class, members are private by default.

### What is a Class
A class is a user-defined data-type. It is like a blueprint for an object that contains data-members and member-functions.
Example - First a Car's template is created and then multiple unites of cars are created on the basis of that template.
```c++
class ClassName
{
    Access Specifier:
        Data Members;
        Member Functions;
};
```

### What is an Object
An object refers to the instance of the class, which contains the instance of the members and behaviors defined in the class template. Data members and methods of a class cannot be used directly. We need to create an object (or instance) of the class to use them. 
```c++
class Student
{}s1;
```

### What are Access Specifiers
Access Specifiers are special types of keywords that are used to specify or control the accessibility of entities like classes, methods, and so on.
Access Modifiers are of 3 types -
- Public
- Private (Default)
- Protected

**Public** – The class members declared as public will be available to everyone.
```c++
class Student 
{
    public:
        string name;
};

int main() 
{
    Student s1;
    s1.name = "Akash Negi";
    cout << s1.name << endl; // Akash Negi
    return 0;
}
```

**Private** – The class members declared as private can be accessed only by the member functions inside the class.
```c++
class Student 
{
    private:
        string name;

    public:
        void setName(string name) // Setter Method
        {
            this->name = name;
        }

        string getName() // Getter Method
        {
            return name;
        }
};

int main() 
{
    Student s1;
    s1.setName("Akash Negi");
    cout << s1.getName() << endl; // Akash Negi
    return 0;
}
```

**Protected** – The class members declared as protected can be accessed only by the derived class.
```c++
class Parent 
{
    protected:
        string name;
};

class Child : public Parent
{
    public:
        void setName(string name) // Setter mMthod
        {
            this->name = name;
        }

        string getName() // Getter Method
        {
            return name;
        }
};

int main() 
{
    Child c1;
    c1.setName("Akash Negi");
    cout << c1.getName() << endl; // Akash Negi
    return 0;
}
```

### What is a Friend Class
A friend class is a class that can access both the protected and private variables of the classes where it is declared as a friend. 
```c++
class Student
{
    public:
        string name = "Akash Negi";

    private:
        string course = "MCA";

    protected:
        string college = "GEHU";

    friend class F; // Friend Class Declaration
};

class F // Friend Class Definition
{
    public:
        void Display(Student s)
        {
            cout << s.name << endl; // Akash Negi
            cout << s.course << endl; // MCA
            cout << s.college << endl; // GEHU
        }
};

int main()
{
    Student s1;
    F f;
    f.Display(s1); // Friend Class Call
    return 0;
}
```

### What is a Friend Function
A friend function is a function used to access the private, protected, and public data members or member functions of other classes. It is declared with a friend keyword. 
The advantage of a friend function is that it is not bound to the scope of the class and once it is declared in a class, furthermore to that, it cannot be called by an object of the class; therefore it can be called by other functions. 
Considering all the mentioned points we can say that a friend function is a global function.

**Global Function as Friend Function**
```c++
class Student
{
    public:
        string name = "Akash Negi";

    private:
        string course = "MCA";

    protected:
        string college = "GEHU";

    friend void Display(Student); // Friend Function Declaration
};

void Display(Student s) // Friend Function Definition
{
    cout << s.name << endl; // Akash Negi
    cout << s.course << endl; // MCA
    cout << s.college << endl; // GEHU
}

int main()
{
    Student s1;
    Display(s1); // Friend Function Call
    return 0;
}
```

**Member Function of Another Class as Friend Function**
```c++

```

**A Function Friendly to Multiple Classes**
```c++
class B; // Forward Declaration of class B

class A
{
    private:
        int x;

    public:
        void setX(int x)
        {
            this->x = x;
        }

    friend int Sum(A , B); // Friend Function of class A & class B
};

class B
{
    private:
        int y;

    public:
        void setY(int y)
        {
            this->y = y;
        }

    friend int Sum(A , B); // Friend Function of class A & class B
};

int Sum(A a , B b) // Friend Function Definition
{
    return (a.x + b.y);
}

int main()
{
    A a1;
    B b1;
    a1.setX(5);
    b1.setY(7);
    cout << "Sum : " << Sum(a1 , b1) << endl; // Sum : 12
    return 0;
}
```

**Advantages of Friend Functions**
- A friend function is able to access members without the need of inheriting the class. The friend function acts as a bridge between two classes by accessing their private data.
- It can be used to increase the versatility of overloaded operators.
- It can be declared either in the public or private or protected part of the class.

**Disadvantages of Friend Functions**
- Friend functions have access to private members of a class from outside the class which violates the law of data hiding.
- Friend functions cannot do any run-time polymorphism in their members.

### Explain 'this' pointer
'this' is a pointer that points to the object for which the function is called. The 'this' pointer holds the address of the current object, allowing access to the object's members.

**Note** - **Scope resolution operator** is for accessing static or class members and **this** pointer is for accessing object members when there is a local variable with the same name.
```c++
class Student
{
    public:
        string name;

        void setName(string name)
        {
            this->name = name;
        }
        void showName()
        {
            cout << name << endl;
        }
        Student& changeName(string name)
        {
            this->name = name;
            return *this;
        }
};

int main()
{
    Student s1;
    s1.setName("Akash Negi");
    s1.showName(); // Akash Negi

    s1.changeName("Sonu Negi").changeName("Akash Negi");
    s1.showName(); // Akash Negi
    return 0;
}
```

### Explain 'static' Data members
Static data members are class members that are declared using static keywords. A static member has certain special characteristics which are as follows:
- Only one copy of that member is created for the entire class and is shared by all the objects of that class.
- It is initialized before any object of this class is created, even before the main starts.
- It is visible only within the class, but its lifetime is the entire program.
```c++
static int count = 0; // Static Variable
static string college = "GEHU"; // Static Variable

class Student
{
    private:
        static string course; // Static Data Member/Class Variable

    public:
        static void showCourse() // Static Member Function
        {
            cout << course << endl;
        }
};

string Student :: course = "MCA";

int main()
{
    cout << count << endl; // 0
    cout << college << endl; // GEHU
    Student :: showCourse(); // MCA
    return 0;
}
```

### Explain 'static' member Functions
Static member functions of a class can only access static member variables and other static member functions. They do not have access to non-static members because they are not tied to any particular instance of the class.
```c++
class Student
{
    private:
        static string course; // Static Data Member/Class Variable

    public:
        static void showCourse() // Static Member Function
        {
            cout << course << endl;
        }
};

string Student :: course = "MCA";

int main()
{
    Student :: showCourse(); // MCA
    return 0;
}
```

### What is a Constructor
Constructors are special methods whose name is the same as the class name. The constructors are used to initialize the objects of a class.
Types of Constructors
- Default Constructor 
- Parameterized Constructor 
- Copy Constructor

### What is Default Constructor
The default constructor is a constructor that doesn’t take any arguments. It is a non-parameterized constructor that is automatically defined by the compiler when no explicit constructor definition is provided.
```c++
class Student
{
    public:
        string name;

        Student()
        {
            cout << "Default Constructor";
        }
};

int main()
{
    Student s1; // Default Constructor
    return 0;
}
```

### What is Parameterized Constructor
The constructors that take some arguments are known as parameterized constructors. 
```c++
class Student
{
    public:
        string name;

        Student(string name)
        {
            cout << "Parameterized Constructor" << endl;
            this->name = name;
        }
};

int main()
{
    Student s1("Akash Negi"); // Parameterized Constructor
    return 0;
}
```

### What is Copy Constructor
A copy constructor is a member function that initializes an object using another object of the same class.
```c++
class Student
{
    public:
        string name = "Akash Negi";

        Student(Student &t) // Copy Constructor
        {
            name = t.name;
        }
};

int main()
{
    Student s1;
    cout << s1.name << endl; // Akash Negi
    Student s2(s1);
    cout << s2.name << endl; // Akash Negi
    Student s3 = s2;
    cout << s3.name << endl; // Akash Negi
    return 0;
}
```

Types -
- Default Copy Constructor
- User-Defined Copy Constructor

**Default Copy Constructor**
The Default Copy Constructor does only Shallow Copy.
```c++
class Student
{
    public:
        string name = "Akash Negi";
};

int main()
{
    Student s1;
    cout << s1.name << endl; // Akash Negi
    Student s2(s1); // Default Copy Constructor Called
    cout << s2.name << endl; // Akash Negi
    Student s3 = s2; // Default Copy Constructor Called
    cout << s3.name << endl; // Akash Negi
    return 0;
}
```

**User-Defined Copy Constructor**
The User-Defined Copy Constructor does Deep Copy.
```c++
class Student
{
    public:
        string name = "Akash Negi";

        Student(Student &t) // User-Defined Copy Constructor
        {
            name = t.name;
        }
};

int main()
{
    Student s1;
    cout << s1.name << endl; // Akash Negi
    Student s2(s1); // User-Defined Copy Constructor Called
    cout << s2.name << endl; // Akash Negi
    Student s3 = s2; // User-Defined Copy Constructor Called
    cout << s3.name << endl; // Akash Negi
    return 0;
}
```

### What is a Destructor
Destructors are also special methods. But destructors free up the resources and memory occupied by an object. Destructors are automatically called when an object is being destroyed. Destructors have the same name as the class preceded by a tilde (~) sign.
```c++
class Student
{
    public:
        string name = "Akash Negi";

        Student()
        {
            cout << "Constructor" << endl;
        }

        ~Student()
        {
            cout << "Destructor" << endl;
        }
};

int main()
{
    Student s1; // Constructor
    return 0; // Destructor
}
```

**Note** - Objects are destroyed in the reverse order of their creation.
```c++
static int Count = 0;

class Student
{
    public:
        string name = "Akash Negi";

        Student()
        {
            Count++;
            cout << "Object created : " << Count << endl;
        }

        ~Student()
        {
            cout << "Object destroyed : " << Count << endl;
            Count--;
        }
};

int main()
{
    Student s1 , s2 , s3;
    return 0;
}
```

    Object created : 1
    Object created : 2
    Object created : 3
    Object destroyed : 3
    Object destroyed : 2
    Object destroyed : 1

### What are the features of OOP
- Encapsulation
- Abstraction  
- Inheritance 
- Polymorphism 

### What is Encapsulation
Encapsulation refers to the process of binding data members and methods of a program together to do a specific job, without revealing unnecessary details.
Example -
```c++

```

### What is Abstraction
Abstraction refers to the process of showing only the necessary details and hiding unnecessary details from the user. 
Example - Consider a car. We only need to know how to run a car, and not how the wires are connected inside it. This is obtained using Abstraction.
```c++

```

### What is Inheritance
Inheritance refers to the idea that a class is derived from another class and uses data and implementation of that other class.
**Child Class** - The class which is derived is called Child Class.
**Parent Class** - The class from which the child class is derived is called Parent or Base or Super Class. 
Example -

### What are the types of Inheritance

| Access Specifier | Public | Protected | Private |
| ---------------- | ------ | --------- | ------- |
| Public | Public | Protected | Private |
| Protected | Protected | Protected | Private |
| Private | X | X | X |

**Single Inheritance** : Child class derived directly from the base class.
```c++
class Parent
{
    public:
        string Name = "Parent - Class";
};

class Child : public Parent
{};

int main()
{
    Child c1;
    cout << c1.Name << endl; // Parent - Class
    return 0;
}
```

**Multiple Inheritance** : Child class derived from multiple base classes.
```c++
class Parent1
{
    public:
        string Name = "Parent1 - Class";
};

class Parent2
{
    public:
        string Name = "Parent2 - Class";
};

class Child : public Parent1 , public Parent2
{};

int main()
{
    Child c1;
    cout << c1.Parent1::Name << endl; // Parent1 - Class
    cout << c1.Parent2::Name << endl; // Parent2 - Class
    return 0;
}
```

**Multilevel Inheritance** : Child class derived from the class which is also derived from another base class.
```c++
class Parent1
{
    public:
        int id_parent1 = 1;
};

class Parent2 : public Parent1
{
    public:
        int id_parent2 = 2;
};

class Child : public Parent2
{};

int main()
{
    Child c1;
    cout << c1.id_parent1 << endl; // 1
    cout << c1.id_parent2 << endl; // 2
    return 0;
}
```

**Hierarchical Inheritance** : Multiple child classes derived from a single base class.
```c++
class Parent
{
    public:
        string name = "Akash Negi";
};

class Child1 : public Parent
{};

class Child2 : public Parent
{};

int main()
{
    Child1 c1;
    Child2 c2;
    cout << c1.name << endl; // Akash Negi
    cout << c2.name << endl; // Akash Negi
    return 0;
}
```

**Hybrid Inheritance** : Inheritance consisting of multiple inheritance types of the above specified.

### What is Diamond Problem
The Diamond Problem is an ambiguity error that arises in multiple inheritance when a derived class inherits from two or more base classes that share a common ancestor. This results in the inheritance hierarchy forming a diamond shape, hence the name “Diamond Problem.” The ambiguity arises because the derived class has multiple paths to access members or methods inherited from the common ancestor, leading to confusion during method resolution and member access.
```c++
class A
{
    public:
        void fun()
        {
            cout << "Class - A" << endl;
        }
};

class B1 : virtual public A
{
    public:
        void fun()
        {
            cout << "Class - B1" << endl;
        }
};

class B2 : virtual public A
{
    public:
        void fun()
        {
            cout << "Class - B2" << endl;
        }
};

class C : public B1 , public B2
{};

int main()
{
    C c1;
    c1.fun(); // error: request for member 'fun' is ambiguous
    c1.A::fun(); // Class - A
    c1.B1::fun(); // Class - B1
    c1.B2::fun(); // Class - B2
    return 0;
}
```

### What are the limitations of Inheritance
- Inheritance needs more time to process, as it needs to navigate through multiple classes for its implementation.
- The base class and the child class are tightly coupled. Therefore, if changes need to be made, they may need to be made in both classes at the same time.
- Inheritance might be complex for implementation, as well. So if not correctly implemented, this might lead to unexpected errors or incorrect outputs.

### What is Polymorphism
The word “Polymorphism” means having many forms. Polymorphism refers to the property of some code to behave differently for different contexts. 
Example -

Types -
- Compile Time Polymorphism 
- Runtime Polymorphism

### What is Compile Time Polymorphism
Compile time polymorphism is also known as Static Polymorphism or Early Binding. It is the type of polymorphism where the binding of the call to its code is done at the compile time. 
Example -
- Method Overloading
- Operator Overloading

### What is Run Time Polymorphism
Runtime Polymorphism is known as Dynamic Polymorphism or Late Binding. It is the type of polymorphism where the actual implementation of the function is determined during the runtime or execution.
Example -
- Method Overriding
- Virtual Functions

### What is Method Overloading
When there are multiple functions with the same name but different parameters then this is known as Method (Function) Overloading.
```c++
class Math
{
    public:
        int sum(int a , int b)
        {
            return (a + b);
        }

        double sum(int a , double b , int c)
        {
            return (a + b + c);
        }
};

int main()
{
    Math m;
    cout << m.sum(5 , 10) << endl; // 15
    cout << m.sum(5 , 10.5 , 15) << endl; // 30.5
    return 0;
}
```

### What is Operator Overloading
It is a practice of giving a special meaning to the existing meaning of an operator or in simple terms redefining the pre-redefined meaning of the operator.
```c++
class Math
{
    public:
        int value;

        int operator +(Math m2) // Operator Overloading
        {
            return (this->value - m2.value);
        }
};

int main()
{
    Math m1 , m2;
    m1.value = 7;
    m2.value = 5;
    cout << "Difference after Overloading '+' : " << m1 + m2 << endl; // Difference after Overloading '+' : 2
    return 0;
}
```

### What is Method Overriding
When a base class member function is redefined in a derived class with the same arguments and return type then this is known as Method (Function) Overriding.
```c++
class Parent
{
    public:
        void Display()
        {
            cout << "Parent Class : Display" << endl;
        }
};

class Child : public Parent
{
    public:
        void Display()
        {
            cout << "Child Class : Display" << endl;
        }
};

int main()
{
    Parent p1;
    p1.Display(); // Parent Class : Display
    Parent *p2 = new Parent();
    p2->Display(); // Parent Class : Display
    Parent *p3 = new Child();
    p3->Display(); // Parent Class : Display

    Child c1;
    c1.Display(); // Child Class : Display
    Child *c2 = new Child();
    c2->Display(); // Child Class : Display
    Child *c3 = new Parent();
    c3->Display(); // error: invalid conversion from 'Parent*' to 'Child*'

    return 0;
}
```

### What is Virtual Function
A virtual function is a member function that is declared within a base class and is re-defined (overridden) by a derived class. In C++, a virtual function is declared using the virtual keyword. It is used to tell the compiler to perform dynamic linkage or late binding on the function. When the function is made virtual, C++ determines which function is to be invoked at the runtime based on the type of the object pointed by the base class pointer.
```c++
class Parent
{
    public:
        void show()
        {
            cout << "Parent Class : show" << endl;
        }

        virtual void print()
        {
            cout << "Parent Class : print" << endl;
        }
};

class Child : public Parent
{
    public:
        void show()
        {
            cout << "Child Class : show" << endl;
        }

        void print()
        {
            cout << "Child Class : print" << endl;
        }
};

int main()
{
    Parent p1;
    Parent *p_1 = &p1;
    p_1->show(); // Parent Class : show
    p_1->print(); // Parent Class : print

    Child c1;
    Parent *p_2 = &c1;
    p_2->show(); // Parent Class : show
    p_2->print(); // Child Class : print
    return 0;
}
```

**Working of Virtual Functions (concept of VTABLE and VPTR)**
If a class contains a virtual function then the compiler itself does two things.
1. If an object of that class is created then a virtual pointer (VPTR) is inserted as a data member of the class to point to the VTABLE of that class. For each new object created, a new virtual pointer is inserted as a data member of that class.
2. Irrespective of whether the object is created or not, the class contains as a member a static array of function pointers called VTABLE. Cells of this table store the address of each virtual function contained in that class.

- Parent class pointer -> Parent class object
```c++
class Parent
{
    public:
        void fun_1()
        {
            cout << "Parent Class : fun_1" << endl;
        }

        virtual void fun_2()
        {
            cout << "Parent Class : fun_2" << endl;
        }

        virtual void fun_3()
        {
            cout << "Parent Class : fun_3" << endl;
        }

        virtual void fun_4()
        {
            cout << "Parent Class : fun_4" << endl;
        }
};

class Child : public Parent
{
    public:
        void fun_1()
        {
            cout << "Child Class : fun_1" << endl;
        }

        void fun_2()
        {
            cout << "Child Class : fun_2" << endl;
        }

        void fun_4(int x)
        {
            cout << "Child Class : fun_4" << endl;
        }
};

int main()
{
    Parent p1;
    Parent *p = &p1;
    p->fun_1(); // Parent Class : fun_1
    p->fun_2(); // Parent Class : fun_2
    p->fun_3(); // Parent Class : fun_3
    p->fun_4(); // Parent Class : fun_4
    p->fun_4(5); // error: no matching function for call to 'Parent::fun_4(int)'
    return 0;
}
```

- Parent class pointer -> Child class object
```c++
class Parent
{
    public:
        void fun_1()
        {
            cout << "Parent Class : fun_1" << endl;
        }

        virtual void fun_2()
        {
            cout << "Parent Class : fun_2" << endl;
        }

        virtual void fun_3()
        {
            cout << "Parent Class : fun_3" << endl;
        }

        virtual void fun_4()
        {
            cout << "Parent Class : fun_4" << endl;
        }
};

class Child : public Parent
{
    public:
        void fun_1()
        {
            cout << "Child Class : fun_1" << endl;
        }

        void fun_2()
        {
            cout << "Child Class : fun_2" << endl;
        }

        void fun_4(int x)
        {
            cout << "Child Class : fun_4" << endl;
        }
};

int main()
{
    Child c1;
    Parent *p = &c1;
    p->fun_1(); // Parent Class : fun_1
    p->fun_2(); // Child Class : fun_2
    p->fun_3(); // Parent Class : fun_3
    p->fun_4(); // Parent Class : fun_4
    p->fun_4(5); // error: no matching function for call to 'Parent::fun_4(int)'
    return 0;
}
```

### What is Pure Virtual Function
In c++, A pure virtual function (or abstract function) is a virtual function that doesn’t contain any statements and is declared by assigning 0 in the declaration. We must override that function in the derived class, otherwise, the derived class will also become an abstract class.
```c++
class Parent // Abstract Class
{
    public:
        virtual void Show() = 0; // Pure Virtual Function
};
```

### What is an Abstract Class
In C++, an abstract class is a class that contains at least one pure virtual function. An abstract class can consist of both abstract and non-abstract methods. The significance of abstract class is that the abstract methods inside it are not implemented and only declared. So as a result, when a subclass inherits the abstract class and needs to use its abstract methods, they need to define and implement them. Abstract Class is inherited.
```c++
class Parent // Abstract Class
{
    public:
        virtual void Show() = 0; // Pure Virtual Function
};

class Child : public Parent
{
    public:
        void Show()
        {
            cout << "Child Class : Show" << endl;
        }

        void Display()
        {
            cout << "Child Class : Display" << endl;
        }
};

int main()
{
    Parent p1; // error: cannot declare variable 'p1' to be of abstract type 'Parent'

    Child c1;
    c1.Show(); // Child Class : Show
    c1.Display(); // Child Class : Display
    return 0;
}
```

### What is an Interface
Interface refers to a special type of class, which contains methods, but not their definition. Only the declaration of methods is allowed inside an interface. To use an interface, you cannot create objects. Instead, you need to implement that interface and define the methods for their implementation.

### What is an Inline Function
An inline function in C++ is a function where the compiler attempts to expand the function's code at each point where the function is called, rather than generating a standard function call. This can reduce the overhead of function calls, especially for small, frequently called functions. The inline keyword is used to request the compiler to make a function inline.
```c++
class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        Rectangle(int length , int breadth)
        {
            this->length = length;
            this->breadth = breadth;
        }

        inline int Area()
        {
            return length * breadth;
        }
};

int main() 
{
    Rectangle r1(10, 5);
    cout << "Area : " << r1.Area() << endl; // Area : 50
    return 0;
}
```

### What is an Exception
Exceptions are the conditions which are responsible for creating errors during the execution of a program. These errors can interrupt the execution of the program and if the program can’t handle these exceptions then the OS handles them and the program is terminated abruptly.
Types - 
- Synchronous Exceptions
- Asynchronous Exceptions

### What are Synchronous Exceptions
Synchronous exceptions are the exceptions that occur at a particular instruction. They can only be originated from throw expressions and are caused due to errors like incorrect input or array out-of-index access in a program. 

### What are Asynchronous Exceptions
Asynchronous exceptions are the exceptions that create errors that are not controllable by the program. For example-hardware malfunctions, disk failure, etc.

### What is Exception Handling
Conditions responsible for creating errors during the execution of a program are known as Exceptions. Handling these exceptions by either removing these conditions or by using some other operations than normal operations is known as exception handling.

### Why do we need Exception Handling
- Separate Error code from Normal code to help us understand errors easily. 
- Functions/Methods can be handled only by the exceptions they choose. The exceptions not chosen will be handled by the caller.
- Exceptional handling allows the grouping of error types which helps in categorizing them. 
- It makes the program’s error type easy to understand. 

### How to implement Exception Handling
It is implemented by **try{ }** and **catch( ){ }** statements. 
- The **try** statement allows you to define a block of code to be tested for errors while it is being executed. 
- The **throw** keyword throws an exception when a problem is detected, which lets us create a custom error. 
- The **catch** statement allows you to define a block of code to be executed if an error occurs in the try block. 

### What is Deep Copy and Shallow Copy
- **Shallow Copy** - Creates a new object but does not create copies of nested objects; instead, it copies references to the nested objects. Thus, changes to nested objects affect both the original and the copied objects.
- **Deep Copy** - Creates a new object and recursively copies all nested objects, so the original and copied objects are completely independent.

| Shallow Copy | Deep Copy |
| ------------ | --------- |
| Shallow Copy stores the references of objects to the original memory address. | Deep copy stores copies of the object’s value. |
| Shallow Copy reflects changes made to the new/copied object in the original object. | Deep copy doesn’t reflect changes made to the new/copied object in the original object. |
| Shallow Copy stores the copy of the original object and points the references to the objects. | Deep copy stores the copy of the original object and recursively copies the objects as well. |
| A shallow copy is faster. | Deep copy is comparatively slower. |
  
### What is Garbage Collection 
Garbage collection refers to this mechanism of handling the memory in the program. Through garbage collection, the unwanted memory is freed up by removing the objects that are no longer needed.

---
