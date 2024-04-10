
OBJECT-ORIENTED PROGRAMMING IN C++

********************************************************************************************************************************************************************************************

// # CLASS

* It is like a Blueprint for an Object.
* It is a user-defined data-type that has Data Members(Data Variables) and Member Functions(Functions used to manipulate these variables) , these Data Members and Member Functions define the properties of the Objects in a Class. 
* In Example of class Car , the Data Members are speed-limit , mileage and Member Functions are applying brakes , increasing speed.
* When a class is defined , only the specification for the object is defined ; No Memory is allocated.

********************************************************************************************************************************************************************************************

// # OBJECT

* Object is an instance of a Class.
* When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated

Question- Why do we give semicolons at the end of class?
Answer- At the end of the class is compiler checks if the user is trying to create an instance of the class at the end of it.
Yes just like structure and union, we can also create the instance of a class at the end just before the semicolon. As a result, once execution reaches at that line, it creates a class and allocates memory to your instance.
Example- 
#include<bits/stdc++.h>
using namespace std;

class Student
{
    public: 
        Student()
        {
            cout << "Student Constructor" << endl;
        }
}s1;

int main()
{
    return 0;
}

// # EXAMPLE

class ClassName
{
    Access Specifier:
        Data Members;
        Member Functions;
};

********************************************************************************************************************************************************************************************

// # ACCESSING DATA MEMBERS

* The data members and member functions of the class can be accessed using the dot(‘.’) operator with the object.

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string Name;

        void printName()
        {
            cout << "Name : " << Name << endl;
        }
};

int main()
{
    Student s1;
    s1.Name = "Akash_Negi";
    s1.printName();

    return 0;
}

********************************************************************************************************************************************************************************************

// # MEMBER FUNCTION IN CLASS

* There are 2 ways to define a member function:
1- Inside class definition
2- Outside class definition
* To define a member function outside the class definition we have to use the scope resolution:: operator along with the class name and function name.

1- Inside class definition 

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string Name;
        int Id;

        void printName()
        {
            cout << "Name : " << Name << endl;
        }
        void printId()
        {
            cout << "Id : " << Id << endl;
        }
};

int main()
{
    Student s1;
    s1.Name = "Akash_Negi";
    s1.Id = 1;

    s1.printName();
    s1.printId();

    return 0;
}

2- Outside class definition

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string Name;
        int Id;

        void printName();
        void printId();
};

void Student :: printName()
        {
            cout << "Name : " << Name << endl;
        }
void Student :: printId()
        {
            cout << "Id : " << Id << endl;
        }

int main()
{
    Student s1;
    s1.Name = "Akash_Negi";
    s1.Id = 1;

    s1.printName();
    s1.printId();

    return 0;
}

********************************************************************************************************************************************************************************************

// # ACCESS MODIFIERS

* Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding.
* There are 3 types of access modifiers available in C++: 
1- Public
2- Private (Default)
3- Protected

1- Public : All the class members declared under the public specifier will be available to everyone.

#include<bits/stdc++.h> 
using namespace std;

class Circle
{
    public:
        double radius;

        double area()
        {
            return 3.14*radius*radius; 
        }
};

int main()
{
    Circle c1;
    c1.radius = 5.5;

    cout << "Radius : " << c1.radius << endl;
    cout << "Area : " << c1.area() << endl;

    return 0;
}

2- Private : The class members declared as private can be accessed only by the member functions inside the class.

#include<bits/stdc++.h>
using namespace std;

class Circle
{
    private:
        double radius;

    public:
        double area()
        {
            return 3.14*radius*radius; 
        }
};

int main()
{
    Circle c1;
    c1.radius = 5.5;    // CTE because we are not allowed to access the private data members of a class directly from outside the class.

    cout << "Radius : " << c1.radius << endl;
    cout << "Area : " << c1.area() << endl;

    return 0;
}

