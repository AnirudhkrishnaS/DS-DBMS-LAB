 CREATE TABLE customer(cust_no varchar(5) , cust_name varchar(15) , age int ,  phone varchar(10));

-->a) insert 5 records and display it
-INSERT INTO customer(cust_no , cust_name , age , phone)values(101 , 'raju' , 19 , '9475823652');
 insert into customer values(102 , 'Anirudh' , 20 , '9447585820'),(103 , 'abhilash' , 23 , '8585264588');

select *from customer;

--> b) add new field d_birth with date datatype
alter table customer add d_birth date;


--> c) create another table cust_phone with fields cust_name and phone from customer table
create table cust_phone as select cust_name,phone  from customer;


--> d) remove the field age
ALTER TABLE customer DROP COLUMN age;


-->e) change the size of the cust_name to 25
alter table customer alter cust_name type varchar(25);


-->f) delete all the records from the table
delete from customer;


-->g) rename the table cutomer to cust
 alter table customer rename to cust;

-->h) drop the table

drop table cust;