# Destructors-in-cpp
Destructor is a member function which destructs or deletes an object.

When is destructor called? 
A destructor function is called automatically when the object goes out of scope: 
(1) the function ends 
(2) the program ends 
(3) a block containing local variables ends (4) a delete operator is called

How destructors are different from a normal member function? 
- Destructors have same name as the class preceded by a tilde (~)
- Destructors don‟t take any argument and don‟t return anything.
