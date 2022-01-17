SELECT m.id, m.name FROM movies as m
LEFT JOIN p.prices as p
ON p.id = m.id_prices
WHERE p.value < 2.00;