# Write your MySQL query statement below
select w2.id
from
Weather as w1
join 
Weather as w2
on Date_Add(w1.recordDate,Interval 1 day)=w2.recordDate
where w1.temperature<w2.temperature;