///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author  Trevor Chang <@trevorkw@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "catDatabase.h"
#include "reportCats.h"


int printCat(int catIndex){
    if(catIndex < 0 || catIndex > MAX_CATS) {
        printf("animalFarm0: Bad cat [%d]\n", catIndex);
        return 1;
    }
    printf("cat index = [%u] name=[%s] gender=[%s] breed=[%d] isFixed=[%d] weight=[%f] Collar Color 1 =[%d] Collar Color 2 =[%d] License =[%llu]\n",
           catIndex,
           cats[catIndex].name,
           cats[catIndex].realGender,
           cats[catIndex].catBreed,
           cats[catIndex].isFixed,
           cats[catIndex].weight,
           cats[catIndex].catCollarColor1,
           cats[catIndex].catCollarColor2,
           cats[catIndex].license);
    return 0;
}

int printAllCats(){
    for(int i = 0; i < catCount; i++){
        printCat(i);
    }
    return 1;
}

int findCat(char catSearch[]) {
    for(int i = 0; i < catCount; i++){
        if(strcmp(catSearch, cats[i].name) == 0){
            return 1;
        }
    }
    printf("There is no cat with the name %s\n", catSearch);
    return -1;
}

