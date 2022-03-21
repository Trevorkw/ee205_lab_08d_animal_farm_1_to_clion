///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author  Trevor Chang <@trevorkw@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "catDatabase.h"
#include "addCats.h"


//struct Cat cats[1];

int CatIsValid(char catName[], float catWeight){
    if (catCount >= MAX_CATS){ //database cannot be full
        return 1;  //1 for error
    }
    if(strlen(catName) == 0){ //cat name cannot be empty
        return 1;
    }
    if(strlen(catName) > MAX_CAT_NAME){ //name of cat cannot be greter than 30
        return 1;
    }
    if(catWeight <= 0){  //weight cannot be 0 or less
        return 1;
    }
    for(int i=0; i<catCount; i++){       //checks database to see if names are unique
        if(strcmp(catName, cats[i].name) == 0){
            return 1;
        }
        return 0;
    }
    return 0;
}
int addCat( char addName[], /*enum Gender addGender,*/char realGender, enum Breed addBreed, enum Color addCollarColor1, enum Color addCollarColor2,unsigned long long addLicense, bool addIsFixed,float addWeight) {
    if(CatIsValid(addName, addWeight) != 0) {
        return 1;
    }
    strcpy(cats[catCount].name, addName);
    cats[catCount].isFixed = addIsFixed;
    cats[catCount].weight = addWeight;
    //strcpy(addGender, cats[catCount].realGender );  //array
    cats[catCount].catBreed = addBreed;
    cats[catCount].catCollarColor1 = addCollarColor1;
    cats[catCount].catCollarColor2 = addCollarColor2;
    cats[catCount].license = addLicense;
    catCount++;
    return catCount;
}
