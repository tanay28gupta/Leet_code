SELECT e.name
FROM Employee AS e 
INNER JOIN Employee m ON e.id=m.managerId 
GROUP BY m.managerId 
having
 COUNT(m.managerId) >= 5