* Solution
#include<bits/stdc++.h> 
using namespace std;

class Circle
{
    private:
        double radius;

    public:
        void set(double r)    // Setter Method
        {
            radius = r;
        }
        double get()    // Getter Method
        {
            return radius;
        }
        double area()
        {
            return 3.14*radius*radius; 
        }
};

int main()
{
    Circle c1;
    c1.set(5.5);

    cout << "Radius : " << c1.get() << endl;
    cout << "Area : " << c1.area() << endl;

    return 0;
}

3- Protected : The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. 
* The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well. 

#include<bits/stdc++.h> 
using namespace std;

class Parent
{
    protected:
        int id_protected;
};

class Child : public Parent
{
    public:
        void setId(int id)
        {
            id_protected = id;
        }

        void displayId()
        {
            cout << "id_protected is : " << id_protected << endl; 
        }
};

int main()
{
    Child obj1;
    obj1.setId(81);
    obj1.displayId();

    return 0;
}

********************************************************************************************************************************************************************************************

// # CONSTRUCTOR

* Constructor is a member function of a class, whose name is same as the class name.
* Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically , when an object of the same class is created.
* Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object that is why it is known as constructor.
* Constructor do not return value, hence they do not have a return type.
* Constructors can be overloaded.
* Constructor cannot be inherited.
* Addresses of Constructor cannot be referred.
* Constructor can not be declared virtual.
* Constructor make implicit calls to new and delete operators during memory allocation.

Example- Constructor Inside the class
#include<bits/stdc++.h>
using namespace std;

class Student 
{
    private:
        string Name;

    public:
        void printName()
        {
            cout << "Name : " << Name << endl;
        }

    public:
        Student()
        {
            cout << "Student Constructor" << endl;
            cout << "Enter Name ";
            cin >> Name;
        }
};

int main()
{
    Student s1;
    s1.printName();

    return 0;
}

Example- Constructor Outside the class
#include<bits/stdc++.h>
using namespace std;

class Student 
{
    private:
        string Name;

    public:
        void printName()
        {
            cout << "Name : " << Name << endl;
        }

    public:
        Student();
};

Student :: Student()
    {
        cout << "Student Constructor" << endl;
        cout << "Enter Name ";
        cin >> Name;
    }

int main()
{
    Student s1;
    s1.printName();

    return 0;
}

* Types of Constructor:

1- Default Constructor
2- Parameterized Constructor
3- Copy Constructor

1- Default Constructor : A constructor without any arguments or with the default value for every argument.
* If we do not define any Constructor Explicitly , the compiler will automatically provide a Default Constructor Implicitly.

#include<bits/stdc++.h> 
using namespace std;

class Student 
{
    private:
        string Name;

    public:
        void printName()
        {
            cout << "Name : " << Name << endl;
        }

    public:
        Student()   // Explicit Default Constructor
        {
            cout << "Student Constructor" << endl;
            cout << "Enter Name ";
            cin >> Name;
        }
};

int main()
{
    Student s1;
    s1.printName();

    return 0;
}

2- Parameterized Constructor : To create a parameterized constructor, simply add parameters to it the way you would to any other function.

#include<bits/stdc++.h>
using namespace std;

class Student
{
    private:
        string Name;

    public:
        void printName()
        {
            cout << "Name : " << Name << endl;
        }

    public:
        Student(string temp)   // Parameterized Constructor
        {
            cout << "Parameterized Constructor" << endl;
            Name = temp;
        }
};

int main()
{
    Student s1("Akash_Negi");
    s1.printName();

    return 0;
}

3- Copy Constructor : A copy constructor is a member function that initializes an object using another object of the same class.
* Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
* Copy constructor takes a reference to an object of the same class as an argument.
* The process of initializing members of an object through a copy constructor is known as Copy Initialization.
* It is also called member-wise initialization because the copy constructor initializes one object with the existing object , both belonging to the same class on a member-by-member copy basis.
* The copy constructor can be defined explicitly by the programmer. If the programmer does not define the copy constructor , the compiler does it for us.

