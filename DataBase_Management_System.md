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

Indexing in DBMS is used to speed up data retrieval by minimizing disk scans. Instead of searching through all rows, the DBMS uses index structures to quickly locate data using key values.
When an index is created, it stores sorted key values and pointers to actual data rows. This reduces the number of disk accesses, improving performance especially on large datasets.

Attributes of Indexing
Several Important attributes of indexing affect the performance and efficiency of database operations:

Access Types: This refers to the type of access such as value-based search, range access, etc.
Access Time: It refers to the time needed to find a particular data element or set of elements.
Insertion Time: It refers to the time taken to find the appropriate space and insert new data.
Deletion Time: Time taken to find an item and delete it as well as update the index structure.
Space Overhead: It refers to the additional space required by the index.

File Organization in Indexing
File organization refers to how data and indexes are physically stored in memory or on disk. The following are the common types of file organizations used in indexing:

1. Sequential (Ordered) File Organization
In this type of organization, the indices are based on a sorted ordering of the values. These are generally fast and a more traditional type of storing mechanism. These Ordered or Sequential file organizations might store the data in a dense or sparse format.

i. Dense Index: Every search key value in the data file corresponds to an index record. This method ensures that each key value has a reference to its data location.
Example: If a table contains multiple entries for the same key, a dense index ensures that each key value has its own index record.

ii. Sparse Index: The index record appears only for a few items in the data file. Each item points to a block as shown. To locate a record, we find the index record with the largest search key value less than or equal to the search key value we are looking for.
Access Method: To locate a record, we find the index record with the largest key value less than or equal to the search key, and then follow the pointers sequentially.

2. Hash File Organization
Uses a hash function to map keys to buckets.

Offers fast access for exact-match queries.
Not suitable for range queries.

Types of Indexing Methods
1. Clustered Indexing
Clustered Indexing stores related records together in the same file, reducing search time and improving performance, especially for join operations. Data is stored in sorted order based on a key (often a non-primary key) to group similar records, like students by semester. If the indexed column isn't unique, multiple columns can be combined to form a unique key. This makes data retrieval faster by keeping related records close and allowing quicker access through the index.

2. Primary Indexing
This is a type of Clustered Indexing wherein the data is sorted according to the search key and the primary key of the database table is used to create the index. It is a default format of indexing where it induces sequential file organization. As primary keys are unique and are stored in a sorted manner, the performance of the searching operation is quite efficient. 
Key Features: The data is stored in sequential order, making searches faster and more efficient.

3. Non-clustered or Secondary Indexing
A non-clustered index just tells us where the data lies, i.e. it gives us a list of virtual pointers or references to the location where the data is actually stored. Data is not physically stored in the order of the index. Instead, data is present in leaf nodes.
Example: The contents page of a book. Each entry gives us the page number or location of the information stored. The actual data here(information on each page of the book) is not organized but we have an ordered reference(contents page) to where the data points actually lie. We can have only dense ordering in the non-clustered index as sparse ordering is not possible because data is not physically organized accordingly. 
It requires more time as compared to the clustered index because some amount of extra work is done in order to extract the data by further following the pointer. In the case of a clustered index, data is directly present in front of the index.

4. Multilevel Indexing
With the growth of the size of the database, indices also grow. As the index is stored in the main memory, a single-level index might become too large a size to store with multiple disk accesses. The multilevel indexing segregates the main block into various smaller blocks so that the same can be stored in a single block.
The outer blocks are divided into inner blocks which in turn are pointed to the data blocks. This can be easily stored in the main memory with fewer overheads. This hierarchical approach reduces memory overhead and speeds up query execution.

Advantages of Indexing
Faster Queries: Indexes allow quick search of rows matching specific values, speeding up data retrieval.
Efficient Access: Reduces disk I/O by keeping frequently accessed data in memory.
Improved Sorting: Speeds up sorting by indexing the relevant columns.
Consistent Performance: Maintains query speed even as data grows.
Data Integrity: Ensures uniqueness in columns indexed as unique, preventing duplicate entries.
Disadvantages of Indexing
While indexing offers many advantages, it also comes with certain trade-offs:

Increased Storage Space: Indexes require additional storage. Depending on the size of the data, this can significantly increase the overall storage requirements.
Increased Maintenance Overhead: Indexes must be updated whenever data is inserted, deleted, or modified, which can slow down these operations.
Slower Insert/Update Operations: Since indexes must be maintained and updated, inserting or updating data takes longer than in a non-indexed database.
Complexity in Choosing the Right Index: Determining the appropriate indexing strategy for a particular dataset can be challenging and requires an understanding of query patterns and access behaviors.
Features of Indexing
Several key features define the indexing process in databases:

Efficient Data Structures: Indexes use efficient data structures like B-trees, B+ trees, and hash tables to enable fast data retrieval.
Periodic Index Maintenance: Indexes need to be periodically maintained, especially when the underlying data changes frequently. Maintenance tasks include updating, rebuilding, or removing obsolete indexes.
Query Optimization: Indexes play a critical role in query optimization. The DBMS query optimizer uses indexes to determine the most efficient execution plan for a query.
Handling Fragmentation: Index fragmentation can reduce the effectiveness of an index. Regular defragmentation can help maintain optimal performance.

