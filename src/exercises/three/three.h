#ifndef UNIVERSITY_LIBRARY_H
#define UNIVERSITY_LIBRARY_H

/**
 * generates random number for the user to guess
 * @return
 */
int generate_random_number();

/**
 * recursive function that loops if the player guess is wrong
 * @param number
 */
void loop(int number);

/**
 * function used to call from main and to start the program.
 */
void on_enable();

#endif