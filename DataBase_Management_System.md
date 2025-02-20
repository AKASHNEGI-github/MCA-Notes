# DATABASE MANAGEMENT SYSTEM

---

- **Name : Akash Negi**
- **Course : MCA (Master of Computer Applications)**
- **College : Graphic Era Hill University , Dehradun**
- **Session : 2022 - 2024**

---

### What is Data 
Data is statically raw and unprocessed information. 
Example – name, class, marks, etc.

### What is DataBase
A database is an organized collection of data stored in a computer system and usually controlled by a database management system (DBMS).

### What is DBMS
A DataBase Management System (DBMS) is a software system that is designed to manage and organize data in a structured manner. It allows users to create, modify, and query a database, as well as manage the security and access controls for that database.

### What is RDBMS
RDBMS stands for Relational Database Management Systems. A Relational Database is a database system that stores and retrieves data in a tabular format organized in the form of rows and columns. It is a program that allows us to create, delete, and update a relational database.  It is a smaller subset of DBMS which was designed by E.F Codd in the 1970s. The major DBMSs like SQL, My-SQL, and ORACLE are all based on the principles of relational DBMS. 

### What are the Advantages of DBMS
- **Data organization** : A DBMS allows for the organization and storage of data in a structured manner, making it easy to retrieve and query the data as needed.
- **Data integrity** : A DBMS provides mechanisms for enforcing data integrity constraints, such as constraints on the values of data and access controls that restrict who can access the data.
- **Concurrent access** : A DBMS provides mechanisms for controlling concurrent access to the database, to ensure that multiple users can access the data without conflicting with each other.
- **Data security** : A DBMS provides tools for managing the security of the data, such as controlling access to the data and encrypting sensitive data.
- **Backup and recovery** : A DBMS provides mechanisms for backing up and recovering the data in the event of a system failure.
- **Data sharing** : A DBMS allows multiple users to access and share the same data, which can be useful in a collaborative work environment.

### What are the Dis-advantages of DBMS
- **Complexity** : DBMS can be complex to set up and maintain, requiring specialized knowledge and skills.
- **Performance overhead** : The use of a DBMS can add overhead to the performance of an application, especially in cases where high levels of concurrency are required.
- **Scalability** : The use of a DBMS can limit the scalability of an application, since it requires the use of locking and other synchronization mechanisms to ensure data consistency.
- **Cost** : The cost of purchasing, maintaining and upgrading a DBMS can be high, especially for large or complex systems.
- **Limited Use Cases** : Not all use cases are suitable for a DBMS, some solutions don’t need high reliability, consistency or security and may be better served by other types of data storage.

### Explain DBMS v/s File System
| Basics | File System | DBMS |
| ------ | ----------- | ---- |
| Structure | The file system is a way of arranging the files in a storage medium within a computer. | DBMS is software for managing the database. |
| Data Redundancy | Redundant data can be present in a file system. | In DBMS there is no redundant data. |
| Backup and Recovery | It doesn’t provide Inbuilt mechanism for backup and recovery of data if it is lost. | It provides in house tools for backup and recovery of data even if it is lost. |
| Query processing | There is no efficient query processing in the file system. | Efficient query processing is there in DBMS. |
| Consistency | There is less data consistency in the file system. | There is more data consistency because of the process of normalization. |
| Complexity | t is less complex as compared to DBMS. | It has more complexity in handling as compared to the file system. |
| Security Constraints | File systems provide less security in comparison to DBMS. | DBMS has more security mechanisms as compared to file systems. |
| Cost | It is less expensive than DBMS. | It has a comparatively higher cost than a file system. |
| Data Independence | There is no data independence. | Logical Data Independence , Physical Data Independence. |
| User Access | Only one user can access data at a time. | Multiple users can access data at a time. |
| Meaning | The users are not required to write procedures. | The user has to write procedures for managing databases. |
| Sharing  | Data is distributed in many files. So, it is not easy to share data. | Due to centralized nature data sharing is easy. |
| Data Abstraction | It give details of storage and representation of data. | It hides the internal details of Database. |
| Integrity Constraints | Integrity Constraints are difficult to implement. | Integrity constraints are easy to implement. |
| Attributes | To access data in a file , user requires attributes such as file name, file location. | No such attributes are required. |
| Example | Cobol , C++ | Oracle , SQL Server |

