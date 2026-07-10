# Write your MySQL query statement below
SELECT 
    V.customer_id, 
    COUNT(*) AS count_no_trans
FROM 
    visits AS V
LEFT JOIN 
    transactions AS T 
    ON V.visit_id = T.visit_id
WHERE 
    T.transaction_id IS NULL
GROUP BY 
    V.customer_id;
