#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class Book
{
  public:
    char title[256];
    char author[64];
    float price;
    Book(char *btitle, char *bauthor, char *bpublisher, float bprice);
    void show_title(void) { cout << title << '\n'; };
    float get_price(void) { return(price); };
    void show_book(void)
    {
      show_title();
      show_publisher();
    };
    void assign_publisher(char *name) { strcpy(publisher, name); };
  private:
    char publisher[256];
    void show_publisher(void) { cout << publisher << '\n'; };
};

Book::Book(char *btitle, char *bauthor, char *bpublisher, float bprice)
{
   strcpy(title, btitle);
   strcpy(author, bauthor);
   strcpy(publisher, bpublisher);
   price = bprice;
}

int main(void)
{   cout<<"\nProgram by Himanshu Beniwal \n";
   Book tips("A", "B", "C", 49.95);
   Book diary("D", "E", "F", 9.95);
   tips.show_book();
   diary.show_book();
}
