SELECT DISTINCT a.num AS ConsecutiveNums 
FROM logs a 
JOIN logs b 
ON a.id+1 = b.id
JOIN logs c 
ON c.id = a.id + 2
WHERE a.num = b.num AND b.num = c.num
