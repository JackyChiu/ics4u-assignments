# ics4u-assignments
Assingments for ICS4U at NHS

###Problem 1: Dice
Problem Description
Antonia and David are playing a game. Each player starts with 100 points.
The game uses standard six-sided dice and is played in rounds. During one round, each player rolls one die. The player with the lower roll loses the number of points shown on the higher die. If both players roll the same number, no points are lost by either player.
Write a program to determine the final scores.

Input Specification
The first line of input contains the integer n (1 ≤ n ≤ 15), which is the number of rounds that will be played. On each of the next n lines, will be two integers: the roll of Antonia for that round, followed by a space, followed by the roll of David for that round. Each roll will be an integer between 1 and 6 (inclusive).
Output Specification
The output will consist of two lines. On the first line, output the number of points that Antonia has after all rounds have been played. On the second line, output the number of points that David has after all rounds have been played.

Sample Input

    4
    5 6
    6 6
    4 3
    5 2

Output for Sample Input

    94
    91

Explanation of Output for Sample Input
After the first round, David wins, so Antonia loses 6 points. After the second round, there is a tie and no points are lost. After the third round, Antonia wins, so David loses 4 points. After the fourth round, Antonia wins, so David loses 5 points. In total, Antonia has lost 6 points and David has lost 9 points.





###Problem 2: Federal Voting Age
Problem Description
For the big election on February 27, 2007, the government has commissioned an electronic voting system, and you have been hired as a sub-subcontractor for this very grand programming project.
Your task is to write the system that determines whether a given person is old enough to vote. The voting age is 18, so given someone’s birthday, you must determine whether that person will be 18 years of age on the day of the election.
Input Specification
The input will consist of a number n (1<n <100) on a single line, indicating the number of birthdays to evaluate. Then, each of the following n lines, will be of the form y m d, where y is the year of a potential voter’s birth (0 < y < 2007), m (1 < m < 12) is the month of birth, and d (1 < d <31) is the day. It is assured that each birthday is a correct and valid date.
Output Specification
For each date in the input, output a line with either “Yes” if the voter is eligible to vote, or “No” otherwise.

Sample Input

    5
    1933 10 29
    1989 2 28
    1961 11 23
    1999 12 31
    1989 2 27


Output for Sample Input

    Yes
    No
    Yes
    No
    Yes

###Problem 3: Don’t pass me the ball!
Problem Description
A CCC soccer game operates under slightly different soccer rules. A goal is only counted if the 4 players, in order, who touched the ball prior to the goal have jersey numbers that are in strictly  increasing numeric order with the highest number being the goal scorer.
Players have jerseys numbered from 1 to 99 (and each jersey number is worn by exactly one player).
Given a jersey number of the goal scorer, indicate how many possible combinations of players can produce a valid goal.

Input Specification
The input will be the positive integer J (1 < J < 99), which is the jersey number of the goal
scorer.
Output Specification
The output will be one line containing the number of possible scoring combinations that could have J as the goal scoring jersey number.

Sample Input 1

    4
Output for Sample Input 1

    1

Sample Input 2

    2
Output for Sample Input 2

    0

Sample Input 3

    90
Output for Sample Input 3

    113564


###Problem 4: Cool Numbers
Problem Description
Eric likes interesting numbers like 64. It turns out that 64 is both a square and a cube, since 64 = 82
and 64 = 43 . Eric calls these numbers cool. Write a program that helps Eric figure out how many integers in a given range are cool.
Input Description
On the first line of input, you are given an integer a such that a > 1 and a < 108. On the second line of input, you are given an integer b such that a < b and b < 108.
Output Description
The output should be the number of cool numbers in the range a to b (inclusively: that is, a and b would count as cool numbers in the range if they were actually cool).

Sample Input 1
1
100
Output for Sample Input 1
2

Sample Input 2
100
1000
Output for Sample Input 2
1

