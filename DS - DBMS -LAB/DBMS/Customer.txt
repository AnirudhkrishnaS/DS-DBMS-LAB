--> CREATE TABLE customer(cust_no varchar(5) , cust_name varchar(15) , age int ,  phone varchar(10));


--> INSERT INTO customer(cust_no , cust_name , age , phone)values(101 , 'raju' , 19 , '9475823652');


--> insert into customer values(102 , 'Anirudh' , 20 , '9447585820'),(103 , 'abhilash' , 23 , '8585264588');

--> select *from customer;


--> alter table customer add d_birth date;

--> create table cust_phone as select cust_name,phone  from customer;

--> ALTER TABLE customer DROP COLUMN age;

--> alter table customer alter cust_name type varchar(25);

--> delete from customer;

--> alter table customer rename to cust;

--> select *from cust;

--> drop table cust;