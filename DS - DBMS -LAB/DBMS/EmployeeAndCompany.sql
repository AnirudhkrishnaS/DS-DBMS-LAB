CREATE TABLE employee (
	employee_name VARCHAR(30) PRIMARY KEY,
	city VARCHAR(15)
);

CREATE TABLE company (
	company_name VARCHAR(30) PRIMARY KEY,
	city VARCHAR(15)
);

CREATE TABLE works (
	employee_name VARCHAR(30)
		REFERENCES employee(employee_name),
	company_name VARCHAR(30)
		REFERENCES company(company_name),
	salary NUMERIC(9,2)
);

CREATE TABLE manages (
	employee_name VARCHAR(30)
		REFERENCES employee(employee_name),
	manager_name VARCHAR(30)
);


INSERT INTO employee
VALUES ('Alice', 'Bangalore'),
       ('Bob', 'Bangalore'),
       ('Charlie', 'Mumbai'),
       ('Dave', 'Mumbai'),
       ('Eve', 'Chennai');

INSERT INTO company
VALUES ('Wipro', 'Bangalore'),
       ('Infosys', 'Bangalore'),
       ('Tata Consultancy Services', 'Mumbai');

INSERT INTO works
VALUES ('Alice', 'Wipro', 50000),
       ('Bob', 'Infosys', 60000),
       ('Charlie', 'Tata Consultancy Services', 70000),
       ('Dave', 'Tata Consultancy Services', 80000),
       ('Eve', 'Wipro', 55000);

INSERT INTO manages
VALUES ('Alice', 'Bob'),
       ('Charlie', 'Dave');


a) Find the names of all employees who work in Infosys

select employee_name from works where company_name = 'Infosys';

SELECT employee_name
FROM employee
WHERE employee_name IN (
    SELECT employee_name
    FROM works
    WHERE company_name = 'Infosys'
);

b) Find the names and cities of residence of all employees who works in Wipro
select employee.employee_name , employee.city from
 employee , works where 
 employee.employee_name = works.employee_name and works.company_name = 'Wipro';

 SELECT employee_name, city
FROM employee
WHERE employee_name IN (
    SELECT employee_name
    FROM works
    WHERE company_name = 'Wipro'
);

c) Find the names, and cities of all employees who work in Infosys and earn more than Rs. 10,000.

SELECT employee_name, city
FROM employee
WHERE employee_name IN (
		SELECT employee_name
		FROM works
		WHERE company_name = 'Infosys'
		AND salary > 10000.0
);

d) Find the employees who live in the same cities as the companies for which they work.

SELECT employee_name
FROM employee
WHERE city IN (
    SELECT city
    FROM company
    WHERE company_name IN (
        SELECT company_name
        FROM works
        WHERE employee_name = employee.employee_name
    )
);

e) Find all employees who do not work in Wipro Corporation.

SELECT employee_name
FROM employee
WHERE employee_name NOT IN (
    SELECT employee_name
    FROM works
    WHERE company_name = 'Wipro'
);

f) Find the company that has the most employees.

SELECT company_name
FROM works
GROUP BY company_name
ORDER BY COUNT(*) DESC
LIMIT 1;