Problem 5: Nasty Numbers
Input file: nasty.txt Output file: nastyout.txt
We will call a positive integer "Nasty" if it has at least two pairs of positive integer factors such
that the difference of one pair equals the sum of the other pair.
For example, 6 is nasty since 6 x 1 = 6, 2 x 3 = 6, 6 - 1 = 2 + 3; and 24 is also nasty since 12 - 2 = 6 + 4. 
Write a program which accepts as input a list of positive integers and determine if each one is
nasty or not.

Input Specification
The input file is a list of positive integers, one per line. The first number in the list is the number of integers to be tested, and is at most 20. The integers to be tested are all less than 32001.

Output Specification
The output file should contain one line for each test value. Each line is to contain the test value
and whether* it is nasty or not.

Sample Input 1
4
6
24
30420
10078

Sample Output
6 is nasty
24 is nasty
30420 is nasty
10078 is not nasty

Sample Input 2
7
6
24
30420
25
216
1226
32000

Correct Output
6 is nasty
24 is nasty
30420 is nasty
25 is not nasty
216 is nasty
1226 is not nasty
32000 is not nasty




Problem 6: Ramanujan Cubes
The mathematician Srinivasa Ramanujan, no doubt inspired by the Pythagorean equation C2= A2 + B2, examined the equation X3 = A3 + B3 + C3 and developed several interesting
identities based on it.
6 is the smallest positive integer such that its cube is the sum of 3 other cubes of integers:
63 = 53 + 43 + 33 . It is interesting to note that most numbers have this property.
It is your task to find the number of integers, x, that have the property, that it can be
written as the sum of 3 positive integral cubes, in the range between two given integers a
and b, including the limits a and b. 
Data file contains 10 lines: 5 pairs on lines, each containing a positive integer. The first integer of the pair is a, the lower limit of the range and the second integer is b, the upper limit of the pair. All input data are between 1 and 999.

Sample Input:
1 34
56 77
100 200
150 600
900 999

Sample Output:
There are 12 numbers between 1 and 34 whose cubes are Ramanujan Cubes
There are 13 numbers between 56 and 77 whose cubes are Ramanujan Cubes
There are 73 numbers between 100 and 200 whose cubes are Ramanujan Cubes
There are 367 numbers between 150 and 600 whose cubes are Ramanujan Cubes
There are 90 numbers between 900 and 999 whose cubes are Ramanujan Cubes

Problem 7 From 1987 to 2013
Problem Description
You might be surprised to know that 2013 is the first year since 1987 with distinct digits. The years 2014, 2015, 2016, 2017, 2018, 2019 each have distinct digits. 2012 does not have distinct digits, since the digit 2 is repeated.
Given a year, what is the next year with distinct digits?
Input Specification
The input consists of one integer Y (0 <Y <10000), representing the starting year.
Output Specification
The output will be the single integer D, which is the next year after Y with distinct digits.
Sample Input 1
1987
Output for Sample Input 1
2013

Sample Input 2
999
Output for Sample Input 2
1023
Problem 7: The Multiplication Game
Stan and Ollie play the game of multiplication by multiplying an integer p by one of the numbers 2 to 9. Stan always starts with p = 1, does his multiplication, then Ollie multiplies the number, then Stan, and so on. Before a game starts, they draw an integer 1 < n < 4, 294, 967, 295 and the winner is whoever reaches pn first. 
Input 
Each input line contains a single integer n. 
Output 
For each line of input, output one line - either 
Stan wins.
or 
Ollie wins.
assuming that both of them play perfectly. 
Sample Input 
162
17
34012226
Sample Output 
Stan wins.
Ollie wins.
Stan wins.


Part 2 – Recursive functions


1. Write a program that generates first n terms of the recursive sequences:
a) t1 = 5;  tn =  tn-1 + 1

b) t1 = 80;  tn =  tn-1 / 2

c)t1 = 3, t2 = 5;  tn =  tn-2 +  tn-1


2. Write a recursive function to find the sum of the digits of a number

