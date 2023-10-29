# Write your MySQL query statement below
select * from patients where conditions RLIKE ' diab1' or conditions like 'diab1%'