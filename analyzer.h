#ifndef ANALYZER_H
#define ANALYZER_H

#include <stdio.h>

//Tree ADT for count_frequency
typedef struct tree
{
	int count;
	struct tree* left;
	struct tree* right;
} TreeADT;

// Functions to analyze a text file
int count_lines(FILE *fp);
int count_words(FILE *fp);
int count_frequency(FILE *fp);
int count_longest(FILE *fp);

#endif
