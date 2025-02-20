# Write your MySQL query statement below
Select v.customer_id ,COUNT(*) AS count_no_trans
FROM Visits AS v
LEFT JOIN Transactions
ON V.visit_id=Transactions.visit_id
WHERE Transactions.transaction_id is NULL
GROUP BY v.customer_id