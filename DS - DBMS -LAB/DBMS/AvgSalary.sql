create table emp_salary(
  empno integer primary key,
  ename varchar(15),
  dept varchar(20),
  salary float
);

insert into  emp_salary values
(1 , 'Rob' , 'Sales' , 3892.3),
(2 , 'Esf' , 'Sales' , 8794.3),
(3 , 'Yuki' , 'Marketing' , 9039.3),
(4 , 'Koei' , 'Sales' , 3892.3);


create or replace function dept_avg_salary(dept_name varchar(50))
returns float as
$$
declare
avg_salary float;
begin
select avg(salary) into avg_salary from emp_salary where dept = dept_name;
return avg_salary;
end
$$
language 'plpgsql';

select dept_avg_salary('Sales');



/**************Algorithm:**************

1. Create a function called **`get_dept_avg_salary`**.
2. The function takes one input parameter called **`dept_name`** of type **`VARCHAR(50)`**.
3. The function returns a floating-point number.
4. Inside the function body, declare a variable called **`avg_salary`** of type **`FLOAT`**.
5. Query the **`emp_salary`** table to get the average salary of employees in the department specified by **`dept_name`**.
6. Store the result in the **`avg_salary`** variable.
7. Return the value of **`avg_salary`**.
8. End of function./