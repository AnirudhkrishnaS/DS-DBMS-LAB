create or replace function calculate_bill(cust_no integer , units_consumed integer)
returns float as
$$
declare 
rate_per_unit float := 5.0;
fixed_charge float :=100.0;
bill_amount float;

begin
bill_amount := fixed_charge +(units_consumed*rate_per_unit);
raise notice 'customer %''s bill amount is %' , cust_no , bill_amount;
return bill_amount;
end;
$$
language 'plpgsql';

select calculate_bill(23 , 65);

/**************Algorithm:**************

1. Create a function called **`calculate_bill`** that accepts two arguments: **`cust_no`** and **`units_consumed`**.
2. Declare three variables: **`rate_per_unit`**, **`fixed_charge`**, and **`bill_amount`**.
3. Calculate the bill amount by adding the fixed charge to the product of the units consumed and the rate per unit.
4. Use the **`RAISE NOTICE`** statement to display the customer number and bill amount.
5. Return the bill amount.*/
