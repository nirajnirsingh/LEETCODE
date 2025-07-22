# Write your MySQL query statement below
-- select salary as SecondHighestSalary from Employee order by salary limit 1 OFFSET 1;

SELECT max(salary) as SecondHighestSalary from Employee where salary < (SELECT max(salary) as SecondHighestSalary from Employee);