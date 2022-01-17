SELECT c.name, SUM(p.amout) FROM categories c
INNER JOIN products p
ON p.id_categories = c.categories
GROUP BY c.name;