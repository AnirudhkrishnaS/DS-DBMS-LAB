create table exam_result(rollno int primary key , avg_score float , grade varchar(5));


insert into exam_result values
(101 , 78.5 , null),
(102 , 82.3 , null),
(103 , 69.9 , null),
(104 , 91.7 , null),
(105 , 62.9 , null),
(106 , 85.4 , null),
(107 , 76.1 , null),
(108 , 88.8 , null);


select * from exam_result;

do
$$
declare
roll integer;
average_score float;
grd varchar(2);
f record;
begin
raise notice 'exam result values';
raise notice 'roll_no mark grade';
for f in select * from exam_result
loop
roll=f.rollno;
average_score := f.avg_score;
if average_score >=90 then
grd = 'A';
elsif average_score >=75 and average_score <=89 then
grd = 'B';
elsif average_score >=60 and average_score <=74 then
grd = 'C';
elsif average_score >=50 and average_score <=59 then
grd = 'D';
else
grd='D';
end if;
update exam_result set grade = grd where exam_result.rollno = roll;
raise notice '%   %   %' , roll , average_score , grd;
end loop;
end;
$$ 
language 'plpgsql';
