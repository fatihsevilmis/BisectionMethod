# BisectionMethod

This program is prepared by fatihsevilmis.

We can find the root of the given function using the Bisection method. 
However, it should be noted that the Bisection method is specifically designed for finding roots within certain intervals. 
Therefore, you will need to initially specify an interval. In my C code, the function intervals are set between 0 and 1. 
You can change the interval values for your own function.

Given function:
y = 4.5x - 2cos(x)

Let's recall the steps for the Bisection method:

* Initially, an interval is chosen where the root of the function is located.
* The midpoint within the chosen interval is calculated.
* If the midpoint has reached a certain tolerance or a certain number of iterations has been reached, the found value is accepted as the root.
* Otherwise, the lower interval on the left or right side of the midpoint is selected (if the root is in the lower interval).
Iterations continue.

Below is an example in the C language that finds the root of this function using the Bisection method:

(!! This code does not work with C89 standards.)
