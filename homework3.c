/*
 * Homework #3 Deliverables
 *
 * Name: add your name here  
 *   YOU MUST FILL IN YOUR NAME AND THEN REMOVE THIS COMMENT.
 *
 * Sources used:
 *   List all sources used to complete this assignment. Include a
 *   URL for internet resources. You do not need to include the lab
 *   write-up, course textbooks, or man pages. If you did not use
 *   any sources, write the word "None".  YOU MUST COMPLETE THIS SECTION.
 *   Please remove the explanation when you complete this field.
 *
 * People consulted:
 *   List anyone you discussed this assignment with, including your
 *   classmates, friends, and Harper Tutors.  You do not need to list
 *   the instructors or the teaching assistants.  If you did not consult
 *   anyone, write the work "None".  YOU MUST COMPLETE THIS SECTION.
 *   Please remove the explanation when you complete this field.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include "homework3.h"

/* Part 1: Colors */

/*
 * new_color: Create a new heap-allocated color
 *
 * red: red value
 * green: green value
 * blue: blue value
 * name: name of color
 *
 * Returns: Heap-allocated color struct with heap-allocated name
 */
color_t *new_color(uint8_t red, uint8_t green, uint8_t blue, char *name) {
    assert(name != NULL);
    
    // YOUR CODE HERE
    // Replace NULL with an appropriate return value
    return NULL;
} 

/*
 * copy_color: Create a new heap-allocated copy of a color
 *
 * c: color to copy
 *
 * Returns: Heap-allocated color struct with heap-allocated name
 */
color_t *copy_color(color_t *c) {
    assert(c != NULL);
    
    // YOUR CODE HERE
    // Replace NULL with an appropriate return value
    return NULL;
}

/*
 * free_color: Free a heap-allocated color
 *
 * c: color to free
 *
 * Returns: Nothing, frees c
 */
void free_color(color_t *c) {
    assert(c != NULL);
    
    // YOUR CODE HERE
    return;
}

/*
 * luminance: Compute the luminance of a color using the
 *     formula: 0.2126*R + 0.7152*G + 0.0722*B
 * 
 * c: color
 * 
 * Returns: the luminance of c
 */
double luminance(color_t *c) {
    assert(c != NULL);
    
    // YOUR CODE HERE
    // Replace 0.0 with an appropriate return value
    return 0.0;
}

/*
 * grayscale: Create a heap-allocated grayscale version of a color
 *    using the forumla: (77*R + 150*G + 29*B)/256
 *
 * c: color
 *
 * Returns: Heap-allocated grayscale version of c with the name "gray"
 */
color_t *grayscale(color_t *c) {
    assert(c != NULL);
    
    // YOUR CODE HERE
    // Replace NULL with an appropriate return value
    return NULL;
}

/*
 * make_stripe: Create a strip of a single color
 *
 * c: color
 * stripe_len: length of the strip
 *
 * Returns: An array (stripe) of colors
 */
color_t **make_stripe(color_t *c, int stripe_len) {
    assert(c != NULL);
    assert(stripe_len > 0);

    // YOUR CODE HERE
    // Replace NULL with an appropriate return value
    return NULL;
}

/*
 * free_stripe: Free a stripe of colors
 *
 * stripe: array of colors
 * stripe_len: length of the strip
 *
 * Returns: Nothing, frees stripe
 */
void free_stripe(color_t **stripe, int stripe_len) {
    assert(stripe != NULL);
    assert(stripe_len > 0);
    
    // YOUR CODE HERE
    return;
}

/*
 * pack_color: Pack the values of a color into 32 bits using: 0RGB
 *
 * c: color
 *
 * Returns: Packed version of c in a 32-bit unsigned integer
 */
uint32_t pack_color(color_t *c) {
    assert(c != NULL);
    
    // YOUR CODE HERE
    // Replace 0 with an appropriate return value
    return 0;
}

/*
 * unpack_colors: Unpack an array of 32-bit packed colors
 *
 * packed_colors: array of 32-bit packed colors
 * names: array of names of packed colors
 * num_colors: number of colors in the array
 *
 * Returns: Array of pointers to color structs, unpacked
 */
color_t **unpack_colors(uint32_t *packed_colors, char **names, int num_colors) {
    assert(packed_colors != NULL);
    assert(names != NULL);
    assert(num_colors > 0);

    // YOUR CODE HERE
    // Replace NULL with an appropriate return value
    return NULL;
}

/* Part 2: Ingredients */

/*
 * shopping_list_amounts: Determine the amount of each ingredient that is 
 *     needed to make a recipe given a list of ingredients in a pantry 
 *     and a list of ingredients in a recipe.
 *
 * pantry: array of ingredients
 * pantry_len: number of ingredients in the pantry
 * recipe: array of ingredients
 * recipe_len: number of ingredients in the recipe
 *
 * Returns: An array of ingredient amounts where element i is the number of units
 *     of ingredient i that are needed
 */
double *shopping_list_amounts(ingredient_t *pantry, int pantry_len, 
                              ingredient_t *recipe, int recipe_len) {
    assert(pantry != NULL);
    assert(recipe != NULL);
    assert(recipe_len > 0);

    // YOUR CODE HERE
    // Replace NULL with an appropriate return value
    return NULL;
}

/*
 * new_ingredient: Create a new stack-allocated ingredient
 *
 * food_name: name of ingredient
 * amount: amount of ingredient
 *
 * Returns: Ingredient struct
 */
ingredient_t new_ingredient(char *food_name, double amount) {
    assert(food_name != NULL);
    assert(amount > 0);

    ingredient_t new;
    new.food_name = food_name;
    new.amount = amount;
    return new;
}

/*
 * shopping_list: Create a shopping list containing the ingredients that are 
 *     needed to make a recipe given a list of ingredients in a pantry 
 *     and a list of ingredients in a recipe.
 *
 * pantry: array of ingredients
 * pantry_len: number of ingredients in the pantry
 * recipe: array of ingredients
 * recipe_len: number of ingredients in the recipe
 * shopping_list_len: length of the shopping list (out parameter)
 *
 * Returns: An array of ingredients
 */
ingredient_t *shopping_list(ingredient_t *pantry, int pantry_len, 
                            ingredient_t *recipe, int recipe_len,
                            int *shopping_list_len) {
    assert(pantry != NULL);
    assert(recipe != NULL);
    assert(recipe_len > 0);
    assert(shopping_list_len != NULL);

    // YOUR CODE HERE
    // Replace NULL with an appropriate return value
    return NULL;
}
