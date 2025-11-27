# Write your MySQL query statement below
Select E1.employee_id, E1.name, count(E2.employee_id) as reports_count, round(avg(E2.age)) as average_age
    from Employees as E1 
    join
    Employees as E2
    where E1.employee_id = E2.reports_to group by E1.employee_id,E1.name
    order by E1.employee_id;