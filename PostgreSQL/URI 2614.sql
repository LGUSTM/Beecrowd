SELECT c.name FROM customers c
INNER JOIN r.rentals_date FROM rentals r
WHERE r.rentals_date BETWEEN '2016-09-01' 
AND '2016-09-31'  
GROUP BY c.name;