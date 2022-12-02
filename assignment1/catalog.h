#ifndef CATALOG_H
#define CATALOG_H

using namespace std;

struct wizard{
    string name;
    int id;
    string password;
    string position_title;
    float beard_length;
};

struct spellbook{
    string title;
    string author;
    int num_page;
    int edition;
    int num_spells;
    float avg_success_rate;
    struct spell*s;
};

struct spell{
    string name;
    float success_rate;
    string effect;
};
#endif
/*********************************************************************
** Function: create_wizard_array
** Description: creating wizard_array
** Parameters: int num_wizards
** Pre-Conditions: no wizard array
** Post-Conditions: created wizard array
*********************************************************************/ 
wizard* create_wizard_array (int num_wizards);

/*********************************************************************
** Function: populate_wizard_data
** Description: Wizard data allocating
** Parameters: wizard* wizard_array, int num_wizards, ifstream& file1
** Pre-Conditions: empty wizard array
** Post-Conditions: Data stored wizard array
*********************************************************************/ 
void populate_wizard_data(wizard* wizard_array, int num_wizards, ifstream& file1);

/***********************************************************************
** Function: check_id_integer
** Description: checking if id is integer or not anf fix if not integer
** Parameters: char* id
** Pre-Conditions: user input id
** Post-Conditions: checked if id is integer
************************************************************************/ 
bool check_id_integer (char* id);

/******************************************************************************************************************
** Function: check_login
** Description: check login information
** Parameters: char* id, string password, wizard* wizard_array, int num_wizards, int &count, string &status_title
** Pre-Conditions: user's input without scanned
** Post-Conditions: scanned and checked user's input
********************************************************************************************************************/ 
//This function has more than 15 lines because I think the output information and the id checking all should be in one function
//I tried to make it as least as possible with correct indentation.
void check_login (char* id, string password, wizard* wizard_array, int num_wizards, int &count, string &status_title);

/********************************************************************
** Function: create_spellbooks
** Description: Create spellbook array
** Parameters: int num_spell_books
** Pre-Conditions: no spellbook array
** Post-Conditions: created spellbook array
*********************************************************************/
spellbook* create_spellbooks(int num_spell_books);

/********************************************************************
** Function: create_spells
** Description: Create spell array
** Parameters: int num_spell
** Pre-Conditions: no spells array
** Post-Conditions: created spells array
*********************************************************************/
spell* create_spells(int num_spell);

/*********************************************************************
** Function: populate_spell_data
** Description: Storing data into spell array
** Parameters: spell* spell_array, int num_spell, ifstream &file2
** Pre-Conditions: empty spell array
** Post-Conditions: stored spell array
*********************************************************************/ 
void populate_spell_data(spell* spell_array, int num_spell, ifstream &file2); 

/******************************************************************************
** Function: average_success_rate
** Description: Finding average success rate
** Parameters: spell* spell_array, int num_spells
** Pre-Conditions: no average success rate value
** Post-Conditions: returned average success rate value for each spellbooks
********************************************************************************/ 
float average_success_rate (spell* spell_array, int num_spells);

/*********************************************************************
** Function: populate_spellbook_data
** Description: Storing data into spellbook array
** Parameters: spellbook* spellbook_array, int num_spell, ifstream &file2
** Pre-Conditions: empty spellbook array
** Post-Conditions: stored spellbook array
*********************************************************************/ 
void populate_spellbook_data(spellbook* spellbook_array, int num_spell_books, ifstream &file2);

/*********************************************************************
** Function: swap
** Description: swapping two elements in array
** Parameters: spellbook* spellbook_array, int a
** Pre-Conditions: not swapped elements
** Post-Conditions: swapped elements
*********************************************************************/ 
void swap (spellbook* spellbook_array, int a);

/*********************************************************************
** Function: sort_by_number
** Description: Sorting number of pages in ascending order
** Parameters: spellbook* spellbook_array, num_spell_books
** Pre-Conditions: not sorted order array
** Post-Conditions: sorted order array
*********************************************************************/ 
void sort_by_number (spellbook* spellbook_array,int num_spell_books);

/*********************************************************************
** Function: printscreen_sort_by_number
** Description: Print the sorted order in screen
** Parameter: spellbook* spellbook_array, num_spell_books
** Pre-Conditions: not outputted sorted order yet
** Post-Conditions: printed sorted order array
*********************************************************************/ 
void printscreen_sort_by_number (spellbook* spellbook_array, int num_spell_books);

/*********************************************************************
** Function: printfile_sort_by_number
** Description: Print the sorted order into file
** Parameters: spellbook* spellbook_array, num_spell_books
** Pre-Conditions: not outputted sorted order into file
** Post-Conditions: printed sorted order array
*********************************************************************/ 
//This function has more than 15 lines because I don't know any other way to use ofstream outside the function.
//Using ofstream outside the function can cause the main function to go over 15 lines.
void printfile_sort_by_number (spellbook* spellbook_array, int num_spell_books, string &status_title);

/*********************************************************************
** Function: spell_effects
** Description: Assigning spell effects to number
** Parameters: char* spell_effect
** Pre-Conditions: numbers not assigned 
** Post-Conditions: numbers that are assigned to spell effects
*********************************************************************/ 
int spell_effects (char spell_effect);

