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






/*Algorithm:**

1. Declare two variables, **`r`** and **`a`**.
2. Loop through each value of **`r`** from 3 to 7.
    1. Calculate the area of a circle with radius **`r`**.
    2. Insert a new row into the **`areas`** table with the values of **`r`** and **`a`**.
    3. Increment **`r`** by 1.//