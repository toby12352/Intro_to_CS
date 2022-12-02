/*******************************************************************************************************************************
** Program : catalog_prog
** Author: Tun Aung Thaung
** Date: 7/5/2020
** Description: Store data from text files and sorting and printing them into screen/file.
** Input: file1,file2,wizards,spells,num_wizards,num_spell_books,choice,print_choice,id,count,password,status_title,fileoutput
** Output: Sorted number of pages, average success rate & spell effects in ascending order
*******************************************************************************************************************************/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include "catalog.h"

using namespace std;

int main(int argc, char** argv){
    if (argc != 3){
        cout << "Invalid number of argument." << endl;
        exit(1);
    }

    ifstream file1, file2;
    string wizards, spells;
    int num_wizards, num_spell_books, choice, print_choice;
    char id[10];
    int count = 0;
    string password, status_title;

    file1.open(argv[1]);
    if (file1.fail()){
        cout << "Error opening file." << endl;
        exit(1);
    }
    getline(file1, wizards);
    num_wizards = atoi(wizards.c_str());

    file2.open(argv[2]);
    if (file2.fail()){
        cout << "Error opening file." << endl;
        exit(1);
    }
    getline(file2,spells);
    num_spell_books = atoi(spells.c_str());

    wizard* wizard_array = create_wizard_array (num_wizards);
    populate_wizard_data(wizard_array, num_wizards, file1);

    check_login (id, password,wizard_array, num_wizards, count, status_title);

    spellbook* spellbook_array = create_spellbooks(num_spell_books);
    populate_spellbook_data(spellbook_array, num_spell_books, file2);

    options (choice, spellbook_array, num_spell_books, print_choice, status_title);

    delete_info (&wizard_array, &spellbook_array, num_spell_books);

    file1.close();
    file2.close();
    return 0;
}