create or replace function prime(n int)
returns void as
$$
declare
i int;
f int  = 0;
begin
if n=2 then
f:=0;
else
for i in 2 ..(n-1)
loop
if(mod(n,i)=0)then
f:=1;
end if;
end loop;
end if;
if(f = 0) then
raise notice '% is a prime number',n;
else
raise notice '% is not a prime number',n;
end if;
end;
$$
language 'plpgsql';

select prime(7);
select prime(2);