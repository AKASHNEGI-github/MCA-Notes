# MYSQL

---

### Implementation


### Questions

- Combine Two Tables
```sql
SELECT P.firstName , P.lastName , A.city , A.state
FROM Person AS P
LEFT JOIN Address AS A
ON P.personId = A.personId;
```
