<t>C - Bit manipulation</t>
<p>
0.0 Write a function that converts a binary number to an unsigned int.
<ul><li>Prototype: unsigned int binary_to_uint(const char *b); where b is pointing to a string of 0 and 1 chars Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1 b is NULL</li></ul>
1.1 Write a function that prints the binary representation of a number.
<ul><li>Prototype: void print_binary(unsigned long int n); Format: see example You are not allowed to use arrays You are not allowed to use malloc You are not allowed to use the % or / operators</li></ul>
2. 10 Write a function that returns the value of a bit at a given index.
<ul>
<li>Prototype: int get_bit(unsigned long int n, unsigned int index);</li>
<li>where index is the index, starting from 0 of the bit you want to get</li>
<li>Returns: the value of the bit at index index or -1 if an error occured</li>
</ul>
3.11 Write a function that sets the value of a bit to 1 at a given index.
<ul>
<li>Prototype: int set_bit(unsigned long int *n, unsigned int index);</li>
<li>where index is the index, starting from 0 of the bit you want to set</li>
<li>Returns: 1 if it worked, or -1 if an error occurred</li>
</ul>
4.100 Write a function that sets the value of a bit to 0 at a given index.
<ul>
<li>Prototype: int clear_bit(unsigned long int *n, unsigned int index);</li>
<li>where index is the index, starting from 0 of the bit you want to set</li>
<li>Returns: 1 if it worked, or -1 if an error occurred</li>
</ul>
5.101 Write a function that returns the number of bits you would need to flip to get from one number to another.
<ul>
<li>Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);</li>
<li>You are not allowed to use the % or / operators</li>
<li>You are not allowed to use the % or / operators</li></ul>
6. Endianness; Write a function that checks the endianness.
<ul><li>Prototype: int get_endianness(void);</li>
<li>Returns: 0 if big endian, 1 if little endian</li>
<ul>
7. Crackme3; Find the password for this program.
<ul>
<li>Save the password in the file 101-password</li>
<li>Your file should contain the exact password, no new line, no extra space</li>