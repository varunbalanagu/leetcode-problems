select  C.name from
Customer C 
left join 
Customer C2
on 
C.referee_id=C2.id
And C2.id =2
where C2.id is Null