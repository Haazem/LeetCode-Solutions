/* Write your T-SQL query statement below */


SELECT 
    *
FROM 
    Cinema
WHERE 
    description !=  'boring' 
AND 
    id % 2 != 0 
    
ORDER BY rating DESC;