#include<bits/stdc++.h>
using namespace std;

class Student 
{
    private:
        string Name;

    public:
        void printName()
        {
            cout << "Name : " << Name << endl;
        }

    public:
        Student(string temp)   // Parameterized Constructor
        {
            cout << "Parameterized Constructor" << endl;
            Name = temp;
        }

        Student(Student &s)   // Copy Constructor
        {
            Name = s.Name;
        }
};

int main()
{
    Student s1("Akash_Negi");
    s1.printName();

    Student s2(s1);   // Copy Constructor Called
    s2.printName();

    Student s3 = s2;   // Copy Constructor Called
    s3.printName();

    return 0;
}

* Types of Copy Constructor:

1- Default Copy Constructor
2- User-Defined Copy Constructor

1- Default Copy Constructor
* The Default Copy Constructor does only Shallow Copy.
#include<bits/stdc++.h>
using namespace std;

class Student 
{
    private:
        string Name;

    public:
        void setName(string temp)
        {
            Name = temp;
        }
        string getName()
        {
            return Name;
        }
};

int main()
{
    Student s1;
    s1.setName("Akash_Negi");
    cout << s1.getName() << endl;

    Student s2(s1);   // Implicit Copy Constructor Calling
    cout << s2.getName() << endl;

    Student s3 = s2;   // Implicit Copy Constructor Calling
    cout << s3.getName() << endl;

    return 0;
}

2- User-Defined Copy Constructor
* The User-Defined Copy Constructor does Deep Copy.
#include<bits/stdc++.h>
using namespace std;

class Student 
{
    private:
        string Name;

    public:
        void setName(string temp)
        {
            Name = temp;
        }
        string getName()
        {
            return Name;
        }

    public:
        Student()   // Default Constructor
        {}
        Student(Student &s)   // User-Defined Copy Constructor
        {
            Name = s.Name;
        }
};

int main()
{
    Student s1;
    s1.setName("Akash_Negi");
    cout << s1.getName() << endl;

    Student s2(s1);   // Explicit Copy Constructor Calling
    cout << s2.getName() << endl;

    Student s3 = s2;   // Explicit Copy Constructor Calling
    cout << s3.getName() << endl;

    return 0;
}

********************************************************************************************************************************************************************************************

// # DESTRUCTOR

* A Destructor is also a special member function like a constructor.Destructor destroys the class objects created by the constructor.
* Destructor has the same name as their class name preceded by a tilde (~) symbol.
* It is not possible to define more than one destructor.
* The destructor is only one way to destroy the object created by the constructor. Hence destructor cannot be overloaded.
* Destructor neither requires any argument nor returns any value.
* It is automatically called when an object goes out of scope.
* Destructor release memory space occupied by the objects created by the constructor.
* In destructor, objects are destroyed in the reverse of an object creation.
* If the object is created by using new or the constructor uses new to allocate memory that resides in the heap memory or the free store , the destructor should use delete to free the memory.
* It cannot be declared static or const.
* An object of a class with a Destructor cannot become a member of the union.
* The programmer cannot access the address of the destructor.

#include<bits/stdc++.h>
using namespace std;

static int Count = 0;
class Student 
{
    public:
        Student()   // User-Defined Constructor
        {
            Count++;
            cout << "Object Created " << Count << endl;
        }

        ~Student()   // User-Defined Destructor
        {
            cout << "Object Destroyed " << Count << endl;
            Count--;
        }
};

int main()
{
    Student s1 , s2 , s3;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        Student()
        {
            cout << "Constructor Called" << endl;
        }
        ~Student()
        {
            cout << "Destructor Called" << endl;
        }
};

int main()
{
    Student *s1 = new Student;   // Object created using new
    delete s1;   // Destructor Called
    return 0;
}

