# Write your MySQL query statement below

select unique_id,name from Employees
LEFT JOIN EmployeeUNI 
ON Employees.id =EmployeeUNI.id 
#if Employees.id !=EmployeeUNI.id return is null;