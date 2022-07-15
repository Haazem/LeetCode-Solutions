/* Write your T-SQL query statement below */
SELECT e1.name   as Employee
FROM Employee e1 
JOIN 
(SELECT e2.id , e2.salary
 FROM Employee e2
)sub
ON sub.id = e1.managerId 
AND sub.salary < e1.salary
