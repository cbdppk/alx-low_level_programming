va_list args;
va_start (args, a);
va_arg(args, char);
va_end(args);

int *const ptr = &value;
int another_value = 30;
ptr = &another_value;  // Error: assignment of read-only variable 'ptr'
*ptr = 20;             // OK

const int *const ptr 