### Explain DataBase Languages
- **DDL (Data Definition Language)** : It contains commands which are required to define the database.
Example -  CREATE, ALTER, DROP, TRUNCATE, RENAME.
- **DML (Data Manipulation Language)** : It contains commands which are required to manipulate the data present in the database.
Example - SELECT, INSERT, UPDATE, DELETE.
- **DCL (Data Control Language)** : It contains commands which are required to deal with the user permissions and controls of the database system.
Example - GRANT and REVOKE.
- **TCL (Transaction Control Language)** : It contains commands which are required to deal with the transaction of the database.
Example - COMMIT, ROLLBACK, and SAVEPOINT.

### Explain 2 - Tier Architecture
The 2-tier architecture refers to the client-server architecture in which applications at the client end directly communicate with the database at the server end without any middleware involved.
Example – Contact Management System created using MS-Access or Railway Reservation System, etc.

### Explain 3 - Tier Architecture
The 3-tier architecture contains another layer between the client and the server to provide GUI to the users and make the system much more secure and accessible. In this type of architecture, the application present on the client end interacts with an application on the server end which further communicates with the database system.
Example – Designing registration form which contains a text box, label, button or a large website on the Internet, etc.

###  Explain Levels of Data Abstraction
The process of hiding irrelevant details from users is known as Data Abstraction. 

Data Abstraction can be divided into 3 levels -
- **Physical Level** : It is the lowest level and is managed by DBMS. It determines **HOW** data is stored in the database. This level consists of data storage descriptions and the details of this level are typically hidden from system admins, developers, and users.
- **Conceptual or Logical level** : It is the level on which developers and system admins work and it determines **WHAT** data is stored in the database and what is the relationship between the data points.
- **External or View level** : It is the level that describes only part of the database and hides the details of the table schema and its physical storage from the users. The result of a query is an example of View level data abstraction. A view is a virtual table created by selecting fields from one or more tables present in the database.

### Explain Intension and Extension
- **Intension** -  Intension or popularly known as database schema is used to define the description of the database and is specified during the design of the database and mostly remains unchanged.
- **Extension** - Extension on the other hand is the measure of the number of tuples present in the database at any given point in time. The extension of a database is also referred to as the snapshot of the database and its value keeps changing as and when the tuples are created, updated, or destroyed in a database.

### Explain E - R Model
Entity - Relationship Model is a diagrammatic approach to a database design where real-world objects are represented as entities and relationships between them are mentioned.

**Symbols Used in ER Model**
ER Model is used to model the logical view of the system from a data perspective which consists of these symbols - 
- Rectangles : Rectangles represent Entities in the ER Model.
- Ellipses : Ellipses represent Attributes in the ER Model.
- Diamond : Diamonds represent Relationships among Entities.
- Lines : Lines represent attributes to entities and entity sets with other relationship types.
- Double Ellipse : Double Ellipses represent Multi-Valued Attributes.
- Double Rectangle : Double Rectangle represents a Weak Entity.

**Entity** : An entity is defined as a real-world object having attributes that represent characteristics of that particular object. 
Example - a student, an employee, or a teacher represents an entity.
- Entity Type : An entity type is defined as a collection of entities that have the same attributes. One or more related tables in a database represent an entity type. Entity type or attributes can be understood as a characteristic which uniquely identifies the entity.
Example - a student represents an entity that has attributes such as student_id, student_name, etc. 
- Entity Set : An entity set can be defined as a set of all the entities present in a specific entity type in a database. 
Example - a set of all the students, employees, teachers, etc. represent an entity set.
- Strong Entity : A Strong Entity is a type of entity that has a key Attribute. Strong Entity does not depend on other Entity in the Schema. It has a primary key, that helps in identifying it uniquely, and it is represented by a rectangle.
- Weak Entity : An Entity type has a key attribute that uniquely identifies each entity in the entity set. But some entity type exists for which key attributes can’t be defined.

**Attributes** : Attributes are the properties that define the entity type.
- Key Attribute : The attribute which uniquely identifies each entity in the entity set is called the key attribute.
Example - Roll_No will be unique for each student. In ER diagram, the key attribute is represented by an oval with underlying lines.
- Composite Attribute : An attribute composed of many other attributes is called a composite attribute.
Example - the Address attribute of the student Entity type consists of Street, City, State, and Country. In ER diagram, the composite attribute is represented by an oval comprising of ovals. 
- Multivalued Attribute : An attribute consisting of more than one value for a given entity.
Example - Phone_No (can be more than one for a given student). In ER diagram, a multivalued attribute is represented by a double oval. 
- Derived Attribute : An attribute that can be derived from other attributes of the entity type is known as a derived attribute. 
Example - Age (can be derived from DOB). In ER diagram, the derived attribute is represented by a dashed oval. 

