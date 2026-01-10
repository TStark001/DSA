/*
!                               STRING
        Strings are sequences of characters stored in a char array. Strings are used to store words and text.
@               Syntax :- stirng s = "Stark"

$                       BUILT-IN STRING FUNCTION
        1. s.puch_back('char') :- help to add one charcter in our string
        2. s.pop_back() :- help to remove one character from string from the last index.
        3. s1.append(s2) :- help to append(add) char or string to end or the string.
        4. s.size/length() :- give the size of string(can not include size of string)
        5. s.substr(idx) :- print from the particular idx to the end of string(idx) in continous order.
                                !OR
          s.substr(idx , len) :- kis index sa kis length tak
        6. to_string(int) :- it convert integer to string.
        7. sort(s.begin(),s.end()) :- this will arange alphabets in alphabetical order(ASCII value).
        8. stoi(built-in function) :- string to integer(convertion). 
        9. stoll :- sting to long long(convertion). 

        
!       ESCAPE CHARCTER(\) :-
                Escape characters in C++ are special sequences used to
                represent characters that are difficult or impossible to type directly in source code.
        Ex :- is we want to print stark with double quotes then we use escape charcter
*                string s = "\"stark\"" ---> like this
%       getline() :-
           getline() is an in-built function that allows accepting and reading single
           and multiple line strings from the input stream.
           In C++, the cin object also allows input from the user, but not multi-word or multi-line input.
           That’s where the getline() function comes in handy.
        Some primary applications include:- 1. Taking full name
                                            2. Taking details such as address and bio
                                            3. Asking for any long-form or multi-line input
^       For each Loop:-
        Foreach loop is used to iterate over the elements of a container (array, vectors, etc)
        quickly without performing initialization, testing, and increment/decrement.
        The working of foreach loops is to do something for every element rather than doing something n times.

!       Syntax:
                for (data_type  variable_name : container_name) {
                    operations using variable_name
                }
        \t :- backslash t --> 4 space
*/