3. Write a recursive function to check if number is a prime number or not

4. Write a C++ program that reads in 2 positive integer numbers. 
a) Write  a function that recursively multiplies the two numbers
b) Write  a function that recursively divides the two numbers
c) Call a function called gcd_recursive that finds the greatest common divisor for the two numbers recursively. The GCD of x and y is defined recursively as follows: If y is equal to 0, then gcd(x, y) is x; otherwise gcd(x, y) is gcd(y, x%y), where % is the modulus operator.
d) Call a function called lcm_recursive that finds the least common multiple for the two numbers. 


5. Write the following recursive functions:
a)	function recursive_decimal_to_binary that converts a given decimal number to its binary equivalent
b)	function recursive_binary_to_decimal that converts a given binary number to its decimal equivalent
c)	function recursive_decimal_to_octal that converts a given decimal number to its octal equivalent
d)	function recursive_octal_to_decimal that converts a given octal number to its decimal equivalent











Problem 1. Fractorials
Marcia just learned about factorials in school. She understood that they are the product of all the integers between 1 and the number itself. For example, factorial(5) is 1x2x3x4x5 = 120 and factorial (10)= 1x2x3x4x5x6x7x8x9x10 = 3,628,800 
She decided that these numbers are too big, and wasteful. So she invented fractorials. They are the smallest possible numbers that can be evenly divided by all the whole numbers from 1 to itself. So for example fractorial (5) = 60, since 60/1, 60/2, 60/3, 60/4, 60/5 are all whole numbers, something which is not true for any smaller number. Fractorial (10) incidentally is 2520. Something much easier to manage than 3,628,800!!! 
The problem is, that they are not so easy to construct. Please help her, by writing a program that will calculate fractorials: 
Sample Input: 
18
4
17
22
12
1
Sample Output: 
Fractorial (4) = 12
Fractorial (17) = 12252240
Fractorial (22) = 232792560
Fractorial (12) = 27720
Fractorial (1) = 1

Problem 2.  Fibonacci’s Rabbits
The well known Fibonacci sequence 1,1,2,3,5,8,13,21,… is based on the proposition that, given that any pair of rabbits will produce a new pair of rabbits every month for ever, except in the first month after their birth. The sequence gives the number of pairs of rabbits that there would be in any given month. 
That is:
starting with 1 newborn pair in month one, 
which would still be 1 pair of rabbits in month two, 
which would be 2 pairs in month 3 (since this pair would produce a new pair in month 3), 
there would be 3 pairs in month 4 (since the first pair would produce a new pair) 
there would be 5 pairs in month 5 (since the first two pairs would produce a new pair… etc.) 
But suppose, that, instead of living forever, and reproducing endlessly, each pair of rabbits would only live for 5 months, and therefore only produce 3 new pairs before they died. The sequence then would run: 1,1,2,3,5,6,10,14,… 
And if each pair would live for only 3 months, the sequence would become: 1,1,2,1,2,1,2,… 
The input contains 5 lines of two positive integers, A and B. The integer A represents the number of months each pair of rabbits lives, 2 < A < 101. The integer B represents the number of months that have passed when the count of the number of pairs of rabbits occurs. A and B will have values such that the number of pairs of rabbits will never exceed 999 999 999. 
Output should be on a cleared screen or window, and will state the number of rabbit pairs in each of the 5



















Arrays
Question 1:
a) Write a function init_array that initializes an array of length 10 to random numbers between 1 and 50

b) Write a function printArray to print the array

c) Write a function printArrayRecursive to print the array recursively

d)) Write a function sum that finds the sum of the elements of the array.

e) Write a function recursive_sum that finds the sum of the elements of the array.

f) Write a function largest that finds the largest element in the array

g) Write a function recuursive_largest that finds the largest element in the array recursively

