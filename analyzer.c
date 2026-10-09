#include "analyzer.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief Count the number of lines in a file.
 *
 * This function reads through the given file stream character by character
 * and counts how many newline characters (`'\n'`) are present, which
 * corresponds to the number of lines in the file. After counting, the
 * file pointer is reset to the beginning of the file using `rewind(fp)`.
 *
 * @param fp Pointer to an open file (`FILE*`) to be read.
 *           The file must be opened in a readable mode.
 *
 * @return The number of lines found in the file.
 *
 * @note The file pointer is reset to the start of the file after counting,
 *       so subsequent reads will begin from the beginning.
 *
 * @warning If `fp` is `NULL`, the behavior is undefined.
 */

/**
 * @brief 
 * test_analyzer: libreria per l’analisi di file di testo
 
 * La libreria dovrà permettere di eseguire operazioni tipo:
 * - contare il numero di righe  			DONE
 * - contare il numero di parole 			DONE
 * - Identificare la parola più frequente   TODO
 * - Identificare la parola più lunga…		TODO
 
 * Il repository dovrà contenere:
 * - Un file README.md che presenta la libreria e specifica come compilare ed eseguirla;
 * - Un file analyzer.h e un file analyzer.c che costituiscono la libreria;
 * - Alcuni file di testo di esempio nella cartella sample per provare la libreria;
 * - Un file main.c che permette di usare tutte le funzionalità della libreria (come argomenti);
 * - Un file .gitignore che filtra l’aggiunta di file non utili.
 */
 
int count_lines(FILE *fp) {
    int lines = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }
    rewind(fp); // reset file pointer
    return lines;
}

/* count the numbers of words in a file */

int count_words(FILE *fp){
    int words = 0, in_word = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF){
        if (ch == ' ' || ch == '\n' || ch == '\t'){
            in_word = 0;
        } else if (in_word == 0){
            in_word = 1;
            words++;
        }
    }
    rewind(fp);
    return words;
}

/* count frequency of all the words in the file, and returns the most used one */

//Dobbiamo creare un ADT tree ricorsivo per contare tutte le parole dentro un file.
//Ripassalo in Prog. II

int count_frequency(FILE* fp)
{	
	if(!fp)
		return 1;

	TreeADT* tree = (TreeADT*)malloc(sizeof(TreeADT));

	char ch;
	bool inWord = true;
	while((ch = fgetc(fp)) != EOF)
	{
		//Do nothing if we aren't inside the word
		if(ch == ' ' || ch == '\n' || ch == '\t')
		{
			inWord = false;
			fp++;
		}
	
		else if(inWord)
		{
			fp++;	
		}
	}
	
	return 0;
}


