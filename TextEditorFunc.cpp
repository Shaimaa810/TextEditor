#include "TextEditorFunc.h"

ifstream instream;
ofstream outstream;

// 1. Add new text to the end of the file
void add_new_text()
{
    outstream.open("temp.txt", ios :: app);
    string str;
    cout << "Enter the text that you want to add it to the file:";
    getline(cin, str);
    outstream << str;
    outstream.close();
}
//----------------------------------------------------------------------------------------------------------------------
// 2. Display the content of the file
void display_content()
{
    instream.open("temp.txt");
    string str;
    while(!instream.eof())
    {
        getline(instream,str);
        cout << str << "\n";
    }
    instream.close();
}
//----------------------------------------------------------------------------------------------------------------------
// 3. Empty the file
void empty_file()
{
    outstream.open("temp.txt");
    outstream.close();
}
//----------------------------------------------------------------------------------------------------------------------
// 4. Encrypt the file content
void encrypt_file_content()
{
    string str;
    instream.open("temp.txt");
    outstream.open("output.txt", ios :: app);
    while(!instream.eof())
    {
        getline(instream, str);
        for(int i = 0; i < str.size(); ++i)
        {
            str[i] = str[i] + 1;
        }
        outstream << str << "\n";
    }
    instream.close();
    outstream.close();
    outstream.open("temp.txt");
    outstream.close();
    instream.open("output.txt");
    outstream.open("temp.txt", ios :: app);
    while(!instream.eof())
    {
        getline(instream, str);
        outstream << str << "\n";
    }
    instream.close();
    outstream.close();
    remove("output.txt");
}
//----------------------------------------------------------------------------------------------------------------------
// 5. Decrypt the file content
void decrypt_file_content()
{
    string str;
    instream.open("temp.txt");
    outstream.open("output.txt", ios :: app);
    while(!instream.eof())
    {
        getline(instream, str);
        for(int i = 0; i < str.size(); ++i)
        {
            str[i] = str[i] - 1;
        }
        outstream << str << "\n";
    }
    instream.close();
    outstream.close();
    outstream.open("temp.txt");
    outstream.close();
    instream.open("output.txt");
    outstream.open("temp.txt", ios :: app);
    while(!instream.eof())
    {
        getline(instream, str);
        outstream << str << "\n";
    }
    instream.close();
    outstream.close();
    remove("output.txt");
}
//----------------------------------------------------------------------------------------------------------------------
// 6. Merge another file
void merge_files()
{
    string second_file_name, str;
    cout << "Enter the second file name without extension:";
    cin >> second_file_name;
    outstream.open("temp.txt", ios :: app);
    instream.open(second_file_name+".txt");
    while(!instream.eof())
    {
        getline(instream, str);
        outstream << str << "\n";
    }
    instream.close();
    outstream.close();
}
//----------------------------------------------------------------------------------------------------------------------
// 7. Count the number of words in the file
void num_words()
{
    int cnt = 0;
    string str;
    instream.open("temp.txt");
    while (!instream.eof())
    {
        instream >> str;
        cnt++;
    }
    instream.close();
    cout << "Number of words in this file is " << cnt << " words\n";
}
//----------------------------------------------------------------------------------------------------------------------
// 8. Count the number of characters in the file
void num_chars()
{
    int cnt = 0;
    char ch;
    instream.open("temp.txt");
    while(!instream.eof())
    {
        instream.get(ch);
        cnt++;
    }
    instream.close();
    cout << "Number of characters in this file is " << cnt << " characters\n";
}
//----------------------------------------------------------------------------------------------------------------------
// 9. Count the number of lines in the file
void num_lines()
{
    int cnt = 0;
    string str;
    instream.open("temp.txt");
    while(!instream.eof())
    {
        getline(instream, str);
        cnt++;
    }
    instream.close();
    cout << "Number of lines in this file is " << cnt << " lines\n";
}
//----------------------------------------------------------------------------------------------------------------------
// 10. Search for a word in the file
void search_word()
{
    string word, str;
    cout << "Enter the word that you want to search for it:";
    cin >> word;
    transform(word.begin(), word.end(), word.begin(), :: tolower);
    instream.open("temp.txt");
    while(!instream.eof())
    {
        instream >> str;
        transform(str.begin(), str.end(), str.begin(), :: tolower);
        if(str == word)
        {
            str = word;
            break;
        }
    }
    if(str == word)
        cout << "word was found in the file\n";
    else
        cout << "word was not found in the file\n";
}
//----------------------------------------------------------------------------------------------------------------------
// 11. Count the number of times a word exists in the file
void num_word_exist()
{
    string word, str, s;
    int cnt = 0;
    cout << "Enter the word that you want to know how many times it is repeated in the file:";
    cin >> word;
    s = word;
    transform(word.begin(), word.end(), word.begin(), :: tolower);
    instream.open("temp.txt");
    while(!instream.eof())
    {
        instream >> str;
        transform(str.begin(), str.end(), str.begin(), :: tolower);
        if(str == word)
            cnt++;
    }
    instream.close();
    if(cnt > 0)
        cout << "The word " << s << " was found " << cnt << " times in the file\n";
    else
        cout << "The word " << s << " was not found in the file\n";
}
//---------------------------------------------------------------------------------------------------------------------
// 12. Turn the file content to upper case
void uppercase()
{
    string str;
    instream.open("temp.txt");
    outstream.open("output.txt", ios :: app);
    while(!instream.eof())
    {
        getline(instream, str);
        transform(str.begin(),str.end(),str.begin(),::toupper);
        outstream << str << "\n";
    }
    instream.close();
    outstream.close();
    outstream.open("temp.txt");
    outstream.close();
    instream.open("output.txt");
    outstream.open("temp.txt", ios :: app);
    while(!instream.eof())
    {
        getline(instream, str);
        outstream << str << "\n";
    }
    instream.close();
    outstream.close();
    remove("output.txt");
}
//----------------------------------------------------------------------------------------------------------------------
// 13. Turn the file content to lower case
void lowercase()
{
    string str;
    instream.open("temp.txt");
    outstream.open("output.txt", ios :: app);
    while(!instream.eof())
    {
        getline(instream, str);
        transform(str.begin(),str.end(),str.begin(),::tolower);
        outstream << str << "\n";
    }
    instream.close();
    outstream.close();
    outstream.open("temp.txt");
    outstream.close();
    instream.open("output.txt");
    outstream.open("temp.txt", ios :: app);
    while(!instream.eof())
    {
        getline(instream, str);
        outstream << str << "\n";
    }
    instream.close();
    outstream.close();
    remove("output.txt");
}
//----------------------------------------------------------------------------------------------------------------------
// 14. Turn the file content to first caps
void first_caps()
{
    string str;
    instream.open("temp.txt");
    outstream.open("output.txt", ios :: app);
    while(!instream.eof())
    {
        getline(instream, str);
        transform(str.begin(), str.end(), str.begin(), :: tolower);
        str[0] = toupper(str[0]);
        for(int i = 1; i < str.size(); ++i)
        {
            if(str[i] == ' ')
                str[i+1] = toupper(str[i+1]);
        }
        outstream << str << "\n";
    }
    instream.close();
    outstream.close();
    outstream.open("temp.txt");
    outstream.close();
    instream.open("output.txt");
    outstream.open("temp.txt", ios :: app);
    while(!instream.eof())
    {
        getline(instream, str);
        outstream << str << "\n";
    }
    instream.close();
    outstream.close();
    remove("output.txt");
}
//----------------------------------------------------------------------------------------------------------------------
// 15. Save
void save(string original_file_name)
{
    int choice;
    cout << "Enter number of operation you want to da:\n";
    cout << "1 - save in the same file\n";
    cout << "2 - save in new file\n";
    cin >> choice;
    string str;
    if(choice == 1)
    {
        outstream.open(original_file_name+".txt");
        outstream.close();
        instream.open("temp.txt");
        outstream.open(original_file_name+".txt", ios :: app);
        while(!instream.eof())
        {
            getline(instream, str);
            outstream << str << "\n";
        }
        instream.close();
        outstream.close();
    }
    else if(choice == 2)
    {
        string new_file_name;
        cout << "Enter new file name without extension:";
        cin >> new_file_name;
        instream.open("temp.txt");
        outstream.open(new_file_name+".txt", ios :: app);
        while(!instream.eof())
        {
            getline(instream, str);
            outstream << str << "\n";
        }
        instream.close();
        outstream.close();
    }
}
//----------------------------------------------------------------------------------------------------------------------
// 16. Exit
void exit()
{
    remove("temp.txt");
    exit(1);
}
//---------------------------------------------------------------------------------------------------------------------
// Display menu
int display_menu()
{
    int choice;
    cout << "please, enter number of your choice:\n";
    cout << "1 - Add new text to the end of the file\n";
    cout << "2 - Display the content of the file\n";
    cout << "3 - Empty the file\n";
    cout << "4 - Encrypt the file content\n";
    cout << "5 - Decrypt the file content\n";
    cout << "6 -  Merge another file\n";
    cout << "7 - Count the number of words in the file\n";
    cout << "8 - Count the number of characters in the file\n";
    cout << "9 - Count the number of lines in the file\n";
    cout << "10 - Search for a word in the file\n";
    cout << "11 - Count the number of times a word exists in the file\n";
    cout << "12 - Turn the file content to upper case\n";
    cout << "13 - Turn the file content to lower case\n";
    cout << "14 - Turn file content to 1st caps (1st char of each word is capital)\n";
    cout << "15 - Save\n";
    cout << "16 - Exit\n";
    cin >> choice;
    return choice;
}
//---------------------------------------------------------------------------------------------------------------------
// check if the file exist or not
void is_file_exist(string original_file_name)
{
    instream.open(original_file_name+".txt");
    if(!instream.fail())
    {
        cout << "This File Already Exists\n";
        outstream.open("temp.txt", ios :: app);
        string str;
        while(!instream.eof())
        {
            getline(instream, str);
            outstream << str << "\n";
        }
        outstream.close();
        instream.close();
    }
    else
    {
        cout << "This is a new file. I created it for you\n";
        outstream.open(original_file_name+".txt");
        outstream.close();
        outstream.open("temp.txt");
        outstream.close();
    }

}

