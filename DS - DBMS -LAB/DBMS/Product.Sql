CREATE TABLE product (
	Product_code INT PRIMARY KEY,
	Product_Name VARCHAR(255),
	Category VARCHAR(255),
	Quantity INT,
	Price NUMERIC(10, 2)
);


INSERT INTO product VALUES
	(101, 'Lux Soap', 'bath soap', 500, 25),
	(102, 'Closeup Toothpaste', 'paste', 200, 40),
	(103, 'Ariel Washing Powder', 'washing powder', 300, 60),
	(104, 'Dettol Handwash', 'handwash', 150, 50),
	(105, 'Surf Excel', 'washing powder', 400, 45),
	(106, 'Pepsodent Toothpaste', 'paste', 150, 30);



a) Display the records in the descending order of Product_Name

SELECT * FROM product ORDER BY Product_Name DESC


b) Display Product_Code, Product_Name with price between 20 and 50

SELECT Product_Code, Product_Name FROM product 
WHERE Price BETWEEN 20 AND 50;

c) Display the details of products which belongs to the categories of bath soap, paste, or washing powder

SELECT * FROM product 
WHERE Category IN ('bath soap', 'paste', 'washing powder');

d) Display the products whose Quantity less than 100 or greater than 500
SELECT * FROM product WHERE Quantity < 100 OR Quantity > 500;

e) Display the products whose names starts with 's'

SELECT * FROM product WHERE Product_Name LIKE 'S%';

f) Display the products which not belongs to the category 'paste'f
SELECT * FROM product WHERE Category <> 'paste';

g) Display the products whose second letter is 'u' and belongs to the category 'washing powder'
SELECT * FROM product 
WHERE Category = 'washing powder' AND Product_Name LIKE '_u%';

