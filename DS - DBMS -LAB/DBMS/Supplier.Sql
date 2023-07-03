CREATE TABLE supplier (
	supcode INTEGER PRIMARY KEY,
	sname VARCHAR(50),
	city VARCHAR(50)
);

CREATE TABLE product (
	pcode INTEGER PRIMARY KEY,
	pname VARCHAR(50)
);

CREATE TABLE supl_product (
	supcode INTEGER,
	pcode INTEGER,
	qty INTEGER,
	FOREIGN KEY (supcode) REFERENCES supplier(supcode),
	FOREIGN KEY (pcode) REFERENCES product(pcode)
);

INSERT INTO supplier VALUES 
		(1, 'John', 'Seattle'),
		(2, 'Mary', 'Seattle'),
		(3, 'David', 'New York'),
		(4, 'Linda', 'New York');

INSERT INTO product VALUES
		(1, 'P1'),
		(2, 'P2'),
		(3, 'P3');

INSERT INTO supl_product VALUES
		(1, 1, 10),
		(2, 1, 20),
		(3, 2, 30),
		(4, 3, 40),
		(4, 2, 50),
		(3, 3, 60);


-- a) Get all pairs of supplier numbers such that the two suppliers are located in the same city.
select F.sname as supplier1 , S.sname as supplier2 from supplier F , supplier S where F.city = S.city and F.supcode<>S.supcode;

SELECT s1.supcode, s2.supcode
FROM supplier s1, supplier s2
WHERE s1.city = s2.city AND s1.supcode < s2.supcode;

-- b) Get supplier names for suppliers who supply product P2.

select sname from supplier , supl_product where supl_product.pcode = 'P2' and supl_product.supcode = supplier.supcode

-- c) Get product numbers supplied by more than one supplier.

SELECT sp.pcode
FROM supl_product sp
GROUP BY sp.pcode
HAVING COUNT(DISTINCT sp.supcode) > 1;

select count(supl_product.pcode) from supl_product group By supl_product.pcode having count(supl_product.supcode)>1;

-- d) Get supplier numbers for suppliers who are located in the same city as supplier S1

SELECT s.supcode 
FROM supplier s 
WHERE s.city = (
		SELECT city 
		FROM supplier 
		WHERE supcode=1 ) 
AND s.supcode != 1;

-- e) Get supplier names for suppliers who supply part P1.
SELECT s.sname
FROM supplier s, supl_product sp, product p
WHERE s.supcode = sp.supcode AND sp.pcode = p.pcode AND p.pname = 'P1';


-- f) Get the number of Suppliers, who are supplying at least one product.


-- g) For each product supplied, get the pcode. and the total quantity supplied for that part.

SELECT sp.pcode, SUM(sp.qty) as total_quantity
FROM supl_product sp
GROUP BY sp.pcode;

