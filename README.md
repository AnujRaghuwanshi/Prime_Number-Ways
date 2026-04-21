# Prime_Number_Ways
## This repository contains different methods to find or determine wheather a number is prime or not.
---

### Brute Force Method - O(n):
This is the simplest approach where you iterate through every integer from 2 up to n-1.
If n is divisible by any of these numbers, it is composite; otherwise, it is prime.
Because the loop can run up to times in the worst case (when n is prime), the complexity is linear, denoted as O(n).

---

#### Half Range Method - O(n/2):
An optimization where you only check for divisors up to O(n/2).
Since no number greater than n/2 (other than n itself) can be a factor of n, it is unnecessary to check beyond this point.
In Big O notation, constants are dropped, so this remains O(n) asymptotically, but it reduces actual execution time by half compared to the brute force method.

---

#### Square Root Method - O(√n):
The most efficient standard trial division method, where you only iterate up to √n
Factors always come in pairs (a*b = n)); if both factors were greater than √n, their product would exceed n. Therefore, at least one factor must be less than or equal to √n.
his method significantly reduces iterations, especially for large numbers.

---