Question- When is the Destructor called ?
Answer- A destructor function is called automatically when the object goes out of scope:
The function ends.
The program ends.
A block containing local variables ends.
A delete operator is called.

Question- Can a destructor be virtual ?
Answer- Yes, In fact, it is always a good idea to make destructors virtual in the base class when we have a virtual function.

********************************************************************************************************************************************************************************************

// # FRIEND

// # FRIEND CLASS

* A friend class can access private and protected members of other classes in which it is declared as a friend.

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string Name;

    private:
        int Private_Variable;

    protected:
        int Protected_Variable;

    public:
        Student()
        {
            Name = "Akash_Negi";
            Private_Variable = 10;
            Protected_Variable = 100;
        }

        friend class Friend;    // friend class declaration
};

class Friend
{
    public:
        void Display(Student &S)
        {
            cout << "Name : " << S.Name << endl;
            cout << "Private_Variable : " << S.Private_Variable << endl;
            cout << "Protected_Variable : " << S.Protected_Variable << endl;
        }
};

int main()
{
    Student s1;
    Friend f1;
    f1.Display(s1);

    return 0;
}

// # FRIEND FUNCTION

* Like a friend class , a friend function can be granted special access to private and protected members of a class in C++.
* They are the non-member functions that can access and manipulate the private and protected members of the class for they are declared as friends.
* A friend function can be:
1- Global Function
2- Member Function of Another Class

1- Global Function as Friend Function

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string Name;

    private:
        int Private_Variable;

    protected:
        int Protected_Variable;

    public:
        Student()
        {
            Name = "Akash_Negi";
            Private_Variable = 10;
            Protected_Variable = 100;
        }

        friend void Friend_Funcion(Student &S);    // friend function declaration
};

void Friend_Funcion(Student &S)    // Global Function as Friend Function
{
    cout << "Name : " << S.Name << endl;
    cout << "Private_Variable : " << S.Private_Variable << endl;
    cout << "Protected_Variable : " << S.Protected_Variable << endl;
}

int main()
{
    Student s1;
    Friend_Funcion(s1);

    return 0;
}

2- Member Function of Another Class as Friend Function

#include<bits/stdc++.h>
using namespace std;

class Student;    // forward definition needed of another class in which function is declared

class Teacher
{
    public:
        void Member_Friend_Funcion(Student &S);
};

class Student    // class for which friend is declared
{
    public:
        string Name;

    private:
        int Private_Variable;

    protected:
        int Protected_Variable;

    public:
        Student()
        {
            Name = "Akash_Negi";
            Private_Variable = 10;
            Protected_Variable = 100;
        }

        friend void Teacher :: Member_Friend_Funcion(Student &S);    // member friend function declaration
};

void Teacher :: Member_Friend_Funcion(Student &S)    // Member Function of Another Class as Friend Function
{
    cout << "Name : " << S.Name << endl;
    cout << "Private_Variable : " << S.Private_Variable << endl;
    cout << "Protected_Variable : " << S.Protected_Variable << endl;
}

int main()
{
    Student s1;
    Teacher t1;
    t1.Member_Friend_Funcion(s1);

    return 0;
}

# Features of Friend Functions

* A friend function is a special function in C++ that in spite of not being a member function of a class has the privilege to access the private and protected data of a class.
* A friend function is a non-member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class. By declaring a function as a friend, all the access permissions are given to the function.
* The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition or call.
* A friend function is called like an ordinary function. It cannot be called using the object name and dot operator. However, it may accept the object as an argument whose value it wants to access.
* A friend function can be declared in any section of the class i.e. public or private or protected.

# A Function Friendly to Multiple Classe

#include<bits/stdc++.h>
using namespace std;

class A;

class B
{
    private:
        int b;

    public:
        void set_data(int y)
        {
            b = y;
        }

        friend void max(A , B);
};

class A
{
    private:
        int a;

    public:
        void set_data(int x)
        {
            a = x;
        }

