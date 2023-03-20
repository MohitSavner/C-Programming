**Bit Manipulation:**
> Basics Informations\
> Easy questions\
> Medium questions\
> Hard questions


**Basics Informations**\
![image](https://user-images.githubusercontent.com/17423766/226278105-d51c6493-6413-4725-9dcb-4b75861c6643.png)

**Useful Tricks for efficient coding**

	1. Create a number that has only set bit as k-th bit --> 1 << (k-1)
	
	2. Check whether k-th bit is set or not -->
        if(n & (1<< (k - 1)))
        cout<< "SET";
	
	3. Set k-th bit to 1 --> n | (1 << (k - 1))
	
	4. Clearing the k-th bit --> n & ~(1 << (k - 1))
	
	5. Toggling the k-th bit --> n ^ (1 << (k – 1))
	
	6. Check whether n is power of 2 or not
        if(x && (!( x&(x-1) ))
        cout<<"Power of 2";
	
	7. (x<<y) is equivalent to multiplying x with 2^y (2 raised to power y).
	
	8. (x>>y) is equivalent to dividing x with 2^y.
	
	9. Swapping two numbers
        x = x ^ y
        y = x ^ y
        x = x ^ y
	
	10. Average of two numbers --> (x+y) >> 1
	
	11. Convert character ch from Upper to Lower case --> ch = ch | ' '
	
	12. Convert character ch from Lower to Upper case -->ch = ch & '_'
	
	13. Check if n is odd or even -->
        if(n & 1)
        cout<<"odd"elsecout<<"even";
 ********************************************
 
 **Some more points**
 1) Bitwise AND(&)\
    returns bit values of 1 for positions where both\
    numbers had a one, and bit values of 0 where both numbers did not have one.

2)  Bitwise OR(|)\
    returns bit values of 1 for positions where either bit\
    or both bits are one, the result of 0 only happens when both bits are 0.

3)  Bitwise XOR(^)\
    returns bit values of 1 for positions\
    where both bits are different; if they are the same then the result is 0.

4)  Bitwise Left-shift(<<)\
    The bitwise left shift moves all bits in the number to the left and fills vacated bit positions with 0.

5)  Bitwise Right-Shift(>>)\
    The bitwise right shift moves all bits in the number to the right.\
    NOTE: Where the left shift filled the vacated positions with 0, a right\
    shift will do the same only when the value is unsigned. If the value is signed then a right shift will fill the vacated bit positions with the sign bit or 0, whichever one is implementation-defined. So the best option is to never right shift signed value

6)  Bitwise Complement(~)\
    The bitwise complement inverts the bits in a single binary number.

7)  Checking Whether K-th Bit is Set or Not\
    n & (1 ≪ K -1). If the expression is true then we can say the Kth bit is set

8)  Setting K-th Bit\
    n | 1 ≪ (K – 1)

9)  Clearing K-th Bit\ 
    n & ~(1 ≪ K – 1)

10) Toggling K-th Bit\
    n ^(1 ≪ K – 1)

11) Toggling Rightmost One Bit\
    n & n – 1

12) Isolating Rightmost Zero Bit\
    ~n & n + 1

13) Checking Whether Number is Power of 2 or Not\
    if(n & n – 1 == 0)

14) Multiplying Number by Power of 2\
    To multiply the number with 2K we can use the expression: n ≪ K

15) Dividing Number by Power of 2\
    Divide the number with 2K we can use the expression: n ≫ K

16) Performing Average without Division
    We can use mid = (low + high) >> 1. Note that using (low + high) / 2 for midpoint calculations
    won’t work correctly when integer overflow becomes an issue. We can use bit shifting and also
    overcome a possible overflow issue: low + ((high – low)/ 2) and the bit shifting operation for
    this is low + ((high – low) >> 1)

