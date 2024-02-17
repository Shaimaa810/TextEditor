// FCAI - programming 1 - Assignment 4
// Program Name: Text Editor
// Last Modification Date: 10 / 5 / 2022
#include<bits/stdc++.h>
#include "TextEditorFunc.h"
using namespace std;
int main()
{
    string original_file_name;
    cout << "Enter name of the original file without extension:";
    getline(cin, original_file_name);
    is_file_exist(original_file_name);
    while(true)
    {
        int choice = display_menu();
        if(choice == 1)
        {
            cin.ignore();
            add_new_text();
        }
        else if(choice == 2)
            display_content();
        else if(choice == 3)
            empty_file();
        else if(choice == 4)
            encrypt_file_content();
        else if(choice == 5)
            decrypt_file_content();
        else if(choice == 6)
            merge_files();
        else if(choice == 7)
            num_words();
        else if(choice == 8)
            num_chars();
        else if(choice == 9)
            num_lines();
        else if(choice == 10)
            search_word();
        else if(choice == 11)
            num_word_exist();
        else if(choice == 12)
            uppercase();
        else if(choice == 13)
            lowercase();
        else if(choice == 14)
            first_caps();
        else if(choice == 15)
            save(original_file_name);
        else if(choice == 16)
            exit();

    }

    return 0;
}



