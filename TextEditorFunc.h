#ifndef TEXTEDITOR_TEXTEDITORFUNC_H
#define TEXTEDITOR_TEXTEDITORFUNC_H

#include<bits/stdc++.h>
using namespace std;

// 1. Add new text to the end of the file
void add_new_text();

// 2. Display the content of the file
void display_content();

// 3. Empty the file
void empty_file();

// 4. Encrypt the file content
void encrypt_file_content();

// 5. Decrypt the file content
void decrypt_file_content();

// 6. Merge another file
void merge_files();

// 7. Count the number of words in the file
void num_words();

// 7. Count the number of characters in the file
void num_chars();

// 8. Count the number of lines in the file
void num_lines();

// 10. Search for a word in the file
void search_word();

// 11. Count the number of times a word exists in the file
void num_word_exist();

// 12. Turn the file content to upper case
void uppercase();

// 13. Turn the file content to lower case
void lowercase();

// 14. Turn the file content to first caps
void first_caps();

// 15. Save
void save(string original_file_name);

// 16. Exit
void exit();

// Display menu
int display_menu();

// check if the file exist or not
void is_file_exist(string original_file_name);

#endif //TEXTEDITOR_TEXTEDITORFUNC_H