**Relationship Type and Relationship Set**
A Relationship Type represents the association between entity types. In ER diagram, the relationship type is represented by a diamond and connecting the entities with lines. 

**Degree of a Relationship Set**
The number of different entity sets participating in a relationship set is called the degree of a relationship set.  
- Unary Relationship : When there is only ONE entity set participating in a relation, the relationship is called a unary relationship. For example, one person is married to only one person. 
- Binary Relationship : When there are TWO entities set participating in a relationship, the relationship is called a binary relationship. For example, a Student is enrolled in a Course. 
- Ternary Relationship : When there are n entities set participating in a relation, the relationship is called an n-ary relationship. 

**Cardinality**
The number of times an entity of an entity set participates in a relationship set is known as cardinality.
- One-to-One : When each entity in each entity set can take part only once in the relationship, the cardinality is one-to-one. 
Example - Let us assume that a male can marry one female and a female can marry one male. So the relationship will be one-to-one. 
- One-to-Many : In one-to-many mapping as well where each entity can be related to more than one entity and the total number of tables that can be used in this is 2.
Example - Let us assume that one surgeon department can accommodate many doctors. So the Cardinality will be 1 to M. It means one department has many Doctors.
- Many-to-One: When entities in one entity set can take part only once in the relationship set and entities in other entity sets can take part more than once in the relationship set, cardinality is many to one. 
Example - Let us assume that a student can take only one course but one course can be taken by many students. So the cardinality will be n to 1. It means that for one course there can be n students but for one student, there will be only one course. 
- Many-to-Many: When entities in all entity sets can take part more than once in the relationship cardinality is many to many. 
Example - Let us assume that a student can take more than one course and one course can be taken by many students. So the relationship will be many to many. 


**Participation Constraint**
Participation Constraint is applied to the entity participating in the relationship set.  
- Total Participation : Each entity in the entity set must participate in the relationship. If each student must enroll in a course, the participation of students will be total. Total participation is shown by a double line in the ER diagram. 
- Partial Participation : The entity in the entity set may or may NOT participate in the relationship. If some courses are not enrolled by any of the students, the participation in the course will be partial. 

### What is Relationship
The Relationship is defined as an association among two or more entities. 

There are 3 Type of Relationships in DBMS - 
- **One-To-One** : Here one record of any object can be related to one record of another  object.
- **One-To-Many** : Here one record of any object can be related to many  records of other object and vice versa.
- **Many-To-Many** : Here more than one records of an object can be related to n number of records of another object.

### What is Cardinality
Cardinality represents the number of times an entity of an entity set participates in a relationship set. Or we can say that the cardinality of a relationship is the number of tuples (rows) in a relationship. 

Types of cardinality in between tables are - 
- one-to-one
- one-to-many
- many-to-one
- many-to-many

### Explain Keys in DBMS
Keys are one of the basic requirements of a relational database model. It is widely used to identify the tuples(rows) uniquely in the table. We also use keys to set up relations amongst various columns and tables of a relational database.

- **Super Key** - Any Permutation & Combination of attributes present in a table which can uniquely identify each tuple is known as Super Key. 
- **Candidate Key** - The minimal set of attributes that can uniquely identify a tuple is known as Candidate Key. 
- **Primary Key** - The primary key defines a set of attributes that are used to uniquely identify every tuple. 
- **Unique Key** - The unique key is very similar to the primary key except that primary keys don’t allow NULL values in the column but unique keys allow them. So essentially unique keys are primary keys with NULL values.
- **Alternate Key** - All the candidate keys which are not chosen as primary keys are considered as Alternate Keys.
- **Foreign Key** - The foreign key defines an attribute that can only take the values present in one table common to the attribute present in another table.
- **Composite Key** - A composite key refers to a combination of two or more columns that can uniquely identify each tuple in a table is known as Composite Key. 

### Explain Functional Dependency
Functional Dependency is a concept that specifies the relationship between two sets of attributes where one attribute determines the value of another attribute. It is denoted as **X → Y**, where the attribute set on the left side of the arrow, **X** is called **Determinant**, and **Y** is called the **Dependent**. 

**Armstrong Axioms**
If F is a set of functional dependencies then the closure of F, denoted as F+, is the set of all functional dependencies logically implied by F. Armstrong’s Axioms are a set of rules, that when applied repeatedly, generates a closure of functional dependencies. 