/*********************************************************************
** Function: printscreen_sort_by_effect
** Description: Print the sorted order onto screen
** Parameters: spellbook* spellbook_array, num_spell_books
** Pre-Conditions: not outputted sorted order onto screen
** Post-Conditions: printed sorted order array
*********************************************************************/ 
void printscreen_sort_by_effect (spellbook* spellbook_array, int num_spell_books, string &status_title);

/*********************************************************************
** Function: printfile_sort_by_effect
** Description: Print the sorted order into file
** Parameters: spellbook* spellbook_array, num_spell_books
** Pre-Conditions: not outputted sorted order into file
** Post-Conditions: printed sorted order array
*********************************************************************/ 
//This function has more than 15 lines because I don't know any other way to use ofstream outside the function.
//Using ofstream outside the function can cause the main function to go over 15 lines.
void printfile_sort_by_effect (spellbook* spellbook_array, int num_spell_books, string &status_title);

/*********************************************************************
** Function: sort_by_rate
** Description: Sort the spells by success rate
** Parameters: spellbook* spellbook_array, num_spell_books
** Pre-Conditions: not sorted order array
** Post-Conditions: sorted order array
*********************************************************************/ 
void sort_by_rate (spellbook* spellbook_array , int num_spell_books);

/*********************************************************************
** Function: printscreen_sort_by_rate
** Description: Print the sorted order in screen
** Parameters: spellbook* spellbook_array, num_spell_books
** Pre-Conditions: not outputted sorted order in screen
** Post-Conditions: printed sorted order array in screen
*********************************************************************/ 
void printscreen_sort_by_rate (spellbook* spellbook_array , int num_spell_books, string &status_title);

/*********************************************************************
** Function: printfile_sort_by_rate
** Description: Print the sorted order into file
** Parameters: spellbook* spellbook_array, num_spell_books
** Pre-Conditions: not outputted sorted order into file
** Post-Conditions: printed sorted order array into file
*********************************************************************/ 
//This function has more than 15 lines because I don't know any other way to use ofstream outside the function.
//Using ofstream outside the function can cause the main function to go over 15 lines.
void printfile_sort_by_rate (spellbook* spellbook_array, int num_spell_books, string &status_title);

/*******************************************************************************************************
** Function: print_option_number
** Description: Print the options for sort number functions
** Parameters: int print_choice, spellbook* spellbook_array, int num_spell_books, string &status_title
** Pre-Conditions: not printed options for sort number functions
** Post-Conditions: printed options for sorted order array
**********************************************************************************************************/ 
void print_option_number (int print_choice, spellbook* spellbook_array, int num_spell_books, string &status_title);

/*******************************************************************************************************
** Function: print_option_effect
** Description: Print the options for sort effect functions
** Parameters: int print_choice, spellbook* spellbook_array, int num_spell_books, string &status_title
** Pre-Conditions: not printed options for sort effect functions
** Post-Conditions: printed options for sorted order array
**********************************************************************************************************/ 
void print_option_effect (int print_choice, spellbook* spellbook_array, int num_spell_books, string &status_title);

/*******************************************************************************************************
** Function: print_option_rate
** Description: Print the options for sort rate functions
** Parameters: int print_choice, spellbook* spellbook_array, int num_spell_books, string &status_title
** Pre-Conditions: not printed options for sort rate functions
** Post-Conditions: printed options for sorted order array
**********************************************************************************************************/ 
void print_option_rate (int print_choice, spellbook* spellbook_array, int num_spell_books, string &status_title);

/*******************************************************************************************************
** Function: four_options
** Description: printing four options for program
** Parameters: ~
** Pre-Conditions: no output
** Post-Conditions: printed four options
**********************************************************************************************************/ 
void four_options ();

/*************************************************************************************************************************
** Function: options_inside
** Description: Output for inside the functions
** Parameters: int choice, spellbook* spellbook_array, int num_spell_books, int print_choice, string &status_title
** Pre-Conditions: no functions outputted
** Post-Conditions: functions and options outputted
*************************************************************************************************************************/ 
void options_inside (int choice, spellbook* spellbook_array, int num_spell_books, int print_choice, string &status_title);

/*************************************************************************************************************************
** Function: options
** Description: Output for four main functions
** Parameters: int choice, spellbook* spellbook_array, int num_spell_books, int print_choice, string &status_title
** Pre-Conditions: no functions outputted
** Post-Conditions: functions and options outputted
*************************************************************************************************************************/ 
//This function has more than 15 lines because I need to output all functions in one thing 
void options (int choice, spellbook* spellbook_array, int num_spell_books, int print_choice, string &status_title);

/*********************************************************************
** Function: delete_info
** Description: deleting heap memory
** Parameters: wizard** wizard_array, spellbook** spellbook_array, int num_spell_books
** Pre-Conditions: heap memories not deleted
** Post-Conditions: deleted heap memories
*********************************************************************/ 
void delete_info (wizard** wizard_array, spellbook** spellbook_array, int num_spell_books);