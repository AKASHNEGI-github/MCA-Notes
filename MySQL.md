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

-
```sql

```