- Axiom of Reflexivity : If A is a set of attributes and B is a subset of A, then A holds B. **If B⊆A then A→B**. This property is trivial property.
- Axiom of Augmentation : If A→B holds and Y is the attribute set, then AY→BY also holds. That is adding attributes to dependencies, does not change the basic dependencies. **If A→B, then AC→BC** for any C.
- Axiom of Transitivity : Same as the transitive rule in algebra, if A→B holds and B→C holds, then A→C also holds. A→B is called A functionally which determines B. **If X→Y and Y→Z, then X→Z**.

Types of Functional Dependencies in DBMS - 
- **Trivial FD** - In Trivial Functional Dependency, a dependent is always a subset of the determinant. i.e. If X → Y and Y is the subset of X, then it is called trivial functional dependency
- **Non-Trivial FD** - In Non-trivial functional dependency, the dependent is strictly not a subset of the determinant. i.e. If X → Y and Y is not a subset of X, then it is called Non-trivial functional dependency.
- **Multivalued FD** - In Multivalued functional dependency, entities of the dependent set are not dependent on each other. i.e. If a → {b, c} and there exists no functional dependency between b and c, then it is called a multivalued functional dependency.
- **Transitive FD** - In transitive functional dependency, dependent is indirectly dependent on determinant. i.e. If a → b & b → c, then according to axiom of transitivity, a → c. This is a transitive functional dependency.
- **Full FD** - In full functional dependency an attribute or a set of attributes uniquely determines another attribute or set of attributes. If a relation R has attributes X, Y, Z with the dependencies X->Y and X->Z which states that those dependencies are fully functional.
- **Partial FD** - In partial functional dependency a non key attribute depends on a part of the composite key, rather than the whole key. If a relation R has attributes X, Y, Z where X and Y are the composite key and Z is non key attribute. Then X->Z is a partial functional dependency in RBDMS.

### Explain Anomalies
Anomalies in the relational model refer to inconsistencies or errors that can arise when working with relational databases, specifically in the context of data insertion, deletion, and modification. 

Types of Anomalies - 
- **Insertion Anomalies** : If there is a new row inserted in the table and it creates the inconsistency in the table then it is called the Insertion Anomaly.
- **Deletion Anomalies** : If we delete some rows from the table and if any other information or data which is required is also deleted from the database then it is called the Deletion Anomaly.
- **Update Anomalies** : If we update some rows in the table, and if it leads to the inconsistency of the table then this anomaly occurs then it is called the Updation Anomaly.

### What is Normalization
Normalization is a process of reducing redundancy by organizing the data into multiple tables. Normalization leads to better usage of disk spaces and makes it easier to maintain the integrity of the database.

**Normal Forms** -
**1NF** - A table to be in its First Normal Form should satisfy the following conditions -
- Every column must have a single value and should be atomic.
- Duplicate columns from the same table should be removed.
- Separate tables should be created for each group of related data and each row should be identified with a unique column.

**2NF** -  A table to be in its Second Normal Form should satisfy the following conditions -
- The table should be in its 1NF i.e. satisfy all the conditions of 1NF.
- Every Non-Prime attribute of the table should be Fully Functionally Dependent on the Primary Key.
  i.e. every Non-Fey attribute should be dependent on the Primary Key in such a way that if any key element is deleted then even the non-Key element will be saved in the database.

**3NF** -A table to be in its Third Normal Form should satisfy the following conditions -
- The table should be in its 2NF i.e. satisfy all the conditions of 2NF.
- There is No Transitive Functional Dependency of one attribute on any attribute in the same table.

**BCNF** - A table to be in its Boyce-Codd Normal Form should satisfy the following conditions -
- The table should be in its 3NF i.e. satisfy all the conditions of 3NF.
- For every Functional Dependency of any attribute A on B (A->B), A should be the Super Key of the table. It simply implies that A can’t be a Non-Prime attribute if B is a Prime attribute.

### What is Denormalization
Denormalization is the reverse process of normalization as it combines the tables which have been normalized into a single table so that data retrieval becomes faster. **JOIN** operation allows us to create a denormalized form of the data by reversing the normalization.

### Explain Transaction
A transaction is a single logical unit of work that accesses and possibly modifies the contents of a database. Transactions access data using read and write operations.
In order to maintain consistency in a database, before and after the transaction, certain properties are followed. These are called **ACID** properties.

### Explain ACID Properties
ACID stands for Atomicity, Consistency, Isolation, and Durability in a DBMS. These are the properties that ensure a safe and secure way of sharing data among multiple users.

