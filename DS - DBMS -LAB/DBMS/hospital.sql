 create table hospital
(doctorid varchar(15) primary key ,
doctorname varchar(20) ,
department varchar(25) ,
qualification varchar(10)  , 
experience int 
);

insert into hospital values
('101' , 'gopal' , 'Dental' , 'MD' , 2),
('102' , 'alex' , 'ENT' , 'md' , 4),
('103' , 'Ramesh' , 'Cardiac' , 'MD' , 3),
('104' , 'Anna' , 'Ortho' , 'MS' , 4),
('105' , 'Sam' , 'general' , 'MBBS' , 2);


-->b) Display the details of the Doctors
select doctorname , department from hospital;


-->c) Display the details of doctors who have the qualification ‘MD’
select doctorname from hospital where qualification = 'MD';


-->d) Display all doctors who have more than 5 years experience but do not have the qualification ‘MD’
select doctorname from hospital where qualification != 'MD' and experience >5;


-->e) Display the doctors in ‘Skin’ department
select doctorname from hospital where department = 'skin';


-->f) update the experience of doctor with doctored=’D003’ to 5
update hospital set experience = 5 where doctorid = '105';

-->g) Delete the doctor with DoctorID=’D005’
delete from hospital where doctorid = '105';