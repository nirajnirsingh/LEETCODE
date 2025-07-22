-- CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
-- BEGIN
--   RETURN (
--           # Write your MySQL query statement below.

--           declare getNthHighestSalary int;
--             select distinct salary into getNthHighestSalary from Employee order by desc salary limit 1 offset N-1;
--   );
-- END

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    SET N= N-1;
  RETURN (
    SELECT DISTINCT salary
    FROM Employee
    ORDER BY salary DESC
    LIMIT 1 OFFSET N
  );
END;
