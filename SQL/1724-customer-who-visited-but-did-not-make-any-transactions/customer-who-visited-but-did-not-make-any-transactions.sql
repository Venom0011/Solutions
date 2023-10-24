# Write your MySQL query statement below
select v.customer_id,count(*) "count_no_trans" from visits v where not exists (select v.customer_id from                 transactions t where v.visit_id=t.visit_id) group by v.customer_id order by v.visit_id;
