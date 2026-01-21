#include <bits/stdc++.h>
using namespace std;
class Book{
    private:
    string title;
    string author;
    int publication_year;
    

    public:
    Book(){
    title="Untitled";
    author="Unknown";
    publication_year: 0;
    
}
    Book(string tit, string auth, int pubyr){
        title=tit;
        author=auth;
        publication_year=pubyr;
        cout << "Default value is set.\n" << endl;
    }
    void displayinfo(){
        cout<<"The book title: "<<title<<"\nAuthor:"<<author<<"\nPublication Year:"<<publication_year;
    }
    ~Book(){
        cout<<"\nThe Book is removed\n";
    }
};    
int main() {
    Book book1("Teach Yourself C++" , "Herbert Schildt's" , 1992);
    book1.displayinfo();
    

    return 0;

}
