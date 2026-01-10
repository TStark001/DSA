/*
        Pointer :- A pointer is a special variable that stores the memory address
                   of another variable or data structure.
!       Syntax :- data_type *poniter_name
        STORING THE ADDRESS OF AN OBJECT IN A POINTER
            address of object(&) :- if we want to access the memory bucket
                                    we can use address of operator
!       Dereference opertor(*) :-
        It is used to access the value stored at the memory location pointed by the pointer.
                        Ex :- (cout<<ptr;) ---> this will give the address location of variable.
                              (cout<<*ptr;) ---> this will give the value stored pointed by the pointer.
?       Pointer Arithemetic :-
                        1. Increament
                        2. Decreament (both are different from the integer arithemetic)
                # Increament :- here increament of a value refers to shift in
                                memory location that pointer is pointing to.
                                shift is dependent on size of the type of variable.
                # Decreament :- here decreament of a value refers to shift in
                                memory location that pointer is pointing to.
                                shift is dependent on size of the type of variable.
!       Pointer As Array
                array --> name of array --> address of 0th index
*                                     TYPE OF POINTERS
                        1. Wild Pointers
                        2. Null Pointers
                        3. Dangling Pointers
                        4. Void Pointers
        1. Wild Pointers :- A wild pointers is a type of pointer where
                            the user declare the pointer but not initialise it.
                            Due to this it end's up pointing to some random memory
                            locations.
                         #. Due to we might get undefined behaviour and crashes.
                            In some cases we might get segmentation fault.
        2. Null Pointers :- If we want to have a pointer variable , which is just
                            declared but will get address later to store.We use
                            Null pointer.
                         #. 0 is mostly a special reserved memory address in many OS.
                         #. Runtime error mayget occur on dereferencing null Pointer.
        3. Dangling Pointers :- It is type of pointers that point to a memory location
                                that is not valid.
        4. Void Pointers :- There are special type of pointer that can point to any
                            datatype value.
                            #. void pointer can not be dereference.

*/