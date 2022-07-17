/* Write your T-SQL query statement below */

WITH CTE(Email , total)
AS 
(
SELECT email , COUNT(email)  
FROM Person
GROUP BY email 
HAVING COUNT(email) > 1 
)

SELECT Email 
FROM  CTE
