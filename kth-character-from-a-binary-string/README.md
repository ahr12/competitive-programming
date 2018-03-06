# find-kth-element

```
Problem : 
```
A "0/1 string" is a string in which every character is either 0 or 1. There are two operations that can be performed on a 0/1 string

switch: Every 0 becomes 1 and every 1 becomes 0. For example, "100" becomes "011".
reverse: The string is reversed. For example, "100" becomes "001".
Consider this infinite sequence of 0/1 strings:

```
S0 = ""

S1 = "0"

S2 = "001"

S3 = "0010011"

S4 = "001001100011011"

...

SN = SN-1 + "0" + switch(reverse(SN-1)).
```

You need to figure out the Kth character of Sgoogol, where googol = 10^100.


```
Sample

input  : 4
output : 0

input  : 11
output : 1
```