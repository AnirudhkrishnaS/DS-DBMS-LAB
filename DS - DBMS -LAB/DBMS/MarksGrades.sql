create table stud_mark(
regno integer primary key,
	sname varchar(20),
	avg_mark float
);


INSERT INTO stud_mark VALUES
	(101, 'John', 78.5),
	(102, 'Jane', 82.3),
	(103, 'Mike', 90.2),
	(104, 'Alice', 87.6)
;



create or replace function stud_grade()
returns void as


$$
declare
dist_count int:=0;
first_count int:=0;
seco_count int:=0;
third_count int:=0;
FAILED int:=0;

begin
select count(*) into dist_count from stud_mark where avg_mark>=90;
raise notice 'The number of Distinctions is : %',dist_count;

select count(*) into first_count from stud_mark where avg_mark>=75 and avg_mark<90;
raise notice 'The number of First Class is : %',first_count;

select count(*) into seco_count from stud_mark where avg_mark>=75 and avg_mark<75;
raise notice 'The number of First Class is : %',seco_count;

select count(*) into third_count from stud_mark where avg_mark>=75 and avg_mark<60;
raise notice 'The number of First Class is : %',third_count;

select count(*) into FAILED FROM stud_mark where avg_mark<50;
raise notice 'The number of Failed is: %',FAILED;
END;
$$
language 'plpgsql';


select stud_grade();
