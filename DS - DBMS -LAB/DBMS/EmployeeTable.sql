create table employee
 (emp_id varchar(5) primary key ,
  e_name varchar(20) , 
  salary int ,
   dept varchar(15), 
   age int 
   );

insert into employee values
(101 , 'Arjun' , 30000 , 'Purchase' , 25),
(102 , 'Nakul' , 35000 , 'Stock' , 23),
(103 , 'Haritha' , 25000 , 'Sales' , 30)
,(104 , 'Rahul' , 45000 , 'Administrator' , 40),
(105 , 'Ganesh' , 50000 , 'HR' , 55);


-->a) Display the total number of employees.
select count(e_name) from employee;


-->b) Display the name and age of the oldest employee of each department.
select dept, max(age) as maximum_age from employee group by dept;


-->c) Display the average age of employees of each department
select dept ,  avg(age) as average_age from employee group by dept;


-->d) Display departments and the average salaries
select dept , avg(salary) as Average_salary from employee group by dept;


-->e) Display the lowest salary in employee tabl
select min(salary) as Minimun_salary from employee;


-->f) Display the number of employees working in purchase department
select count(e_name) from employee where dept = 'purchase';


-->g) Display the highest salary in sales department;
select max(salary) as Maximum_salary from employee where dept = 'sales';


-->h) Display the difference between highest and lowest salary
select max(salary) - min(salary) as Salary_diff from employee;