# Programming Challenges C++
## Problem 2.5 Stack Em Up[^1]
### Problem description
This program determines the order of a deck of cards after several shuffles. How the deck of cards is altered by each shuffle, and the order of shuffles used, is known by the program. 

The possible values of the cards are:
1. 2
2. 3
3. 4
4. 5
5. 6
6. 7
7. 8
8. 9
9. 10
10. Jack
11. Queen
12. King
13. Ace

The possible suits of the cards are:
1. Clubs
2. Diamonds
3. Hearts
4. Spades                                       

The input consists of:
1. Number of cases to run, followed by a blank line                                            
2. The number of shuffles known (n)                                        
3. "n" lines containing the order of the cards after the "nth" shuffle                          
4. Several lines containing the order of shuffles used.                    
5. A blank line separates each case
6. EOF terminates the final case                            


The output is:
1. 52 lines printing the order of the cards after all shuffles, in the format of \<value\> of \<suit\>                           


### Example 
>**Input**                                                                 
>1                                                
>                                            
>2                                                             
>2 1 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 52 51                                       
>52 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 1
>1
>2                                                                  

>**Output**
>King of Spades                                           
>2 of Clubs                                                
>4 of Clubs                                                
>5 of Clubs                                                
>6 of Clubs                                                
>7 of Clubs                                                
>8 of Clubs                                                
>9 of Clubs                                                
>10 of Clubs                                                
>Jack of Clubs                                                
>Queen of Clubs                                                
>King of Clubs                                                
>Ace of Clubs                                                
>2 of Diamonds                                                
>3 of Diamonds                                                
>4 of Diamonds                                                
>5 of Diamonds                                                
>6 of Diamonds                                                
>7 of Diamonds                                                
>8 of Diamonds                                                
>9 of Diamonds                                                
>10 of Diamonds                                                
>Jack of Diamonds                                                
>Queen of Diamonds                                                
>King of Diamonds                                                
>Ace of Diamonds                                                
>2 of Hearts                                                
>3 of Hearts                                                
>4 of Hearts                                                
>5 of Hearts                                                
>6 of Hearts                                                
>7 of Hearts                                                
>8 of Hearts                                                
>9 of Hearts                                                
>10 of Hearts                                                
>Jack of Hearts                                                
>Qunne of Hearts                                                
>King of Hearts                                                
>Ace of Hearts                                                
>2 of Spades                                                
>3 of Spades                                                
>4 of Spades                                                
>5 of Spades                                                
>6 of Spades                                                
>7 of Spades                                                
>8 of Spades                                                
>9 of Spades                                                
>10 of Spades                                                
>Jack of Spades                                                
>Queen of Spades                                                
>Ace of Spades                                                
>3 of Clubs                                                


### Problem solution
1. Read input (number of cases "C")
2. Handle blank line
3. for (number of cases)
   1. Read input (number of shuffles "S")
   2. for (S)
     1. Read Shuffle 
   4. while (!blank && !EOF)
      1. get shuffle ID
      2. Shuffle deck
   6. Print shuffled deck


**Optional:**
1. Function overloading (cout / ofstream)
2. Operator overloading (<< / >> / ++)
3. Templates


### Bug Checklist
- [1] NA

[^1]: Programming Challenges By S.Skienna and M.Revilla, page 48