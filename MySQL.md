# MYSQL

---

### Implementation
```sql

# Create & Drop Database
CREATE DATABASE IF NOT EXISTS DB1;
DROP DATABASE IF EXISTS Db1;


# View Databases
SHOW DATABASES;


# Use Database
USE Db1;


# Create Table
CREATE TABLE;


# Drop Table
DROP TABLE;


```

### Questions

- Big Countries
```sql
SELECT name , population , area
FROM World
WHERE area >= 3000000 OR population >= 25000000;
```

- Not Boring Movies
```sql
SELECT *
FROM Cinema
WHERE (id%2 != 0) AND (description != "boring")
ORDER BY rating DESC;
```

- Classes More Than 5 Students
```sql
SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(student) >= 5;
```
- Duplicate Emails
```sql
SELECT email AS Email
FROM Person
GROUP BY email
HAVING COUNT(email) > 1;
```

```sql
SELECT email AS Email
FROM Person
GROUP BY email
HAVING COUNT(id) > 1;
```

- Actors and Directors Who Cooperated At Least Three Times
```sql
SELECT actor_id , director_id
FROM ActorDirector 
GROUP BY actor_id , director_id
HAVING COUNT(timestamp) >= 3;
```

- Combine Two Tables
```sql
SELECT P.firstName , P.lastName , A.city , A.state
FROM Person AS P
LEFT JOIN Address AS A
ON P.personId = A.personId;
```

```sql
SELECT P.firstName , P.lastName , A.city , A.state
FROM Person AS P
LEFT JOIN Address AS A
USING (personId);
```

- Employees Earning More Than Their Managers
```sql
SELECT E1.name AS Employee 
FROM Employee AS E1 
INNER JOIN Employee AS E2
ON E1.managerId = E2.id 
WHERE E1.salary > E2.salary;
```

```sql
SELECT E1.name AS Employee 
FROM Employee AS E1 
LEFT JOIN Employee AS E2
ON E1.managerId = E2.id 
WHERE E1.salary > E2.salary;
```

- Find Customer Referee
```sql
SELECT name 
FROM Customer
WHERE referee_id != 2 OR referee_id IS NULL;
```

- Employee Bonus
```sql
SELECT E.name , B.bonus
FROM Employee AS E
LEFT JOIN Bonus AS B
ON E.empId = B.empId
WHERE B.bonus < 1000 OR B.bonus IS NULL;
```

- Customers Who Never Order
```sql
SELECT C.name AS Customers
FROM Customers AS C
LEFT JOIN Orders AS O
ON C.id = O.customerId
WHERE O.customerId Is NULL;
```

```sql
SELECT C.name AS Customers
FROM Customers AS C
WHERE C.id NOT IN
(
    SELECT C.id
    FROM Customers AS C
    INNER JOIN Orders AS O
    ON C.id = O.customerId
);
```










```
