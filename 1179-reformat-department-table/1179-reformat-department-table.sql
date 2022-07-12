/* Write your T-SQL query statement below */


SELECT id ,
       SUM(IIF(month = 'Jan' , revenue , null)) as Jan_Revenue,
       SUM(IIF(month = 'Feb' , revenue , null)) as Feb_Revenue,
       SUM(IIF(month = 'Mar' , revenue , null)) as Mar_Revenue,
       SUM(IIF(month = 'Apr' , revenue , null)) as Apr_Revenue,
       SUM(IIF(month = 'May' , revenue , null)) as May_Revenue,
       SUM(IIF(month = 'Jun' , revenue , null)) as Jun_Revenue,
       SUM(IIF(month = 'Jul' , revenue , null)) as Jul_Revenue,
       SUM(IIF(month = 'Aug' , revenue , null)) as Aug_Revenue,
       SUM(IIF(month = 'Sep' , revenue , null)) as Sep_Revenue,
       SUM(IIF(month = 'Oct' , revenue , null)) as Oct_Revenue,
       SUM(IIF(month = 'Nov' , revenue , null)) as Nov_Revenue,
       SUM(IIF(month = 'Dec' , revenue , null)) as Dec_Revenue
       
       
FROM Department 
GROUP BY id 
ORDER BY id