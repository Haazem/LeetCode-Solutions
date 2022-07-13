WITH CTE
AS
(
SELECT salary ,
	   DENSE_RANK() OVER(ORDER BY salary DESC ) as d_r
FROM Employee
)
SELECT CASE WHEN COUNT(*) = 0 THEN NULL 
		    ELSE (SELECT DISTINCT salary   
				 FROM CTE 
				 WHERE d_r = 2 
				) END AS SecondHighestSalary

FROM CTE
WHERE d_r = 2;

