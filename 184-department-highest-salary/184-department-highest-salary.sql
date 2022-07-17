/* Write your T-SQL query statement below */
WITH CTE(did , max_salary) 
AS 
(
SELECT departmentId , MAX(salary)
FROM Employee 
GROUP BY departmentId
)

SELECT d.name as Department ,
       e.name as Employee,
       e.salary as Salary
        
FROM Employee e 
JOIN Department d 
ON e.departmentId = d.id 
JOIN CTE c 
ON c.did = d.id 
WHERE c.max_salary = e.salary

