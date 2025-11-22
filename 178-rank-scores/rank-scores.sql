# Write your MySQL query statement below
-- select version()
select score, DENSE_RANK() OVER (ORDER BY score desc) as 'rank'
from Scores order by score desc;