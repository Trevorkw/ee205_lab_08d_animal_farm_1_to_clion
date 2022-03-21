///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author  Trevor Chang <@trevorkw@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>

#include "catDatabase.h"
#include "deleteCats.h"

void deleteAllCats() {
    printf("All cats deleted\n");

    for(int i = 0; i<= MAX_CATS; i++){

        strcpy(cats[i].name, "x");
        cats[i].isFixed = false;
        cats[i].weight = 0;
        // cats[i].realGender = UNKNOWN_GENDER;
        cats[i].catBreed = UNKNOWN_BREED;
        cats[i].catCollarColor1 = NONE;
        cats[i].catCollarColor2 = NONE;
        cats[i].license = 0;
        catCount = 0;
        return;  //seg faults without this
    }
}