Problem 1: Sluggers 
Two important stats in baseball are the team batting average and the team slugging average. Batting average is defined as the total number of hits (this includes 1 base hits, 2 base hits, 3 base hits and home runs combined) divided by the total number of times at bat (“at bats”) for all players on the team. The team slugging average is defined using the following equation: 


 
Where A is the number of 1 base hits, B is 2 base hits, C is 3 base hits, D is home runs, and E is the number of at bats for all players on the team. Both slugging and batting averages are always presented as decimals rounded to 3 places, leaving off the leading 0 (in theory batting averages can be as high as 1.000, and slugging averages as high as 4.000 but in practice they are both usually well below 1). 
DATA11.txt (DATA12.txt for the second try) contains the raw data on the top 10 teams during a regular season of Major League Baseball. The first line is the season name, followed by 10 lines for each of the top 10 teams. Each of these lines starts with a team name (single word) followed by 7 integers: Games Played, At Bats, Runs, Hits (total), two-base hits, three-base hits, and home runs. One space character separates each item on each line. 

Sample Input 
2011 Regular Season 
Boston 162 5710 875 1600 352 35 203 
NY_Yankees 162 5518 867 1452 267 33 222 
Texas 162 5659 855 1599 310 32 210 
Detroit 162 5563 787 1540 297 34 169 
St.Louis 162 5532 762 1513 308 22 162 
Toronto 162 5559 743 1384 285 34 186 
Cincinnati 162 5612 735 1438 264 19 183 
Colorado 162 5544 735 1429 274 40 163 
Arizona 162 5421 731 1357 293 37 172 
Kansas_City 162 5672 730 1560 325 41 129 


Sample Output 
2011 Regular Season 
==================== 
Boston: .280 .461 
NY_Yankees: .263 .444 
Texas: .283 .460 
Detroit: .277 .434 
St.Louis: .273 .425 
Toronto: .249 .413 
Cincinnati: .256 .408 
Colorado: .258 .410 
Arizona: .250 .413 
Kansas_City: .275 .415 
==================== 
Big 10 Av: .267 .428 

To generate decimal places you will need the following new lines
#include<iomanip> //iomanip library needed

	double distance ;
	cin>>distance;
	cout << setprecision(3)<<setiosflags(ios::fixed|ios::showpoint)<<distance/3<<endl;//gives 3 decimal places 
	

Problem 2. Babbling Brooks
A series of streams run down the side of a mountain. The mountainside is very rocky so the streams split and rejoin many times. At the foot of the mountain, several streams emerge as rivers. Your job is to compute how much water flows in each river. 
At any given elevation there are n streams, labelled 1 to n from left-to-right. As we proceed down the mountainside, one of the streams may split into a left fork and a right fork, increasing the total number of streams by 1, or two streams may rejoin, reducing the total number of streams by 1. After a split or a rejoining occurs, the streams are renumbered consecutively from left-to-right. There is always at least one stream and there are never more than 100 streams. 
The first line of input contains n, the initial number of streams at some high altitude. The next n lines give the flow in each of the streams from left-to-right. Proceeding down the mountainside, several split or rejoin locations are encountered. For each split location, there will be three lines of input; 
a line containing 99 (to indicate a split) 
a line containing the number of the stream that is split 
a line containing a number between 0 and 100, the percentage of flow from the split stream that flows to the left fork. (The rest flows to the right fork). 
For each join location, there will be two lines of input; 
a line containing 88 (to indicate a join) 
a line containing the number of the stream that is rejoined with the stream to its right 
The flow from both joined streams is combined. After the last split or join location will be: 
a single line containing 77 (to indicate end of input) 
Your job is to determine how many streams emerge at the foot of the mountain and what the flow is in each. Your output is a sequence of real numbers, rounded to the nearest integer, giving the flow in rivers 1 through n. 
Sample Input (Input file : brooks.in)
3 
10 
20 
30 
99 
1 
50 
88 
3 
88 
2 
77 
Output for Sample Input (Output file : brooks.out)
5 55 

