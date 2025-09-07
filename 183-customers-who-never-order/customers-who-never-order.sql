
SELECT  C.name AS Customers
FROM Customers C
left JOIN
Orders o
ON 
C.id=o.customerId
WHERE o.customerId IS NULL;