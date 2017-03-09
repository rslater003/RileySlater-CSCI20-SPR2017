//Riley Slater
//Lab 2.5
//March 7, 2017
//This program has user input data for 5 different books then outputs all that data through a print function. All the components of the book are in the class, as well as the print function.
#include <iostream>
#include <string>
using namespace std;

class Books {   //Creates Class Books
    public: //Sets the following to public
    
    void SetTitle(string bookTitle);    //Creates a SetTitle to allow the user to set the title when commanded
    void SetAuthor(string bookAuthor);  //Creates a SetAuthor to allow the user to set the title when commanded
    void SetCopyrightYear(int year);    //Creates a SetCopyrightYear to allow the user to set the title when commanded
    string GetTitleValue();             //Creates a string function to get the title value
    string GetAuthorValue();            //Creates a string function to get the author value
    int GetCopyrightYearValue();        //Creates a integer function to get the Copyright Year value
    void PRINT();                       //Creates a PRINT function to output data
    
    private:    //Sets the following to private
    
    string title;   
    string author;
    int copyrightYear;
};

void Books::SetTitle(string bookTitle) {    //Definition of Function SetTitle, input a book title and it stores it in the class as title
    title = bookTitle;
    return;
}
void Books::SetAuthor(string bookAuthor) {  //Definition of Function SetAuthor, input a book author and it stores it in the classs as author
    author = bookAuthor;
    return;
}
void Books::SetCopyrightYear(int year) {    //Definition of Function SetCopyrightYear, input a book copyright year and it stores it in the class as copyrightYear
    copyrightYear = year;
    return;
}
string Books::GetTitleValue() {     //Returns the title when called
    return title;
}
string Books::GetAuthorValue() {    //Returns the author when called
    return author;
}
int Books::GetCopyrightYearValue() {    //Returns the copyrightYear when called
    return copyrightYear;
}
void Books::PRINT() {   //Prints all the information about the book when called: Title, Author, and Copyright Year
    cout << endl;
    cout << "Title: " << GetTitleValue() << endl;
    cout << "Author: " << GetAuthorValue() << endl;
    cout << "Copyright Year: " << GetCopyrightYearValue() << endl << endl;
}

int main() {
    Books book1;    //Creates an object from class Books
    Books book2;    //Creates an object from class Books
    Books book3;    //Creates an object from class Books
    Books book4;    //Creates an object from class Books
    Books book5;    //Creates an object from class Books
    
    //Basic Output for Book 1 Values: 
    string book1Title;
    cout << "Input First Book Title: ";
    cin.ignore();
    std::getline (std::cin,book1Title);
    book1.SetTitle(book1Title);
    
    string book1Author;
    cout << "Input First Book Author: ";
    cin.ignore();
    std::getline (std::cin,book1Author);
    book1.SetAuthor(book1Author);
    
    int book1CopyrightYear;
    cout << "Input First Book Copyright Year: ";
    cin >> book1CopyrightYear;
    book1.SetCopyrightYear(book1CopyrightYear);
    
    
    //Basic Output for Book 2 Values: 
    string book2Title;
    cout << "Input Second Book Title: ";
    cin.ignore();
    std::getline (std::cin,book2Title);
    book2.SetTitle(book2Title);
    
    string book2Author;
    cout << "Input Second Book Author: ";
    cin.ignore();
    std::getline (std::cin,book2Author);
    book2.SetAuthor(book2Author);
    
    int book2CopyrightYear;
    cout << "Input Second Book Copyright Year: ";
    cin >> book2CopyrightYear;
    book2.SetCopyrightYear(book2CopyrightYear);
    
    
    //Basic Output for Book 3 Values: 
    string book3Title;
    cout << "Input Third Book Title: ";
    cin.ignore();
    std::getline (std::cin,book3Title);
    book3.SetTitle(book3Title);
    
    string book3Author;
    cout << "Input Third Book Author: ";
    cin.ignore();
    std::getline (std::cin,book3Author);
    book3.SetAuthor(book3Author);
        
    int book3CopyrightYear;
    cout << "Input Third Book Copyright Year: ";
    cin >> book3CopyrightYear;
    book3.SetCopyrightYear(book3CopyrightYear);  
        
    
    //Basic Output for Book 4 Values: 
    string book4Title;
    cout << "Input Fourth Book Title: ";
    cin.ignore();
    std::getline (std::cin,book4Title);
    book4.SetTitle(book4Title);
    
    string book4Author;
    cout << "Input Fourth Book Author: ";
    cin.ignore();
    std::getline (std::cin,book4Author);
    book4.SetAuthor(book4Author);
    
    int book4CopyrightYear;
    cout << "Input Fourth Book Copyright Year: ";
    cin >> book4CopyrightYear;
    book4.SetCopyrightYear(book4CopyrightYear);
        
    
    //Basic Output for Book 5 Values: 
    string book5Title;
    cout << "Input Fifth Book Title: ";
    cin.ignore();
    std::getline (std::cin,book5Title);
    book5.SetTitle(book5Title);
    
    string book5Author;
    cout << "Input Fifth Book Author: ";
    cin.ignore();
    std::getline (std::cin,book5Author);
    book5.SetAuthor(book5Author);
    
    int book5CopyrightYear;
    cout << "Input Fifth Book Copyright Year: ";
    cin >> book5CopyrightYear;
    book5.SetCopyrightYear(book5CopyrightYear);

    //Calls the PRINT Function after each "Book Name" Book: 

    cout << endl << endl;
    cout << "First Book: " << endl;
    book1.PRINT();
    cout << "Second Book: " << endl;
    book2.PRINT();
    cout << "Third Book: " << endl;
    book3.PRINT();
    cout << "Fourth Book: " << endl;
    book4.PRINT();
    cout << "Fifth Book: " << endl;
    book5.PRINT();
}