        friend void max(A , B);
};

void max(A t1, B t2)
{
    if(t1.a > t2.b)
        cout << "Max : " << t1.a;
    else
        cout << "Max : " << t2.b;
}

int main()
{
    A a1;
    a1.set_data(10);

    B b1;
    b1.set_data(100);

    max(a1 , b1);

    return 0;
}

# Advantages of Friend Functions
* A friend function is able to access members without the need of inheriting the class.
* The friend function acts as a bridge between two classes by accessing their private data.
* It can be used to increase the versatility of overloaded operators.
* It can be declared either in the public or private or protected part of the class.

# Disadvantages of Friend Functions
* Friend functions have access to private members of a class from outside the class which violates the law of data hiding.
* Friend functions cannot do any run-time polymorphism in their members.

# Important Points About Friend Functions and Classes
* Friends should be used only for limited purposes. Too many functions or external classes are declared as friends of a class with protected or private data access lessens the value of encapsulation of separate classes in object-oriented programming.
* Friendship is not mutual. If class A is a friend of B , then B doesn’t become a friend of A automatically.
* Friendship is not inherited.
* The concept of friends is not in Java.

********************************************************************************************************************************************************************************************

// # STATIC

********************************************************************************************************************************************************************************************

// # ENCAPSULATION

* Encapsulation in C++ is defined as the wrapping up of data and information in a single unit.
* Encapsulation is defined as binding together the data and the functions that manipulate them.
* Encapsulation can be implemented using classes and access modifiers.

# Real-Life Example 
*  in a company, there are different sections like the accounts section, finance section, sales section, etc. Now,
* The finance section handles all the financial transactions and keeps records of all the data related to finance.
* Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.
* Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month.
* In this case, he is not allowed to directly access the data of the sales section. He will first have to contact some other officer in the sales section and then request him to give the particular data.
* This is what Encapsulation is. Here the data of the sales section and the employees that can manipulate them are wrapped under a single name “sales section”.

# Two Important  property of Encapsulation:
1- Data Protection: Encapsulation protects the internal state of an object by keeping its data members private. Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.
2- Information Hiding: Encapsulation hides the internal implementation details of a class from external code. Only the public interface of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code.

# Features of Encapsulation:
1- We can not access any function from the class directly. We need an object to access that function that is using the member variables of that class. 
2- The function which we are making inside the class must use only member variables , only then it is called Encapsulation.
3- If we don’t make a function inside the class which is using the member variable of the class then we don’t call it encapsulation.
4- Encapsulation improves readability, maintainability, and security by grouping data and methods together.
5- It helps to control the modification of our data members.

#include<bits/stdc++.h>
using namespace std;

class Student
{
    private:
        string Name;
        int Age;

    public:
        void set_Name(string name)
        {
            this->Name = name;
        }

        void set_Age(int age)
        {
            this->Age = age;
        }

        string get_Name()
        {
            return Name;
        }

        int get_Age()
        {
            return Age;
        }
};

int main()
{
    Student s1;
    s1.set_Name("Akash_Negi");
    s1.set_Age(24);
    cout << "Name : " << s1.get_Name() << endl;
    cout << "Age : " << s1.get_Age() << endl;

    return 0;
}

********************************************************************************************************************************************************************************************

// # ABSTRACTION

* Abstraction means displaying only essential information and hiding the details.
* Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.

# Real Life Example of a Man driving a car
* The man only knows that pressing the accelerator will increase the speed of the car or applying brakes will stop the car but he does not know how on pressing the accelerator the speed is actually increasing , he does not know about the inner mechanism of the car or the implementation of the accelerator, brakes, etc in the car. This is what abstraction is.

# Types of Abstraction:
1- Data abstraction : This type only shows the required information about the data and hides the unnecessary data.
2- Control Abstraction : This type only shows the required information about the implementation and hides unnecessary information.

