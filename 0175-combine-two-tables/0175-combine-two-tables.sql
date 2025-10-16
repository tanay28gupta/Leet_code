select  Person.LastName, Person.firstName ,address.city, address.state
from Person
left join Address
on
Person.personId=Address.personId