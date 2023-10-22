# Write your MySQL query statement below
select  e.name from employee e,employee m where e.id=m.managerid group by m.managerid having count(*)>=5;