- **Atomicity** - Atomicity specifies that either the entire transaction takes place at once or doesn’t happen at all. There is no midway i.e. transactions do not occur partially. If any part of the transaction fails, the entire transaction is rolled back to its original state, ensuring data consistency and integrity.
- **Consistency** - Consistency specifies that integrity constraints must be maintained so that the database is consistent before and after the transaction.
- **Isolation** - Isolation specifies that multiple transactions can occur concurrently without leading to the inconsistency of the database state. Transactions occur independently without interference. 
- **Durability** - Durability specifies that once the transaction has completed execution, the updates and modifications to the database are stored in and written to disk and they persist even if a system failure occurs.

### What is Concurrency Control
Concurrency control in a Database Management System (DBMS) is the process of managing simultaneous transactions to ensure that they do not conflict with each other and maintain the integrity, consistency, and isolation of the database. It ensures that multiple users or processes can access and modify the database at the same time without causing errors, data corruption or inconsistencies.

### What is Concurrency Control Protocol
Concurrency control protocols are the set of rules which are maintained in order to solve the concurrency control problems in the database. It ensures that the concurrent transactions can execute properly while maintaining the database consistency. The concurrent execution of a transaction is provided with atomicity, consistency, isolation, durability, and serializability via the concurrency control protocols.

**Types** :
- Locked based concurrency control protocol
- Timestamp based concurrency control protocol

### Explain Locks in DBMS
A database lock is a mechanism to protect a shared piece of data from getting updated by two or more database users at the same time. When a single database user or session has acquired a lock then no other database user or session can modify that data until the lock is released.

Types of Locks - 
- **Shared Lock** : A shared lock is required for reading a data item and many transactions may hold a lock on the same data item in a shared lock. Multiple transactions are allowed to read the data items in a shared lock.
- **Exclusive Lock** : An exclusive lock is a lock on any transaction that is about to perform a write operation. This type of lock doesn’t allow more than one transaction and hence prevents any inconsistency in the database.

### What is Conflict Serializability
Concurrency serializability, also known as conflict serializability, is a type of concurrency control that guarantees that the outcome of concurrent transactions is the same as if the transactions were executed consecutively.

**Conflict serializable schedules** : A schedule is called conflict serializable if it can be transformed into a serial schedule by swapping non-conflicting operations.
**Non-conflicting operations** : When two operations operate on separate data items or the same data item but at least one of them is a read operation, they are said to be non-conflicting.
**Conflicting Operations** : Two operations are said to be conflicting if all conditions are satisfied -  
- They belong to different transactions
- They operate on the same data item
- At Least one of them is a write operation

### What is Indexing in DBMS
Indexing improves database performance by minimizing the number of disc visits required to fulfill a query. It is a data structure technique used to locate and quickly access data in databases. Several database fields are used to generate indexes. The main key or candidate key of the table is duplicated in the first column, which is the Search key. To speed up data retrieval, the values are also kept in sorted order. It should be highlighted that sorting the data is not required. The second column is the Data Reference or Pointer which contains a set of pointers holding the address of the disk block where that particular key value can be found.

### What is Sharding in DBMS
Sharding is a very important concept that helps the system to keep data in different resources according to the sharding process. The word “Shard” means "a small part of a whole". Hence Sharding means dividing a larger part into smaller parts. In DBMS, Sharding is a type of DataBase partitioning in which a large database is divided or partitioned into smaller data and different nodes. These shards are not only smaller, but also faster and hence easily manageable. 

### What is Scaling in DBMS
Scaling alters the size of a system. In the scaling process, we either compress or expand the system to meet the expected needs. The scaling operation can be achieved by adding resources to meet the smaller expectation in the current system, by adding a new system to the existing one, or both. 

Types of Scaling - 
- **Vertical Scaling** : When new resources are added to the existing system to meet the expectation, it is known as vertical scaling. 
Example - Consider a rack of servers and resources that comprises the existing system. (as shown in the figure). Now when the existing system fails to meet the expected needs, and the expected needs can be met by just adding resources, this is considered vertical scaling. Vertical scaling is based on the idea of adding more power(CPU, RAM) to existing systems, basically adding more resources.
Vertical scaling is not only easy but also cheaper than Horizontal Scaling. It also requires less time to be fixed. 
 
- **Horizontal Scaling** : When new server racks are added to the existing system to meet the higher expectation, it is known as horizontal scaling. 
Example - Consider a rack of servers and resources that comprises the existing system. (as shown in the figure). Now when the existing system fails to meet the expected needs, and the expected needs cannot be met by just adding resources, we need to add completely new servers. This is considered horizontal scaling. Horizontal scaling is based on the idea of adding more machines to our pool of resources. Horizontal scaling is difficult and also costlier than Vertical Scaling. It also requires more time to be fixed. 

---
