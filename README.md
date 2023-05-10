
<img src=".doxygen/images/logo_Final.png" style="width:250px; float: right; margin: 0px 10px 10px 10px;" alt="Final Exam"/>

The project's home page is hosted by GitHub at:  https://github.com/marknelsonengineer-sp23/ee205_sp23_final_2_algorithms

The source code is documented at:  https://www2.hawaii.edu/~marknels/ee205/sp23_final_2_algorithms 
(hosted by The University of Hawaiʻi at Mānoa)

Algorithms
==========

Count the number of 10-digit numbers where each digit `0`-`9` appears exactly 
once.  For example, the numbers:  `0198764253`, `2069187534` and `9108765342` 
would count, but `1198764253` would not count because the digit `1` appears twice.

Your program must iterate-and-test to compute the result.  You can not use 
numerical methods such as permutation.  For the record, P(10, 10) = `3628800`.

#### Notes
  - A leading `0` is allowed.
  - Develop your code against small ranges first, for example from `1000000000` 
    to `1999999999`.
  - Make it work first, then try to find ways to make it efficient (if you have 
    time)
  - Your program has to solve it eventually, but it does not have to produce a 
    number during the final.  It takes my computer 10 minutes to work through 
    the entire set, so manage your time well.
  - The program must print exactly one number at the end (no commas or decimal 
    points)... which is the number of "unique digit" numbers.  Before you submit, 
    disable all debugging output as that will confuse the autograder.
  - Your code must be your own work.  Don't use code from the Internet (I've 
    seen it).

#### Rubric
  - The program is functional and passes all of my tests.
  - The program must compile without any warnings (-5% for the first warning.  
    -2% for up to 10 additional warnings).
  - Don't worry about any clang-tidy problems reported by CLion.
  - I'll deduct up to 10% for variable names that are not descriptive -- write 
    your code to tell your story.  `i`, `j` and `k` for iterators are acceptable. 
