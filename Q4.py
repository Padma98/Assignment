"""
Author: Padma
Language used: Python 3
--------------------------------------------------------------------------------------------------
"""
#Problem Statement:
"""
Write a program that:
a) Reads from end user using suitable messages a integer k , where k represents count
of digits in a integer
b) Find the probability p1, that the k-digit number does NOT contain the digits 0 , 5 , 9
c) Print with suitable message the probability p1
d) Now consider digit set as only d = { 0 , 1 , 3 , 4 , 5 , 7 , 9 }
e) Find the probability p2, that the a k-digit number does NOT contain the digits 0 , 5 , 9
f) Print with suitable message the probability p2
g) Print what conclusion can be drawn with respect to p1 and p2
--------------------------------------------------------------------------------------------------






Global Variables:
k: Number of digits in a number to be formed.
nE: Number of possible permutations while forming a number that does not contain 0,5,9
nS: Number of possible permutations while forming a number with all the digits in a given set
p1: Probability of getting the numbers without 0,5 or 9
p2: Probability of getting the numbers without 0,5 or 9 when using the only the digits from the given set d = {0, 1, 3, 4, 5, 7, 9}

*****************************************************************************************************************************************
"""
k = int(input("Enter the number of digits, k: "))

#Set = {0,1,2,3,4,5,6,7,8,9}
nS = 9
#The highest place of the number should not contain 0
for i in range(k-1):
    nS = nS*10
nE = 1
for i in range(k):
    nE = nE*7
p1 = int(nE/nS*10000)/10000

#For d = {0, 1, 3, 4, 5, 7, 9}
nS = 6
#The highest place of the number should not contain 0
for i in range(k-1):
    nS = nS*7
nE = 1
for i in range(k):
    nE = nE*4
p2 = int(nE/nS*10000)/10000

print("Probability of",k,"digit number that does not contain 0,5,9 is p1:",p1)
print("Probability of",k,"digit number using the digits from the set d = {0, 1, 3, 4, 5, 7, 9} that does not contain 0,5,9 is p2:",p2)
print("")
print("Conclusion:")
print("1. The probabilities p1 & p2 decrerases with increase in the number of digits.")
print("2. Probability p2 is always greater than probability p1.")
"""
*****************************************************************************************************************************************







-----------------------------------------------------------------------------------------------------------------------------------------
"""
#Sample Output:
"""
Case 1:
    Enter the number of digits, k: 4
    Probability of 4 digit number that does not contain 0,5,9 is p1: 0.2667
    Probability of 4 digit number using the digits from the set d = {0, 1, 3, 4, 5, 7, 9} that does not contain 0,5,9 is p2: 0.1243
    
Case 2:
    Enter the number of digits, k: 7
    Probability of 7 digit number that does not contain 0,5,9 is p1: 0.0915
    Probability of 7 digit number using the digits from the set d = {0, 1, 3, 4, 5, 7, 9} that does not contain 0,5,9 is p2: 0.0232
    
Case 3:
    Enter the number of digits, k: 2
    Probability of 2 digit number that does not contain 0,5,9 is p1: 0.5444
    Probability of 2 digit number using the digits from the set d = {0, 1, 3, 4, 5, 7, 9} that does not contain 0,5,9 is p2: 0.3809
   
----------------------------------------------------------------------------------------------------------------------------------------------
"""
