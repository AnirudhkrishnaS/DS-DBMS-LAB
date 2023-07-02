CREATE OR REPLACE PROCEDURE fib(n integer) as
$$
DECLARE 
a int := 0;
b int := 1;
c  int := 0;
count int ;
BEGIN
RAISE NOTICE 'fibonacci Series';
FOR COUNT IN 1 .. n LOOP
RAISE NOTICE '%' , c;
a=b;
b=c;
c=a+b;
END LOOP;
END;
$$
language 'plpgsql';

call fib(10);