# Abstraction using Classes
* The class helps us to group data members and member functions using available access specifiers. A Class can decide which data member will be visible to the outside world and which is not.

# Abstraction in Header files
* One more type of abstraction in C++ can be header files. For example, consider the pow() method present in math.h header file. Whenever we need to calculate the power of a number, we simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating the power of numbers.

# Abstraction using Access Specifiers
* Members declared as public in a class can be accessed from anywhere in the program.
* Members declared as private in a class, can be accessed only from within the class. They are not allowed to be accessed from any part of the code outside the class.

# Advantages of Data Abstraction
* Helps the user to avoid writing the low-level code.
* Avoids code duplication and increases reusability.
* Can change the internal implementation of the class independently without affecting the user.
* Helps to increase the security of an application or program as only important details are provided to the user.
* It reduces the complexity as well as the redundancy of the code , therefore increasing the readability.

#include<bits/stdc++.h>
using namespace std;

class Student
{
    private:
        string Name;
        int Age;

    public:
        void set_Name(string name)
        {
            this->Name = name;
        }

        void set_Age(int age)
        {
            this->Age = age;
        }

        string get_Name()
        {
            return Name;
        }

        int get_Age()
        {
            return Age;
        }
};

int main()
{
    Student s1;
    s1.set_Name("Akash_Negi");
    s1.set_Age(24);
    cout << "Name : " << s1.get_Name() << endl;
    cout << "Age : " << s1.get_Age() << endl;

    return 0;
}

********************************************************************************************************************************************************************************************

// # POLYMORPHISM

* The word “polymorphism” means having many forms.
* We can define polymorphism as the ability of a message to be displayed in more than one form.

# Real-Life Example- 
* A person who at the same time can have different
characteristics. A man at the same time is a father, a husband, and an employee. So the same person exhibits different behavior in different situations. This is called polymorphism. 

# Types of Polymorphism

1- Compile-time Polymorphism
2- Run-time Polymorphism

1- Compile-Time Polymorphism

A- Function Overloading

* When there are multiple functions with the same name but different parameters , then the functions are said to be overloaded , hence this is known as Function Overloading.
* Functions can be overloaded with the same name by changing the number of arguments or/and changing the type of arguments. 

#include<bits/stdc++.h>
using namespace std;

class Math
{
    public:
        void Sum(int a , int b)
        {
            cout << "Sum : " << (a + b) << endl;
        }
        void Sum(double a , double b)
        {
            cout << "Sum : " << (a + b) << endl;
        }
        void Sum(int a , double b)
        {
            cout << "Sum : " << (a + b) << endl;
        }
        void Sum(int a , int b , int c)
        {
            cout << "Sum : " << (a + b + c) << endl;
        }
        
        void Sum(double a , double b , double c)
        {
            cout << "Sum : " << (a + b + c) << endl;
        }
};

int main()
{
    Math m1;
    m1.Sum(5 , 10);
    m1.Sum(5.5 , 10.5);
    m1.Sum(5 , 10.5);
    m1.Sum(5 , 10 , 15);
    m1.Sum(5.5 , 10.5 , 15.5);

    return 0;
}

# How does Function Overloading work ?
* Exact match - (Function name and Parameter)
* If not exact match is found -
- Char , Unsigned char , and short are promoted to an int.
- Float is promoted to double.
* If no match is found - C++ tries to find a match through the standard conversion.
* Else Error.

B- Operator Overloading








2- Run-time Polymorphism

* Late binding and dynamic polymorphism are other names for runtime polymorphism. The function call is resolved at runtime in runtime polymorphism.
* In contrast, with compile time polymorphism, the compiler determines which function call to bind to the object after deducing it at runtime.

A- Function Overriding

* Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.
* Function overriding in C++ is termed as the redefinition of base class function in its derived class with the same signature i.e. return type and parameters.

