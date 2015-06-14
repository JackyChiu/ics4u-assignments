#Summative Option 1

###1. Write a class Calendar that given a month and a year, outputs a calendar for that month. The following output should give the idea. 

    Enter month (1 - 12), and year (>= 1900). 
    3 2011 

    Su Mo Tu We Th Fr Sa 
    1  2  3  4  5  
    6  7  8  9  10 11 12 
    13 14 15 16 17 18 19 
    20 21 22 23 24 25 26 
    27 28 29 30 31 

You will need the following functions: 

The function **isLeap** that determines whether or not a year is a leap year. 
The general rule is that a year is a leap year if it is divisible by 4. There is an exception to the rule (years which are divisible by 100 are NOT usually leap years) and an exception to the exception (years which are divisible by 400 are leap years). 

The function **daysInMonth** that determines the number of days in a given month.
When the month is February your function should make use of function isLeap in deciding how many days to return.

The function **daysSinceJan1** that, given a date (day, month, and, year) returns the number of preceding days in the same year. Your function should return 0 if the date is January 1st, 1 if the date is January 2nd, and so on. Basically it has to add up all of the days in the preceding months and then toss in the preceding days in the same month. We are going to take January 1st 1900 as the "start of time". 

The function **daysInPreviousYears** that, given a year, returns the total number of days in all of the preceding years. Your function should return 0 if the year is 1900 (as there are no previous years), 365 if the year is 1901 (recall that 1900 was not a leap year), and so on. 

The function **daysSinceStartOfTime** that, given a date (day, month, year) returns the number of days since the start of time (January 1, 1900). Your function should return 0 if given January 1, 1900, 1 if given January 2, 1900, and so on. Given the two previous functions, it should be really short (like one line long). 

The function **dayOfWeek** that, given a date (day, month, year), returns the day of the week (1 = Monday, 2 = Tuesday, and so on).  
The key here is knowing that January 1st 1900 was a Monday. This means that, if the number of days since then divides evenly by 7 the date in question must also be a Monday

The function **createCalendar** that, given a month and a year, outputs a calendar for that month. This function can work out how many days are in the month by calling daysInMonth and the day on which the month begins by calling dayOfWeek. 

###3. Create a class called Nim

“Another simple two-person game of pure skill is Nim. It is dubiously reputed to be of Chinese origin, possibly because it reflects the simplicity in structure combined with subtle strategic moves (at least to the mathematically unanointed) ascribed to Oriental games or possibly because it was known as Fan-Tan (although unrelated either to the mod 4 Chinese counter game or the elimination card game) among American college students toward the end of the nineteenth century. Actually the word Nim (presumably from niman, an archaic Anglo-Saxon word meaning to take away or steal) was appended by Charles Leonard Bouton, a mathematics professor at Harvard, who published the first analysis of the game in 1901. In the simplest and most conventional form of Nim, an arbitrary number of chips is apportioned into an arbitrary number of piles, with any distribution whatever. Each player, in his turn, removes any number of chips greater than or equal to one from any pile, but only from one pile. The player removing the final chip wins the game.” 

Create three piles, initial size of each pile is determined by adding 10 and a random number between 0 and 10 (so producing piles of between 10 and 20 chips).

Suggested functions:

- displayPiles 
- makeMove 
- selectComputerMove 
- getHumanMove 


Nim is a game of pure skill. Assuming perfect play, the winner is determined solely by the initial situation. Some starting positions guarantee a win for the first player to move (provided that he plays perfectly) and other positions guarantee a win for the second player to move (again, of course, assuming perfect play). As you will soon discover if you play against it a few times, the sample executable provided plays perfectly. The only way you will beat it is if the initial situation is in your favour and you play perfectly yourself. 
Your program is not required to play perfectly, but it must play legally, and some “smarts” are required. At a minimum (students are invited to improve on this) function *selectComputerMove* must choose to remove all of the remaining chips if they are all in the same pile (i.e. if your program has a winning move, it must take it). Function *getHumanMove* must reject invalid moves and keep trying until a valid move is obtained. 
