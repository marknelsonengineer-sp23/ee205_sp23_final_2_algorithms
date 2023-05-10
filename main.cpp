///////////////////////////////////////////////////////////////////////////////
//         University of Hawaii, College of Engineering
//         EE 205 - Spr 2023 - Final Exam 2 - Algorithms
//
/// Your program must iterate-and-test to compute the result.
/// You can not use numerical methods.
///
/// Your program has to solve this eventually, but it does not have to produce a
/// result during the final.  It takes my computer 10 minutes to work through
/// the entire set, so manage your time well.
///
/// The program must print exactly one number at the end, so before you submit,
/// disable all debugging output as that will confuse the autograder.
///
/// @file   main.cpp
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

#define INT        long      ///< The signed datatype we need to get to `1,000,000,000`
#define INT_FORMAT "%010ld"  ///< The format for printing #INT

//                  0123456789
#define START_VALUE 0100000000  ///< Start searching from here (inclusive)
#define STOP_VALUE  9999999999  ///< End at this number (inclusive)

/// Test `i` and determine if each digit is unique.
///
/// @param i The number to test
/// @return `true` if each digit is unique.  `false` if there is one or more duplicate digits.
bool test( INT i ) {
   char szInt[11];
   sprintf( szInt, INT_FORMAT, i );

   // printf( "%s\n", szInt );

   bool hasInt[10];

   for( int j = 0 ; j < 10 ; j++ ) {
      hasInt[j] = false;
   }

   for( int j = 0 ; j < 10 ; j++ ) {
      const int k = szInt[j] - '0';
      if( hasInt[k] ) {
         return false;
      }
      hasInt[k] = true;
   }

   return true;
}


/// The entry point for this program
///
/// Iterate over #START_VALUE : #STOP_VALUE and count the number of digits
/// that have unique values.
///
/// @return The result code
int main() {
   INT count = 0 ;

   for( INT i = START_VALUE ; i <= STOP_VALUE ; i++ ) {
      if( test( i ) ) {
         // printf( "Found  " INT_FORMAT "\n", i );
         count++;
      }

      #ifdef DEBUG
         if( i % 10000000 == 0 ) {
            printf( "Currently at " INT_FORMAT ".   Found " INT_FORMAT " digits so far.\n", i, count );
         }
      #endif
   }

   // The number of integers with unique digits is:...
   printf( INT_FORMAT, count );
}
