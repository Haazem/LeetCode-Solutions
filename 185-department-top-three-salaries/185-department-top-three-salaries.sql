/* Write your T-SQL query statement below */
WITH CTE(eid, Employee , Salary , did , DR)
AS (
SELECT id, name , salary , departmentId,
	   DENSE_RANK() OVER(PARTITION BY departmentId 
	   ORDER BY salary DESC) 
FROM Employee
)

SELECT 
     d.name as Department,
	 c.Employee , 
	 c.Salary
	 
FROM CTE c 
JOIN Employee e 
ON e.id = c.eid
JOIN Department d 
ON d.id = e.departmentId
WHERE c.DR <= 3 
ORDER BY d.name,
		 Salary DESC


