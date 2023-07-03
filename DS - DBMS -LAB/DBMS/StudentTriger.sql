CREATE TABLE Student (
	regno INTEGER PRIMARY KEY,
	sname VARCHAR(50),
	sub1 INTEGER,
	sub2 INTEGER,
	sub3 INTEGER,
	sub4 INTEGER,
	sub5 INTEGER,
	mark_total INTEGER,
	avg_mark FLOAT
);




CREATE OR REPLACE FUNCTION calculate_marks_and_average()
RETURNS TRIGGER AS $$
BEGIN
NEW.mark_total := NEW.sub1 + NEW.sub2 + NEW.sub3 + NEW.sub4 + NEW.sub5;
NEW.avg_mark := NEW.mark_total / 5.0;
RETURN NEW;
END;
$$ LANGUAGE plpgsql;



CREATE TRIGGER update_marks_and_average
BEFORE INSERT ON Student
FOR EACH ROW
EXECUTE FUNCTION calculate_marks_and_average();


INSERT INTO Student VALUES 
	(1, 'John Doe', 80, 75, 90, 85, 70),
	(2, 'Elk Keki', 46, 98, 64, 73, 69)
;

/**************Algorithm:**************

1. Create a function called **`calculate_marks_and_average`**.
2. The function returns a trigger.
3. Inside the function body, calculate the total marks of a student by adding up their marks in five subjects.
4. Calculate the average mark of the student by dividing the total marks by 5.0.
5. Assign the total marks and average mark to the corresponding columns in the **`NEW`** row.
6. Return the **`NEW`** row with updated values.
7. End of function.