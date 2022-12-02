#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include "catalog.h"

using namespace std;

wizard* create_wizard_array (int num_wizards){
    wizard* wizard_array = new wizard [num_wizards];
    return wizard_array;
}

void populate_wizard_data(wizard* wizard_array, int num_wizards, ifstream& file1){
    for (int i = 0 ; i < num_wizards; i++){
        file1 >> wizard_array[i].name >> wizard_array[i].id >> wizard_array[i].password >>
                 wizard_array[i].position_title >> wizard_array[i].beard_length;
    }
} 

bool check_id_integer (char* id){
   for (int i = 0; i < 10; i++)
   {
        if (int(id[i]) <48 || int(id[i]) >57){
            do{
                cout << "Plase enter integer only : ";
                cin  >> id;
            }while (int (id[i]) <48 || int(id[i]) >57);
            return false;
        }

        else if(int(id[i]) > 47 || int(id[i]) < 58)
            return true;
   }
}

void check_login (char* id, string password, wizard* wizard_array, int num_wizards, int &count, string &status_title){
    cout << "Please input ID       : ";
    cin  >> id;

    bool is_valid = check_id_integer (id);

    cout << "Please input password : ";
    cin  >> password;
    
    int num_times = 0;
    cout << endl;
    for (int i = 0 ; i < num_wizards ; i++){
        if (atoi(id) == wizard_array[i].id && password.compare(wizard_array[i].password) == 0){
            cout << "Name : " << wizard_array[i].name << endl;
            cout << "Beard Length : " << wizard_array[i].beard_length << endl;
            status_title = wizard_array[i].position_title;
            cout << "Position Title : " << status_title << endl;
        }
        else if (count == 2) {
            cout << "Failed Attempts : 3" << endl;
            exit(1);
        }
        else {
            num_times += 1;
        }
    }

    if (num_times == 20) {
        count += 1;
        cout << "Invalid. Try again." << endl << "Failed Attempts : " << count << endl;
        check_login(id, password, wizard_array, num_wizards, count, status_title);
    }
}

spellbook* create_spellbooks(int num_spell_books){
    spellbook* spellbook_array = new spellbook [num_spell_books];
    return spellbook_array;
}

spell* create_spells(int num_spell){
    spell* spell_array = new spell [num_spell];
    return spell_array;
}

void populate_spell_data(spell* spell_array, int num_spell, ifstream &file2){
    for (int i = 0 ; i < num_spell ; i++){
        file2 >> spell_array[i].name >> spell_array[i].success_rate >>
                 spell_array[i].effect;
    }
} 

float average_success_rate (spell* spell_array, int num_spells){
    float total_rate = 0;
    for (int i = 0 ; i < num_spells; i++){
        total_rate += spell_array[i].success_rate;
    }

    return total_rate/num_spells;
}

void populate_spellbook_data(spellbook* spellbook_array,  int num_spell_books, ifstream &file2){
    for (int i = 0 ; i < num_spell_books; i++){
        file2 >> spellbook_array[i].title >> spellbook_array[i].author >> spellbook_array[i].num_page >>
                 spellbook_array[i].edition >> spellbook_array[i].num_spells;
        spellbook_array[i].s = create_spells(spellbook_array[i].num_spells);
        populate_spell_data (spellbook_array[i].s, spellbook_array[i].num_spells, file2);
        spellbook_array[i].avg_success_rate = average_success_rate (spellbook_array[i].s, spellbook_array[i].num_spells);
    }
}

void swap (spellbook* spellbook_array, int a){
   spellbook x = spellbook_array [a];
   spellbook_array[a] = spellbook_array [a+1];
   spellbook_array[a+1] = x;
}

void sort_by_number (spellbook* spellbook_array,int num_spell_books){
   for (int i = 1 ; i< num_spell_books; i++){
       for (int j = 0 ; j < num_spell_books-1; j++){
           if (spellbook_array[j].num_page > spellbook_array[j+1].num_page ){
               swap(spellbook_array, j);
           }
       }
   }
}

