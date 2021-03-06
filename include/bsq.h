/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** bsq .h file
*/

#define MSG_NOT_ENOUGH_ARGS  "Not enough arguments\n"
#define EXIT_NOT_ENOUGH_ARGS 84
#define MSG_READ_FAIL  "Read failed\n"
#define EXIT_READ_FAIL 84
#define MSG_READ_EMPTY_FILE "Empty file\n"
#define EXIT_READ_EMPTY_FILE 84
#define MSG_INVALID_NBR_LINES  "Invalid number of lines\n"
#define EXIT_INVALID_NBR_LINES 84
#define MSG_FIRST_LINE_NOT_NUMBER "First line isn't a number\n"
#define EXIT_FIRST_LINE_NOT_NUMBER 84
#define MSG_ERROR "ERROR\n"
#define EXIT_ERROR 84
#define EXIT_SUCCESS 0

#define EMPTY_CHAR 'o'
#define FULL_CHAR '.'
#define SQUARE_CHAR 'x'

int get_squares(char *buffer, char **tab);
int bsq_main(char *filepath);