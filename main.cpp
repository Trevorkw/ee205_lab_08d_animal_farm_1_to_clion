

/*
#University of Hawaii, College of Engineering
# @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
#
#
# @file    main.cpp
# @author  Trevor Chang <@Trevorkw@hawaii.edu>
# @date   20_Mar_2022
*/
#include <iostream>
#include <stdio.h>


#include "catDatabase.h"
#include "addCats.h"
#include "updateCats.h"
#include "deleteCats.h"
#include "reportCats.h"

//#define DEBUG

int main(){
    printf("Starting Animal Farm 1\n");
    addCat( "Loki", MALE, PERSIAN, BLACK, WHITE, 101, true, 8.5 ) ;
    addCat( "Milo", MALE, MANX,RED, BLUE, 102, true, 7.0 ) ;
    addCat( "Bella", FEMALE, MAINE_COON, GREEN, PINK, 103, true, 18.2 ) ;
    addCat( "Kali", FEMALE, SHORTHAIR, WHITE, BLACK, 104, false, 9.2 ) ;
    addCat( "Trin", FEMALE, MANX, RED, GREEN, 105, true, 12.2 ) ;
    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, NONE, GREEN, 107, false, 19.0 ) ;

#ifdef DEBUG
    printf("add cat to database\n");
#endif
//only need one debug for adding cats

    printAllCats();
#ifdef DEBUG
    printf("print all cats\n");
#endif

    int kali = findCat( "Kali" ) ;

    updateCatName( kali, "Chili" ) ; // this should fail
    //add an assert or debug?

    printCat( kali );
#ifdef DEBUG
    printf("print specific cat\n");
#endif

    updateCatName( kali, "Capulet" ) ;
#ifdef DEBUG
    printf("update cat name\n");
#endif

    updateCatWeight( kali, 9.9 ) ;
#ifdef DEBUG
    printf("update cat weight\n");
#endif

    fixCat( kali ) ;

    printCat( kali );
#ifdef DEBUG
    printf("print specific cat\n");
#endif

    printAllCats();
#ifdef DEBUG
    printf("print all cats\n");
#endif

    deleteAllCats();
#ifdef DEBUG
    printf("remove all cats from database\n");
#endif

    printAllCats();
#ifdef DEBUG
    printf("print all cats\n");
#endif

    addCat( "Arnold", MALE, MANX, NONE, NONE, 106, false, 5.0);
#ifdef DEBUG
    printf("add cat to database\n");
#endif

    printAllCats();

    int Arnold = findCat("Arnold\n");

    updateCatWeight( Arnold, 0);
#ifdef DEBUG
    printf("update cat weight to incorrect weight\n");
#endif

    updateCatName(Arnold, "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcd");
#ifdef DEBUG
    printf("rename cat to incorrect name");
#endif

    printCat( Arnold );
#ifdef DEBUG
    printf("print specific cat\n");
#endif

    printAllCats();
#ifdef DEBUG
    printf("print all cats\n");
#endif


    printf("Done with Animal Farm 1\n");
    return 0;
}

