/* Write your T-SQL query statement below */


WITH total(Day , total_count)
AS 
(
SELECT t.request_at,
       COUNT(*)
FROM    Trips t 
JOIN    Users c ON c.users_id = t.client_id 
AND     c.banned = 'No'
JOIN    Users d ON d.users_id = t.driver_id 
AND     d.banned = 'No'
GROUP BY t.request_at

),
canceled(Day , canceled)
AS 
(
SELECT t.request_at ,
       COUNT(*)
FROM Trips t 
JOIN Users u 
ON   u.users_id = t.client_id 
AND  u.banned = 'No'
JOIN Users d 
ON   d.users_id = t.driver_id
AND  d.banned   = 'No'
WHERE t.status != 'completed'
GROUP BY t.request_at 

)


SELECT t.Day,
  ISNULL(
  CAST( 
      CAST(c.canceled    AS FLOAT)/
      CAST(t.total_count AS FLOAT 
       )
      AS DECIMAL(10 , 2)), 0.00) AS "Cancellation Rate"
              
FROM total t 
LEFT JOIN canceled c 
ON t.Day = c.Day
WHERE t.Day BETWEEN '2013-10-01' AND '2013-10-03'




