Problem 3: Multiple Choice
Problem Description
Your teacher likes to give multiple choice tests. One benefit of giving these tests is that they are easy to mark, given an answer key. The other benefit is that students believe they have a one-in-five chance of getting the correct answer, assuming the multiple choice possibilities are A,B,C,D or E.
Write a program that your teacher can use to grade one multiple choice test.
Input Specification 
The input will contain the number N (0 < N < 10000) followed by 2N lines. The 2N lines are composed of N lines of student responses (with one of A,B,C,D or E on each line), followed by N lines of correct answers (with one of A,B,C,D or E on each line), in the same order as the student answered the questions (that is, if line i is the student response, then line N +i contains the correct answer to that question).
Output Specification
Output the integer C (0 ≤ C ≤  N) which corresponds to the number of questions the student answered correctly.
Sample Input 1
3
A
B
C
A
C
B
Output for Sample Input 1
1
Sample Input 2
3
A
A
A
A
B
A
Output for Sample Input 2
2




Problem 4: Absolutely Acidic
Problem Description
You are gathering readings of acidity level in a very long river in order to determine the health of the river. You have placed N sensors (2 ≤ N ≤  2000000) in the river, and each sensor gives an integer reading R (1 ≤ R ≤ 1000). For the purposes of your research, you would like to know the frequency of each reading, and find the absolute difference between the two most frequent readings.
If there are more than two readings that have the highest frequency, the difference computed should be the largest such absolute difference between two readings with this frequency. If there is only one reading with the largest frequency, but more than one reading with the second largest frequency, the difference computed should be the largest absolute difference between the most frequently occurring reading and any of the readings which occur with second-highest frequency.
Input Specification
The first line of input will be the integer N (2 ≤ N ≤  2000000), the number of sensors. The next N lines each contain the reading for that sensor, which is an integer R (1 ≤ R ≤ 1000). You should assume that there are at least two different readings in the input.
Output Specification
Output the positive integer value representing the absolute difference between the two most frequently occurring readings, subject to the tie-breaking rules outlined above.
Sample Input 1
5
1
1
1
4
3
Output for Sample Input 1
3
Sample Input 2
4
10
6
1
8
Output for Sample Input 2
9

Problem 5 : Blood Distribution
Problem Description
At the Canadian Cardiac Centre there are four types of blood available: O, A, B, and AB. Each of these types of blood has an Rh factor, which is either “positive” or “negative”. There are many patients who each require 1 unit of blood. Each patient’s blood type determines the type of blood s/he may receive:
- Each Type O patient requires Type O blood.
- Each Type A patient may receive blood of Type A or Type O.
- Each Type B patient may receive blood of Type B or Type O.
- The Type AB patients may receive blood of any type.
Patients who have Rh-negative blood can accept Rh-negative blood only, but patients with Rhpositive blood can accept either Rh-positive or Rh-negative types of blood.

We want as many patients as possible to receive a unit of blood. What is the maximum number of patients that can receive blood?
Input Specification
The first line of input contains 8 integers: the number of units of blood of Type O negative, O positive, A negative, A positive, B negative, B positive, AB negative and AB positive. This is followed by a line containing eight numbers: the number of patients whose blood type is O negative, O positive, A negative, A positive, B negative, B positive, and AB negative and AB positive. Each of these integers will be at least 0 and less than 107.
Output Specification
The output of your program should be a single number: the maximum number of patients that can receive blood.
Sample Input
5 5 3 1 2 11 5 12
2 4 9 2 3 9 7 3
Output for Sample Input
33
An Explanation
 2 Type O- patients receive Type O- blood
 4 Type O+ patients receive Type O+ blood
 3 Type A- patients receive Type A- blood
 3 Type A- patients receive Type 0- blood
 1 Type A+ patients receive Type A+ blood
 1 Type A+ patients receive Type O+ blood
 2 Type B- patients receive Type B- blood
 9 Type B+ patients receive Type B+ blood
 5 Type AB- patient receives Type AB- blood
 3 Type AB+ patients receive Type AB+ blood
