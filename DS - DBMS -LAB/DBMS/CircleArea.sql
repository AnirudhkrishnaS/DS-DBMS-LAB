CREATE TABLE circle(radius FLOAT ,area FLOAT);

DO
$$
DECLARE
r INTEGER := 3;
a FLOAT;

BEGIN
WHILE r<=7 LOOP
a:= 3.14*r*r;
INSERT INTO circle(radius,area) VALUES (r,a);
r:=r+1;
END LOOP;
END;
$$
language 'plpgsql';

SELECT * FROM circle;