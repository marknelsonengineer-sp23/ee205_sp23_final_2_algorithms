///////////////////////////////////////////////////////////////////////////////
//         University of Hawaii, College of Engineering
//         EE 205 - Spr 2023 - Final Exam 2 - Algorithms
//
/// @file   main.cpp
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

/// Your program must iterate-and-test to compute the result.
/// You can not use numerical methods.

/// Your program has to solve this eventually, but it does not have to produce a
/// result during the final.  It takes my computer 10 minutes to work through
/// the entire set, so manage your time well.

/// The program must print exactly one number at the end, so before you submit,
/// disable all debugging output as that will confuse the autograder.

#define INT long
#define INT_FORMAT "%010ld"

//                  0123456789
#define START_VALUE 0100000000
#define STOP_VALUE  9999999999

bool test( INT i ) {
   char szInt[11];
   sprintf( szInt, INT_FORMAT, i );

   // printf( "%s\n", szInt );

   bool hasInt[10];

   for( int j = 0 ; j < 10 ; j++ ) {
      hasInt[j] = false;
   }

   for( int j = 0 ; j < 10 ; j++ ) {
      int k = szInt[j] - '0';
      if( hasInt[k] ) {
         return false;
      } else {
         hasInt[k] = true;
      }
   }

   return true;
}


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
