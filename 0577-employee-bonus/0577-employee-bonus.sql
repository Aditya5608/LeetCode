# Write your MySQL query statement below

select Employee.name,Bonus.bonus from Employee
Left join Bonus on Employee.empId=Bonus.empID
where bonus<1000 or bonus is null;