void printscreen_sort_by_number (spellbook* spellbook_array, int num_spell_books, string &status_title){
    sort_by_number (spellbook_array, num_spell_books);
    for (int i = 0 ; i < num_spell_books ; i++){
        if (status_title == "Student"){
            bool skip = false;
            for (int j = 0 ; j < spellbook_array[i].num_spells; j++){
                if (spellbook_array[i].s[j].effect[0] == 'p' || spellbook_array[i].s[j].effect[0] == 'd'){
                    skip = true;
                    break;
                }
            }
            if (skip == true)
                continue;
        }
        cout << spellbook_array[i].title << " " << spellbook_array[i].num_page << endl;
    }
}

void printfile_sort_by_number (spellbook* spellbook_array, int num_spell_books, string &status_title){
    char filename[100];
    cout << "Please input filename : ";
    cin.ignore();
    cin.getline(filename,100);

    ofstream fileoutput;
    fileoutput.open (filename, ios::app);
    sort_by_number (spellbook_array, num_spell_books);

    fileoutput << "SPELLS SORTED BY NUMBER " << endl << endl;
    for (int i = 0 ; i < num_spell_books; i++){
        if (status_title == "Student"){
            bool skip = false;
            for (int j = 0 ; j < spellbook_array[i].num_spells; j++){
                if (spellbook_array[i].s[j].effect[0] == 'p' || spellbook_array[i].s[j].effect[0] == 'd'){
                    skip = true;
                    break;
                }
            }
            if (skip == true)
                continue;
        }
        fileoutput << spellbook_array[i].title << " " << spellbook_array[i].num_page << endl;
    }
    fileoutput << endl;
}

int spell_effects (char spell_effect){
    if (spell_effect == 'm')
        return 1;

    else if (spell_effect == 'f')
        return 2;

    else if (spell_effect == 'b')
        return 3;

    else if (spell_effect == 'p')
        return 4;

    else if (spell_effect == 'd')
        return 5;
}

void printscreen_sort_by_effect (spellbook* spellbook_array, int num_spell_books, string &status_title){
    for (int x = 0 ; x < 5 ; x++){
        for (int i = 0 ; i < num_spell_books; i++){
            for (int j = 0 ; j < spellbook_array[i].num_spells; j++){
                if (x == 0 && spell_effects(spellbook_array[i].s[j].effect[0]) == 1)
                    cout << spellbook_array[i].s[j].name << " " << spellbook_array[i].s[j].effect << endl;
                
                else if (x == 1 && spell_effects(spellbook_array[i].s[j].effect[0]) == 2)
                    cout << spellbook_array[i].s[j].name << " " << spellbook_array[i].s[j].effect << endl;
                
                else if (x == 2 && spell_effects(spellbook_array[i].s[j].effect[0]) == 3)
                    cout << spellbook_array[i].s[j].name << " " << spellbook_array[i].s[j].effect << endl;

                else if (x == 3 && spell_effects(spellbook_array[i].s[j].effect[0]) == 4 && (status_title == "Teacher" || status_title == "Headmaster"))
                    cout << spellbook_array[i].s[j].name << " " << spellbook_array[i].s[j].effect << endl;
                
                else if (x == 4 && spell_effects(spellbook_array[i].s[j].effect[0]) == 5 && (status_title == "Teacher" || status_title == "Headmaster"))
                    cout << spellbook_array[i].s[j].name << " " << spellbook_array[i].s[j].effect << endl;
            }
        }
    }
}

