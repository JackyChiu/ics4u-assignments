# ics4u-assignments
Assingments for ICS4U at NHS

###Problem 1: Pattern Generator
Input file: pat.in 
Output file: pat.out

Write a program that repeatedly reads two numbers n and k and prints all bit patterns of length n with k ones in descending order (when the bit patterns are considered as binary numbers). You may assume that 30 >= n > 0, 8 > k >= 0, and n >= k. The first number in the input gives the number of pairs n and k. The numbers n and k are separated by a single space. Leading zeroes in a bit pattern should be included. See the example below. 


Sample input

    3
    2 1
    2 0
    4 2

Sample output

The bit patterns are

    10
    01

The bit patterns are

    00

The bit patterns are

    1100
    1010
    1001
    0110
    0101
    0011


###Problem 2: When in Rome...
If the Roman Empire had not fallen, then Rome would surely have discovered electricity and used electronic calculators; however, the Romans used Roman Numerals! Your task is to implement a simple Roman Calculator which accepts two Roman Numerals and outputs the sum in Roman Numerals. You may assume that numbers greater than 1000 will not occur in the input. Output numbers greater than 1000 are illegal and should generate the message CONCORDIA CUM VERITATE (In Harmony with Truth). 
The input consists of a number, indicating the number of test cases, followed by this many test cases. Each test case consists of a single line with two numbers in Roman Numerals separated by a + along with an = at the end. There are no separating spaces. 
For each test case the output is a copy of the input with the Roman Numeral that represents the sum. Outputs for different test cases are separated by a blank line. 
Roman Research
The Roman Numerals used by the Romans evolved over many years, and so there are some variations in the way they are written. We will use the following definitions: 
1.	The following symbols are used: I for 1, V for 5, X for 10, L for 50, C for 100, D for 500, and M for 1000. 
2.	Numbers are formed by writing symbols from 1. from left to right, as a sum, each time using the symbol for the largest possible value. The symbols M, C, X, or I may be used at most three times in succession. Only if this rule would be violated, you can use the following rule: 
•	When a single I immediately precedes a V or X, it is subtracted. When a single X immediately precedes an L or C, it is subtracted. When a single C immediately precedes a D or M, it is subtracted. 
For example: II = 2; IX = 9; CXIII = 113; LIV = 54; XXXVIII = 38; XCIX = 99. 

Sample input

    3
    VII+II=
    XXIX+X=
    M+I=

Sample output

    VII+II=IX
    XXIX+X=XXXIX
    M+I=CONCORDIA CUM VERITATE


Hint: there is one possible and simple algorithm for converting Integers to Romans:
Take a set {I, IV, V, IX, X, XL, L, XC, C, CD, D, CM, M}
To convert an Integer to Roman start subtracting the numbers from the set from largest to the smallest , collecting the numbers that can be subtracted, until your Integer becomes 0.
For example: to convert 67 to its Roman equivalent:

    67-50=17//collect L
    17-10=7//collect X
    7-5=2//collect V
    2-1=1//collect I
    1-1=0//collect I
    So 67=LXVII


###Problem#3: Aromatic Numbers

An aromatic number is a number of the form ARARAR…AR, where each A is an Arabic digit, and each R is a Roman numeral. Each pair AR contributes a value described below, and by adding or subtracting these values together we get the value of the entire aromatic
number.
An Arabic digit A can be 0,1,2,3,4,5,6,7,8 or 9. A Roman numeral R is one of the seven letters (I to M) as described in Problem#1.
The value of pair AR is A times the base value of R. Normally, you add up the values of the pairs to get the overall value. However, wherever there are consecutive symbols ARA’R’ with R’ having a strictly bigger base value than R, the value of pair AR must be subtracted from the total, instead of being added.
For example, the number 3M1D2C has the value 3*1000 + 1*500 + 2*100 = 3700 and 3X2I4X has the value 3*10 – 2*1 + 4*10 = 68

Write a program that computes the values of aromatic numbers.

Input Specification
The input is a valid aromatic number consisting of between 2 and 20 symbols.

Output Specification
The output is the decimal value of the given aromatic number.

