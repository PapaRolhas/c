/*  Chapter 10
    Exercise 10 */

#include <stdio.h>

struct entry{
    char word[15];
    char definition[50];
};

//  Function to compare two character strings

int compareStrings(const char s1[], const char s2[]){
    
    int i = 0, answer;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;

    if(s1[i] < s2[i])
        answer = -1;    // s1 < s2
    else if(s1[i] == s2[i])
        answer = 0;     // s1 == s2
    else
        answer = 1;     // s1 > s2

    return answer;
}

void dictionarySort(struct entry dictionary[], int entries){

    int i, j;
    struct entry tmp;

    for(i = 0; i < entries; i++){
        for(j = i+1; j < entries; j++){
            if(compareStrings(dictionary[i].word, dictionary[j].word) == 1){
                tmp = dictionary[j];
                dictionary[j] = dictionary[i];
                dictionary[i] = tmp;
            }
        }
    }

}

int main(void){

    struct entry dictionary[100] = {
        {"addle",       "to become confused"},
        {"aerie",       "a high nest"},
        {"affix",       "to append, attach"},
        {"ahoy",        "a nautical call of greeting"},
        {"aigrette",    "an ornamental cluster of feathers"},
        {"abyss",       "a bottomless pit"},
        {"agar",        "a jelly made from seaweed"},
        {"acumen",      "mentally shap, keen"},
        {"ajar",        "partially opened"},
        {"aardvark",    "a burrowing African mammal"}
    };

    // {"aardvark",    "a burrowing African mammal"},
    // {"abyss",       "a bottomless pit"},
    // {"acumen",      "mentally shap, keen"},
    // {"addle",       "to become confused"},
    // {"aerie",       "a high nest"},
    // {"affix",       "to append, attach"},
    // {"agar",        "a jelly made from seaweed"},
    // {"ahoy",        "a nautical call of greeting"},
    // {"aigrette",    "an ornamental cluster of feathers"},
    // {"ajar",        "partially opened"}

    int entries = 10;

    void dictionarySort(struct entry dictionary[], int entries);
    int compareStrings(const char s1[], const  char s2[]);

    printf("Program to sort a dictionary.\n");
    printf("-----------------------------\n");

    printf("Dictionary before sort: \n");

    for(int i = 0; i < entries; i++){
        printf("# %-15s # %-50s\n", dictionary[i].word, dictionary[i].definition);
    }   

    dictionarySort(dictionary, entries);

    printf("\n\nDictionary after sort: \n");

    for(int i = 0; i < entries; i++){
        printf("# %-15s # %-50s\n", dictionary[i].word, dictionary[i].definition);
    }

    return 0;
}