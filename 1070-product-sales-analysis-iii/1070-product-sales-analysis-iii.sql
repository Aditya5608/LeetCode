# Write your MySQL query statement below

select s.product_id,s.year as first_year,s.quantity,s.price from sales as s

WHERE (product_id, year) IN 
(SELECT product_id, MIN(year) FROM Sales GROUP BY product_id);