Sample Input 1

    3M1D2C

Output for Sample Input 1

    3700

Sample Input 2

    2I3I2X9V1X
Output for Sample Input 1

    -16











###Problem 4: Word Search 
The word search puzzle below contains a secret message. To get this message, you have to find all the clue words in the puzzle (the words shown beside it) and circle them. Then you read any un-circled letters that remain from top left to bottom right to get the secret message. The clue words might appear horizontally, vertically, or diagonally. They might read forwards, backwards, downwards or upwards. Clue words can share any number of letters. Each clue word appears exactly once in the puzzle. 
The Puzzle 							 

The Clue Words
    ADDICTIVE 
    BAKING 
    BARS 
    BITTERSWEET 
    BROWNIES 
    CAKES 
    CANDY 
    CHIPS 
    CHOCOLATIERS 
    COCOA 
    CONFECTIONERY 
    COOKIES 
    CREAM PIE 
    CUPCAKE 
    DARK 
    DECADENT 
    DELICIOUS 
    DESSERT 
    DRINKS 
    FILLING 
    FONDUE 
    FOOD 
    FUDGE 
    ICE CREAM 
    ICING 
    INGREDIENT 
    MILK 
    MOUSSE 
    PUDDING 
    SEMISWEET 
    SUGAR 
    SWISS 
    SYRUP 
    TREAT 
    TRUFFLES 
    UNSWEETENED 
    WHITE


In this case, the secret message is “CHOCOLATE ORIGINATES FROM THE SEEDS OF THE THEOBROAMA CACAO TREE”. The locations of the words in the puzzle are shown on the next page. 
DATA31.txt (DATA32.txt for the second try) will contain 5 test cases. Each test case starts with a line containing two integers R and C separated by a space character. R and C represent the number of rows and columns in the board (1 ≤ R, C ≤ 30). This is followed by R lines, each containing C uppercase letters. This is the puzzle board. The next line contains an integer M representing the number of clue words (M < 100) and then the next M lines contain one clue word each. Clue words will be written in uppercase and will contain fewer than 100 characters, but they might contain spaces, apostrophes or other punctuation, all of which should be ignored when searching for the words on the board. 
Note that the sample input on the next page contains only a single test case, but the real data files will contain 5 test cases, one after another, with no blank lines in between. 
Sample Input 

    17 17 
    KLIMTSEINWORBCHOC 
    CGOLYNASEMISWEETT 
    EHNCSDENETEEWSNUO 
    RCIIOENIIGFILLING 
    SIOPKCLADNABFTESE 
    KFRNSAOFCEIOOMCTV 
    NRHEFDBAFTRSOEHEI 
    ICATAERTTUIGDDOGT 
    RORDSNCECCRONSCNC 
    DOWEFTRTEUTTUIOII 
    GKHTASPCIRPOHFLDD 
    NIIEWMRUEOICOTADD 
    IETESEPSRCNNAHTUA 
    CSESAESIIYDEBKIPO 
    ITIMBERLEUSAROEAM 
    AWFUDGECEARCAYRSO 
    SUGARDTESSUOMRSEE 
    37 
    ADDICTIVE 
    BAKING 
    BARS 
    BITTERSWEET 
    BROWNIES 
    CAKES 
    CANDY 
    CHIPS 
    CHOCOLATIERS 
    COCOA 
    CONFECTIONERY 
    COOKIES 
    CREAM PIE 
    CUPCAKE 
    DARK 
    DECADENT 
    DELICIOUS 
    DESSERT 
    DRINKS 
    FILLING 
    FONDUE 
    FOOD 
    FUDGE 
    ICE CREAM 
    ICING 
    INGREDIENT 
    MILK 
    MOUSSE 
    PUDDING 
    SEMISWEET 
    SUGAR 
    SWISS 
    SYRUP 
    TREAT 
    TRUFFLES 
    UNSWEETENED 
    WHITE
Sample Output 

    CHOCOLATEORIGINATESFROMTHESEEDSOFTHETHEOBROAMACACAOTREE 
Locations of the Words (Shown for Reference Only) 




