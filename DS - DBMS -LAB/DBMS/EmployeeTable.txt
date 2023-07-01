-->  create table employee
 (emp_id varchar(5) primary key ,
  e_name varchar(20) , 
  salary int ,
   dept varchar(15), 
   age int 
   );

--> insert into employee values
(101 , 'Arjun' , 30000 , 'Purchase' , 25),
(102 , 'Nakul' , 35000 , 'Stock' , 23),
(103 , 'Haritha' , 25000 , 'Sales' , 30)
,(104 , 'Rahul' , 45000 , 'Administrator' , 40),
(105 , 'Ganesh' , 50000 , 'HR' , 55);

--> select count(e_name) from employee;

-->select dept, max(age) as maximum_age from employee group by dept;

-->select dept ,  avg(age) as average_age from employee group by dept;

--> select dept , avg(salary) as Average_salary from employee group by dept;

--> select min(salary) as Minimun_salary from employee;

-->select count(e_name) from employee where dept = 'purchase';

->select max(salary) as Maximum_salary from employee where dept = 'sales';

-->select max(salary) - min(salary) as Salary_diff from employee;