void printfile_sort_by_effect (spellbook* spellbook_array, int num_spell_books, string &status_title){
    char filename[100];
    cout << "Please input filename : ";
    cin.ignore();
    cin.getline(filename,100);

    ofstream fileoutput;
    fileoutput.open (filename, ios::app);
    fileoutput << "SPELLS SORTED BY EFFECT" << endl << endl;
    for (int x = 0 ; x < 5 ; x++){
        for (int i = 0 ; i < num_spell_books; i++){
            for (int j = 0 ; j < spellbook_array[i].num_spells; j++){
                if (x == 0 && spell_effects(spellbook_array[i].s[j].effect[0]) == 1)
                    fileoutput << spellbook_array[i].s[j].name << " " << spellbook_array[i].s[j].effect << endl;
                
                else if (x == 1 && spell_effects(spellbook_array[i].s[j].effect[0]) == 2)
                    fileoutput << spellbook_array[i].s[j].name << " " << spellbook_array[i].s[j].effect << endl;
                
                else if (x == 2 && spell_effects(spellbook_array[i].s[j].effect[0]) == 3)
                    fileoutput << spellbook_array[i].s[j].name << " " << spellbook_array[i].s[j].effect << endl;

                else if (x == 3 && spell_effects(spellbook_array[i].s[j].effect[0]) == 4 && (status_title == "Teacher" || status_title == "Headmaster"))
                    fileoutput << spellbook_array[i].s[j].name << " " << spellbook_array[i].s[j].effect << endl;
                
                else if (x == 4 && spell_effects(spellbook_array[i].s[j].effect[0]) == 5 && (status_title == "Teacher" || status_title == "Headmaster"))
                    fileoutput << spellbook_array[i].s[j].name << " " << spellbook_array[i].s[j].effect << endl;
            }
        }
    }
    fileoutput << endl;
}

void sort_by_rate (spellbook* spellbook_array , int num_spell_books){
    for (int i = 1; i < num_spell_books;i++){
        for (int j = 0 ; j < num_spell_books-1; j++)
            if (spellbook_array[j].avg_success_rate > spellbook_array[j+1].avg_success_rate){
                swap (spellbook_array,j);
            }
    }
}

void printscreen_sort_by_rate (spellbook* spellbook_array , int num_spell_books, string &status_title){
    sort_by_rate (spellbook_array, num_spell_books);
    for (int i = 0 ; i < num_spell_books ; i++){
        if (status_title == "Student"){
            bool skip = false;
            for (int j = 0 ; j < spellbook_array[i].num_spells; j++){
                if (spellbook_array[i].s[j].effect[0] == 'p' || spellbook_array[i].s[j].effect[0] == 'd'){
                    skip = true;
                    break;
                }
            }
            if (skip == true)
                continue;
        }
        cout << spellbook_array[i].title << " " << spellbook_array[i].avg_success_rate << endl;
    }
}

void printfile_sort_by_rate (spellbook* spellbook_array, int num_spell_books, string &status_title){
    char filename[100];
    cout << "Please input filename : ";
    cin.ignore();
    cin.getline(filename,100);
    ofstream fileoutput;
    fileoutput.open (filename, ios::app);
    sort_by_rate (spellbook_array, num_spell_books);

    fileoutput << "SPELLS SORTED BY AVERAGE SUCCESS RATE " << endl << endl;
    for (int i = 0 ; i < num_spell_books ; i++){
        if (status_title == "Student"){
            bool skip = false;
            for (int j = 0 ; j < spellbook_array[i].num_spells; j++){
                if (spellbook_array[i].s[j].effect[0] == 'p' || spellbook_array[i].s[j].effect[0] == 'd'){
                    skip = true;
                    break;
                }
            }
            if (skip == true)
                continue;
        }
        fileoutput << spellbook_array[i].title << " " << spellbook_array[i].avg_success_rate << endl;
    }
    fileoutput << endl;
}

void print_option_number (int print_choice, spellbook* spellbook_array, int num_spell_books, string &status_title){
        cout << "1) Print to screen." << endl;
        cout << "2) Print to file." << endl;
        cout << "Input your choice : ";
        cin  >> print_choice;
        cout << endl;
        
        if (print_choice == 1)
            printscreen_sort_by_number (spellbook_array, num_spell_books, status_title);    
        
        else if (print_choice == 2) 
            printfile_sort_by_number (spellbook_array, num_spell_books, status_title);

        else if (print_choice < 1 || print_choice > 2 ){
            cout << "Invalid number. Please try again." << endl;
            print_option_number (print_choice, spellbook_array, num_spell_books, status_title);
        }
        
        cout << endl;
        
}

