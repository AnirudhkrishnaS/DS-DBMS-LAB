create table sales_man(salesman_no varchar(5) primary key , s_name varchar(10) not null ,
 place varchar(30) , phone varchar(10) unique);

select * from sales_man;
-->a) Insert few records in both tables
insert into sales_man (salesman_no , s_name , place , phone)values(101 , 'arjun' , 'up' , '9898585825');
insert into sales_man values(102 , 'yudhishtir' , 'mp' , '8585225258') , (103 , 'bheem' , 'uthrakand' , '4545656545') , (104 , 'nakul' , 'jharkand' , '4545585825');    

create table sales_order (order_no varchar(5)  primary key , order_date date not null , 
salesman_no varchar(5) , del_type char check(del_type = 'P' OR del_type = 'F') ,
order_status vachar(15) check (order_status = 'Inprocess' or order_status = 'Fulfilled' or order_status = 'Backorder' or order_status = 'Cancelled') ,
foreign key(salesman_no) references sales_man(salesman_no));
-->
a) Insert few records in both tables
insert into sales_order values(001 , '10-2-2020' , 101 , 'P' , 'Fulfilled')  ,
  (002 , '15-3-2020' , 102 , 'F' , 'Cancelled'),
   (003 , '19-06-2020' , 103 , 'P' , 'Backorder') ,
    (004 , '20-12-2020' , 104 , 'P' , 'Fulfilled');



-->b) Delete primary key from sales_man table
alter table sales_man drop constraint sales_man_pkey cascade;


-->c) Delete Foreign key and Check constraints from sales_order table
alter table sales_order drop constraint sales_order_order_status_check;
alter table sales_order drop constraint sales_order_del_type_check;

-->d) Add primary key in sales_man using ALTER TABLE
alter table sales_man add constraint pk_salesman primary key(salesman_no);


-->e) Add foreign key and CHECK constraints in sales_order table using ALTER TABLE
alter table sales_order add constraint fk_salesman foreign key (salesman_no) references sales_man(salesman_no);
alter table sales_order add constraint check_order_status check(order_status in('Inprocess' , 'Fulfilled' , 'Backorder' , 'Cancelled'));
 alter table sales_order add constraint check_del_type check(del_type in('P' , 'F'));






