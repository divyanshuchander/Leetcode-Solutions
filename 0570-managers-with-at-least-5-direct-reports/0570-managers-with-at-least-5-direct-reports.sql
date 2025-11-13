# Write your MySQL query statement below

select res.name
from employee as res
where id in
(select man.id from employee as man
inner join 
    employee as emp
    on man.id = emp.managerId
group by 
    man.id
having
count(*)>=5);