void print_option_effect (int print_choice, spellbook* spellbook_array, int num_spell_books, string &status_title){
        cout << "1) Print to screen." << endl;
        cout << "2) Print to file." << endl;
        cout << "Input your choice : ";
        cin  >> print_choice;
        cout << endl;
        if (print_choice == 1)
            printscreen_sort_by_effect (spellbook_array, num_spell_books, status_title);    
        
        else if (print_choice == 2) 
            printfile_sort_by_effect (spellbook_array, num_spell_books, status_title);

        else if (print_choice < 1 || print_choice > 2 ){
            cout << "Invalid number. Please try again." << endl;
            print_option_effect (print_choice, spellbook_array, num_spell_books, status_title);
        }
        cout << endl;
}

void print_option_rate (int print_choice, spellbook* spellbook_array, int num_spell_books, string &status_title){
        cout << "1) Print to screen." << endl;
        cout << "2) Print to file." << endl;
        cout << "Input your choice : ";
        cin  >> print_choice;
        cout << endl;
        if (print_choice == 1)
            printscreen_sort_by_rate (spellbook_array, num_spell_books, status_title);    
        
        else if (print_choice == 2) 
            printfile_sort_by_rate (spellbook_array, num_spell_books, status_title);

        else if (print_choice < 1 || print_choice > 2 ){
            cout << "Invalid number. Please try again." << endl;
            print_option_rate (print_choice, spellbook_array, num_spell_books, status_title);
        }
        cout << endl;
}

void four_options (){
    cout << "1) Sort spells by numbers of pages." << endl;
    cout << "2) Sort spells by effect." << endl;
    cout << "3) Sort spells by average success rate." << endl;
    cout << "4) Quit the program." << endl;
    cout << "Input your choice : ";
}

void options_inside (int choice, spellbook* spellbook_array, int num_spell_books, int print_choice, string &status_title){
    four_options ();
    cin  >> choice;
    cout << endl;

    if (choice == 1){
        print_option_number (print_choice, spellbook_array, num_spell_books, status_title);
    }
    else if (choice == 2){
        print_option_effect (print_choice, spellbook_array, num_spell_books, status_title);
        
    }
    else if (choice == 3){
        print_option_rate (print_choice, spellbook_array, num_spell_books, status_title);
        cout << endl;
    }
    else if (choice == 4){
        cout << "Thank you for visiting the library." << endl;
        cout << endl;
        exit(1);
    }
}

void options (int choice, spellbook* spellbook_array, int num_spell_books, int print_choice, string &status_title){
    cout << endl;
    four_options ();
    cin  >> choice;
    cout << endl;

    if (choice == 1){
        print_option_number (print_choice, spellbook_array, num_spell_books, status_title);
    }

    else if (choice == 2){
        print_option_effect (print_choice, spellbook_array, num_spell_books, status_title);
        
    }

    else if (choice == 3){
        print_option_rate (print_choice, spellbook_array, num_spell_books, status_title);
        cout << endl;
    }

    else if (choice == 4){
        cout << "Thank you for visiting the library." << endl;
        cout << endl;
        exit(1);
    }

    else if (choice < 1 || choice > 4){
        cout << "Invalid number. Please try  again." << endl;
        options (choice, spellbook_array, num_spell_books, print_choice, status_title);
    }

    while (choice > 0 && choice < 4){
        options_inside (choice, spellbook_array, num_spell_books, print_choice, status_title);
    }

}

void delete_info (wizard ** wizard_array, spellbook** spellbook_array, int num_spell_books){
    delete [] (*wizard_array);
    (*wizard_array) = NULL;

    delete [] (*spellbook_array);
    (*spellbook_array) = NULL;
}

