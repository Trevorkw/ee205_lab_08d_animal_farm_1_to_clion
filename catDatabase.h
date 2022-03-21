///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author  Trevor Chang <@trevorkw@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <stdbool.h>

#define MAX_CATS 1024
#define MAX_CAT_NAME 50


enum Gender{MALE, FEMALE, UNKNOWN_GENDER};                                 //male, female, unknown
const char * const realGender[]={
        [MALE] = "Male",
        [FEMALE] = "Female",
        [UNKNOWN_GENDER] = "Unknown"
};

enum Breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};  //unknown, main coon, manx, shorthair, persian, sphynx
enum Color{BLACK, WHITE, RED, BLUE, GREEN, PINK, ORANGE, NONE};           //Black, White, Red, Blue, Green, Pink, Orange, Unknown


struct Cat {
    char name[MAX_CAT_NAME]    ;
    char realGender[3];   //need [MAX_CATS] in the struct?
    enum Breed catBreed        ;
    enum Color catCollarColor1 ;                                           //uses Color enum
    enum Color catCollarColor2 ;                                           // *
    bool isFixed               ;                                           //True or false
    float weight               ;                                           //just a number
    unsigned long long license ;
};

extern struct Cat cats[] ;
extern int catCount      ;


/*
extern enum Gender catGender[MAX_CATS];                                //make array for gender
extern enum Breed catBreed[MAX_CATS];                                  //make array for breed

extern char name[][MAX_CAT_NAME]; //max size 30 character array for name
extern bool isFixed[];                                                      //bool is fixed
extern float weight[];                       //weight cannot be 0, use for and if loop?

extern int catCount;
*/
