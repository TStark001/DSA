/*
?       WHAT IS RECURSION?
                In recursion we try to solve a bigger problem by finding
                out solution to smaller sub problems.We represent these 
                problem in the form of functions and these function calls
                itself to solve smaller sub problems.
!       PMI :- Principle of Mathematical Induction
            # Base case
            # assumption
            # selfwork
*       Working on Recursive function
            Syntax:-
                    methodname (N parameter) //! bigger/smaller problem based on paramenter
                    {
                        if(haltcondition){ //! base condition
                            return result; //! base condition result
                        }
                        return methodname(N parameter) //! smaller subproblem
                    }
!                Ternary Operator(?)
            A ternary operator evaluates the test condition and executes 
            an expression out of two based on the result of the condition.
*            Syntax :- condition ? expression1 : expression2;
?   How many total subset exist for a set of length n ?
Ans:- 2^n(2 raised to power n)
*/