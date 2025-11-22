# Write your M
select  E2.name as
`Employee`
from Employee  
as E1 inner join 
Employee as E2
on E1.id = E2.managerId
where E1.salary<E2.salary;

-- SELECT 
--     E1.name AS Employee
-- FROM 
--     Employee E1
-- JOIN 
--     Employee E2
-- ON 
--     E1.managerId = E2.id
-- WHERE 
--     E1.salary > E2.salary;