# Real-Life Example - The relationship between RBI(The Reserve Bank of India) and Other state banks like SBI, PNB, ICICI, etc. Where the RBI passes the same regulatory function and others follow it as it is.

Example-
#include<bits/stdc++.h>
using namespace std;

class Parent
{
    public:
        void Display()
        {
            cout << "Parent Class" << endl;
        }
};

class Child : public Parent
{
    public:
        void Display()
        {
            cout << "Child Class" << endl;
        }
};

int main()
{
    Parent p1;
    p1.Display();

    Child c1;
    c1.Display();

    return 0;
}

# Variations in Function Overriding

1- Call Overridden Function From Derived Class
#include<bits/stdc++.h>
using namespace std;

class Parent
{
    public:
        void Display()
        {
            cout << "Parent Class" << endl;
        }
};

class Child : public Parent
{
    public:
        void Display()
        {
            cout << "Child Class" << endl;

            Parent :: Display();
        }
};

int main()
{
    Parent p1;
    p1.Display();

    Child c1;
    c1.Display();

    return 0;
}

2- Call Overridden Function Using Pointer
#include<bits/stdc++.h>
using namespace std;

class Parent
{
    public:
        void Display()
        {
            cout << "Parent Class" << endl;
        }
};

class Child : public Parent
{
    public:
        void Display()
        {
            cout << "Child Class" << endl;
        }
};

int main()
{
    Parent p1;
    p1.Display();

    Child c1;
    c1.Display();

    Parent *ptr = &c1;
    ptr->Display();

    return 0;
}

3- Access of Overridden Function to the Base Class or Access to Overridden Function
#include<bits/stdc++.h>
using namespace std;

class Parent
{
    public:
        void Display()
        {
            cout << "Parent Class" << endl;
        }
};

class Child : public Parent
{
    public:
        void Display()
        {
            cout << "Child Class" << endl;
        }
};

int main()
{
    Parent p1;
    p1.Display();

    Child c1;
    c1.Display();

    c1.Parent :: Display();

    return 0;
}

B- Virtual Function

* A virtual function is a member function that is declared in the base class using the keyword virtual and is re-defined (Overridden) in the derived class.
* It tells the compiler to perform late binding where the compiler matches the object with the right called function and executes it during the runtime.
# Some Key Points About Virtual Functions:
* Virtual functions are Dynamic in nature. 
* They are defined by inserting the keyword “virtual” inside a base class and are always declared with a base class and overridden in a child class.
* A virtual function is called during Runtime.


********************************************************************************************************************************************************************************************

// # INHERITANCE

* The capability of a class to derive properties and characteristics from another class is called Inheritance.
* Inheritance is a feature or a process in which, new classes are created from the existing classes. 
* The new class created is called “derived class” or "sub-class" or “child class” and the existing class is known as the “base class” or "super-class" or “parent class”. 

#include<bits/stdc++.h>
using namespace std;

class Parent
{
    private:
        string Name;
        int Id;

    public:
        void set_Parent(string name , int id)
        {
            this->Name = name;
            this->Id = id;
        }
        void get_Parent()
        {
            cout << "Name : " << Name << endl;
            cout << "Id : " << Id << endl;
        }
};

class Child : public Parent
{
    private:
        string Course;
        int Fee;

    public:
        void set_Child(string name , int id , string course , int fee)
        {
            set_Parent(name , id);
            this->Course = course;
            this->Fee = fee;
        }
        void get_Child()
        {
            get_Parent();
            cout << "Course : " << Course << endl;
            cout << "Fee : " << Fee << endl;
        }
};

int main()
{
    Child c1;
    c1.set_Child("Akash_Negi" , 22711391 , "MCA" , 300000);
    c1.get_Child();

    return 0;
}

# Types Of Inheritance:
1- Single inheritance
2- Multilevel inheritance 
3- Multiple inheritance 
4- Hierarchical inheritance 
5- Hybrid inheritance

********************************************************************************************************************************************************************************************





























