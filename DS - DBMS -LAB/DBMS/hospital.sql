--> create table hospital
(doctorid varchar(15) primary key ,
doctorname varchar(20) ,
department varchar(25) ,
qualification varchar(10)  , 
experience int 
);

-->insert into hospital values
('101' , 'gopal' , 'Dental' , 'MD' , 2),
('102' , 'alex' , 'ENT' , 'md' , 4),
('103' , 'Ramesh' , 'Cardiac' , 'MD' , 3),
('104' , 'Anna' , 'Ortho' , 'MS' , 4),
('105' , 'Sam' , 'general' , 'MBBS' , 2);


--> select doctorname , department from hospital;

-->select doctorname from hospital where qualification = 'MD';

-->  select doctorname from hospital where qualification != 'MD' and experience >5;

-->select doctorname from hospital where department = 'skin';

--> update hospital set experience = 5 where doctorid = '105';

--> delete from hospital where doctorid = '105';