### What is Scaling in DBMS
Scaling alters the size of a system. In the scaling process, we either compress or expand the system to meet the expected needs. The scaling operation can be achieved by adding resources to meet the smaller expectation in the current system, by adding a new system to the existing one, or both. 

Types of Scaling - 
- Vertical Scaling : When new resources are added to the existing system to meet the expectation, it is known as vertical scaling. 
Consider a rack of servers and resources that comprises the existing system. (as shown in the figure). Now when the existing system fails to meet the expected needs, and the expected needs can be met by just adding resources, this is considered vertical scaling. Vertical scaling is based on the idea of adding more power(CPU, RAM) to existing systems, basically adding more resources.
Vertical scaling is not only easy but also cheaper than Horizontal Scaling. It also requires less time to be fixed. 
 
- Horizontal Scaling : When new server racks are added to the existing system to meet the higher expectation, it is known as horizontal scaling. 
Consider a rack of servers and resources that comprises the existing system. (as shown in the figure). Now when the existing system fails to meet the expected needs, and the expected needs cannot be met by just adding resources, we need to add completely new servers. This is considered horizontal scaling. Horizontal scaling is based on the idea of adding more machines to our pool of resources. Horizontal scaling is difficult and also costlier than Vertical Scaling. It also requires more time to be fixed.

| Horizontal Scaling | Vertical Scaling |
|--------------------|------------------|
| When new server racks are added to the existing system to meet higher expectations, it is known as horizontal scaling. | When new resources are added to the existing system to meet expectations, it is known as vertical scaling. |
| It expands the size of the existing system horizontally. | It expands the size of the existing system vertically. |
| It is easier to upgrade. | It is harder to upgrade and may involve downtime. |
| It is difficult to implement. | It is easy to implement. |
| It is costlier, as new server racks comprise many resources. | It is cheaper as we just need to add new resources. |
| It takes more time to be done. | It takes less time to be done. |
| High resilience and fault tolerance. | Single point of failure. |
| Examples of databases that can be easily scaled: Cassandra, MongoDB, Google Cloud Spanner | Examples of databases that can be easily scaled: MySQL, Amazon RDS |

### What is Sharding in DBMS
Sharding is a very important concept that helps the system to keep data in different resources according to the sharding process. The word “Shard” means "a small part of a whole". Hence Sharding means dividing a larger part into smaller parts. In DBMS, Sharding is a type of DataBase partitioning in which a large database is divided or partitioned into smaller data and different nodes. These shards are not only smaller, but also faster and hence easily manageable. 

Database sharding is a technique for horizontal scaling of databases, where the data is split across multiple database instances, or shards, to improve performance and reduce the impact of large amounts of data on a single database.

It is basically a database architecture pattern in which we split a large dataset into smaller chunks (logical shards) and we store/distribute these chunks in different machines/database nodes (physical shards).

- Each chunk/partition is known as a "shard" and each shard has the same database schema as the original database.
- We distribute the data in such a way that each row appears in exactly one shard.
- It's a good mechanism to improve the scalability of an application.

Methods of Sharding
1. Key Based Sharding
Key Based Sharding is a technique is also known as hash-based sharding. Here, we take the value of an entity such as customer ID, customer email, IP address of a client, zip code, etc and we use this value as an input of the hash function. This process generates a hash value which is used to determine which shard we need to use to store the data.

We need to keep in mind that the values entered into the hash function should all come from the same column (shard key) just to ensure that data is placed in the correct order and in a consistent manner.
Basically, shard keys act like a primary key or a unique identifier for individual rows.
For example : You have 3 database servers and each request has an application id which is incremented by 1 every time a new application is registered.
To determine which server data should be placed on, we perform a modulo operation on these applications id with the number 3. Then the remainder is used to identify the server to store our data.

2. Horizontal or Range Based Sharding 
In Horizontal or Range Based Sharding, we divide the data by separating it into different parts based on the range of a specific value within each record. Let's say you have a database of your online customers' names and email information. You can split this information into two shards.

In one shard you can keep the info of customers whose first name starts with A-P
In another shard, keep the information of the rest of the customers. 

3. Vertical Sharding
In Vertical Sharding, we split the entire column from the table and we put those columns into new distinct tables. Data is totally independent of one partition to the other ones. Also, each partition holds both distinct rows and columns. We can split different features of an entity in different shards on different machines.

For example : On Twitter users might have a profile, number of followers, and some tweets posted by his/her own. We can place the user profiles on one shard, followers in the second shard, and tweets on a third shard.

4. Directory-Based Sharding
In Directory-Based Sharding, we create and maintain a lookup service or lookup table for the original database. Basically we use a shard key for lookup table and we do mapping for each entity that exists in the database. This way we keep track of which database shards hold which data.

The lookup table holds a static set of information about where specific data can be found. In the above image, you can see that we have used the delivery zone as a shard key:

Firstly the client application queries the lookup service to find out the shard (database partition) on which the data is placed.
When the lookup service returns the shard it queries/updates that shard.  

---