Note: At least 30% of the test cases for this problem will have at most 1000 units of each type of blood.


Problem 6 : Switch
Problem Description
You are walking by a row of K (0 ≤ K≤   25) lights, some of which are on and some of which are off. In this initial configuration, there is no consecutive sequence of four lights that are on. Whenever four or more consecutive lights are on, the lights in that consecutive block will turn off. You can only turn on lights that are off.
What is the minimum number of lights you need to turn on in order to end up with all K lights off?

Input Description
The first line of input will consist of the integer K, indicating the number of lights. Each of the next K lines will have either the integer 0 (to represent a light that is off) or the integer 1 (to represent a light that is on).
Output Specification
Your program should output the minimum number of lights that must be turned on in order to have all K lights be off.
Sample Input 1
5
1
1
0
1
1
Output for Sample Input 1
1
Explanation of Sample 1
Notice that turning on the third light will create five consecutive lights that are on, which will in turn cause all of these five lights to be off.
Note: At least 30% of the test cases will have K ≤ 10.





2D Arrays
Question 1
a)	Write a function that generates a two dimensional array with 5 rows and 5 columns of random numbers from 1 to 100 
b)	Write a function that prints the array 
c)	Write a function that prints the array recursively
d)	Write a function that prints only the elements on the main diagonal
e)	Write a function that finds the sum of the elements of the array
f)	Write a recursive function that finds the sum of the elements of the array
g)	Write a function that finds the sum of any given row
h)	Write a function that finds the row with the largest sum

Problem 1 : Boring Business
Problem Description
Boring is a type of drilling, specifically, the drilling of a tunnel, well, or hole in the earth. With some recent events, such as the Deepwater Horizon oil spill and the rescue of Chilean miners, the public became aware of the sophistication of the current boring technology. Using the technique known as geosteering, drill operators can drill wells vertically, horizontally, or even on a slant angle.
A well plan is prepared before drilling, which specifies a sequence of lines, representing a geometrical shape of the future well. However, as new information becomes available during drilling, the model can be updated and the well plan modified.  Your task is to write a program that verifies validity of a well plan by verifying that the borehole will not intersect itself. A two-dimensional well plan is used to represent a vertical cross-section of the borehole, and this well plan includes some drilling that has occurred starting at (0, -1) and
moving to (-1, -5). You will encode in your program the current well plan shown in the figure below:

 



Input Specification
The input consists of a sequence of drilling command pairs. A drilling command pair begins with one of four direction indicators (d for down, u for up, l for left, and r for right) followed by a positive length. There is an additional drilling command indicated by q (quit) followed by any integer, which indicates the program should stop execution. You can assume that the input is such that the drill point will not:
- rise above the ground, nor  
- be more than 200 units below ground, nor
- be more than 200 units to the left of the original starting point, nor
- be more than 200 units to the right of the original starting point

Output Specification
The program should continue to monitor drilling assuming that the well shown in the figure has already been made. As we can see (􀀀1;􀀀5) is the starting position for your program. After each command, the program must output one line with the coordinates of the new position of the drill, and one of the two comments safe, if there has been no intersection with a previous position or
DANGER if there has been an intersection with a previous borehole location. After detecting and reporting a self-intersection, your program must stop.
Sample Input 1
l 2
d 2
r 1
q 0
Output for Sample Input 1
-3 -5 safe
-3 -7 safe
-2 -7 safe


Sample Input 2
r 2
d 10
r 4
Output for Sample Input 2
1 -5 safe
1 -15 DANGER





Problem 2: Knight Hop
Problem Description
Below is an 8 by 8 chessboard on which we will designate square locations using the ordered pairs as indicated. For example, notice that piece A is at position (2, 2) and piece B is at position (4, 3). 

 




A knight is a special game piece that can leap over other pieces, moving in the “L” pattern. Specifically, in the diagram below, K represents the knight’s starting position and the numbers 1 through 8 represent possible places the knight may move to.

 

