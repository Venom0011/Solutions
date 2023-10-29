# Write your MySQL query statement below
# select p.product_id, sum((u.units*p.price))/sum(u.units) "average_price" from prices p join unitssold u on
# p.product_id=u.product_id
# group by u.product_id;


select  p.product_id, ifnull(round(sum(units * price)/sum(units),2),0) as average_price  from unitssold u  right join prices p on p.product_id=u.product_id and u.purchase_date >= p.start_date and u.purchase_date<=p.end_date group by p.product_id;

 # Select  Prices.product_id, ifnull(round(sum(units * price)/sum(units),2),0) as average_price  from Prices left join UnitsSold on UnitsSold.purchase_date >= Prices.start_date and UnitsSold.purchase_date <= Prices.end_date and Prices.product_id = UnitsSold.product_id group by Prices.product_id;