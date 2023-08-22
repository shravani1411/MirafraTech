/*Note down the differences between Call by Value and Call by Reference and when to use what.*/

Call by Value Vs Call by Reference
1. CBV: When you send the value of a variable as an argument to a function, the variable is said to be sent by "Call by Value".
CBR: When you send the address of a variable as an argument, then it is said to be shared as "Call by Reference".

2. CBV: Since only value is sent, the value is stored in a different variable by the function, which means, it is a copy of the original variable.
CBR: Since address of the variable is sent, the address is stored in a pointer variable by the function.

3. CBV : Since a different copy of the called function variable is created, changes done by the function are limited to the copy variable.
CBR: Since address is given to the function, function can modify the address location value, using the pointer indirect reference.

4. CBV: local variables of a function cannot be accessed in called function,because of scope limitations.
CBR: function gets access to local variables of calling function,through their addresses.

5. CBV: Function can give only one output,using return statement.
CBR: Function can give multiple outputs, using output variable addresses

