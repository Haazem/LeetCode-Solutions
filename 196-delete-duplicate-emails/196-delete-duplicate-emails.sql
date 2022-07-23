/* 
 Please write a DELETE statement and DO NOT write a SELECT statement.
 Write your T-SQL query statement below
 */

WITH CTE(id , RN) 
AS 
(
SELECT id , 
       ROW_NUMBER() OVER(PARTITION BY email ORDER BY id)   
FROM Person
)

DELETE FROM Person
WHERE id IN  (SELECT  id 
              FROM CTE 
              WHERE RN > 1 
             )