Your program will read the starting location of the knight and output the smallest number of jumps or moves needed to arrive at a location specified in the second input.

Input Specification
Your program will read four integers, where each integer is in the range 1…8. The first two integers represent the starting position of the knight. The second two integers represent the final position of the knight.

Output Specification
Your program should output the minimum (non-negative integer) number of moves required to move the knight from the starting position to the final position. Note that the knight is not allowed to move off the board during the sequence of moves.

Sample Input 1
2 1
3 3
Output for Sample Input 1
1

Sample Input 2
4 2
7 5
Output for
2



Problem 3. Floor Plan
The floor plan of a house shows rooms separated by walls. This floor plan can be transferred to a grid using the character “I” for walls and “.” for room space. Doorways are not shown. Each “I” or “.” character occupies one square metre.
In this diagram there are six rooms.
You have been given the floor plan of a house and a supply of hardwood flooring. You are to determine how many rooms will have the flooring installed if you start installing the floor in the largest room first and move  to the next largest room, and so on. You may not skip over any room, and you must stop when you do not have enough wood for the next room. Output the number of rooms that can have hardwood installed, and how many square metres of flooring are left over.
No room will be larger than 64 square metres.
The first line of the data file contains the number of square metres of flooring you have. The second line in the file contains an integer r from 1 – 25 that represents the number of rows in the grid. The third line contains an integer c from 1 – 25 that represents the number of columns in the grid. The remaining r lines contain c characters of grid data.
Sample Input 1
105
14
16
IIIIIIIIIIIIIIII
I......I.......I
I......III.....I
I........I.....I
I........IIIIIII
IIIIIIIIII.....I
I.I......I.....I
III..III.I.....I
I....I.IIIII...I
I....I.....III.I
I....I.......I.I
I....I.....III.I
I....I.....I...I
IIIIIIIIIIIIIIII
Output for Sample Input 1
4 rooms, 1 square metre(s) left over
Sample Input 2
13
2
3
.I.
.I.
Output for Sample Input 2
2 rooms, 9 square metre(s) left over

Problem 4: Alice Through the Looking Glass
Problem Description
Alice is looking at a crystal through a microscope. Alice’s microscope has the interesting feature that it can superimpose grid lines over the image that she is looking at.
At level 1 of magnification, Alice sees the image as follows:
Notice that at level 1, there is a 5  by 5 grid superimposed over the image.
However, as Alice increases the magnification, the leaf pattern becomes more intricate.
At level 2 of the magnification, Alice sees the image with a 25 _ 25 grid, and notices that three of the four larger squares in the original image have the small four square pattern on top. In fact, for this particular crystal, this self-similarity repeats for each magnification level.
Given that Alice’s microscope has up to 13 levels of magnification, she would like to try to quantify the detail of each grid cell at every one of these magnification levels.
Specifically, since there is a 5m  by  5m  grid at magnification level m, Alice will call the bottom-left corner grid cell (0; 0), the bottom-right grid cell (5m - 1; 0), the top-left grid cell (0; 5m  - 1), and the top-right grid cell (5m  - 1; 5m  - 1).
Given an integer magnification level (1 ≤ m ≤ 13) and a grid position (x; y) (where 0 ≤ x < 5mand 0 ≤ y < 5m), Alice would like to know if her crystal will fill that grid cell, or if that grid cell will be empty space.

Input Specification
The first line of input will be T (0 < T ≤ 10) which is the number of test cases. On each of
the next T lines there will be three integers: m, the magnification level, followed by x and y, the position of the grid cell that Alice wishes to examine.

Output Specification
The output will be T lines. Each line of output will either be empty, if the specified grid cell is empty, or crystal if that grid cell contains crystal.
Sample Input
4
1 1 1
1 1 0
1 2 1
2 8 5
Output for Sample Input
empty
crystal
crystal
crystal
Note: At least 40% of the test cases will have m ≤ 4.




