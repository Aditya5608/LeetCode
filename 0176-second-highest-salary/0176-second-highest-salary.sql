-- # Write your MySQL query statement below

-- select salary as SecondHighestSalary from Employee
-- where salary=(select MAX(salary) from Employee where salary<(select MAX(Salary) from Employee); 

select max(salary) as SecondHighestSalary
from employee
where salary<(select max(salary) from employee);