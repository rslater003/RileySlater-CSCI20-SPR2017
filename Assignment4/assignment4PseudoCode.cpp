//Concordance Assignment:
//Create File Opens for 3 different files: Stop Words File, fin: cin for Input File, fout: Output File
//Copy all data from Stop Words File to a char array
//The class called Concordance
//Private Variable: string word and public variables: int amountOccured = 0, int indexOfOccurance = 0;
//setAmountOccured() (Adds 1 to amountOccured)
//setIndexFirstOccurence(int index) (Set the index to the index of the item, only runs if the main checks for the first occurance of the word)
//getAmountOccured (Gets the amount of times the word has been used so far)
//getIndexFirstOccurance (Gets the index of the first occurance of the word)
//Create an array of objects for each word found
//Use fin for each word
//Store the word as an object if the word hasn't been found previously in the document ( Using stopWordsFile.find("word") )
//When the document is complete with checking each word throughout the file then use a for loop to cout all the functions of the class Example:
// The Word: Happy | The Amount of Occurances: 10 | First Location of Occurance: 10
// The Word: Sad   | The Amount of Occurances: 5  | First Location of Occurance: 18