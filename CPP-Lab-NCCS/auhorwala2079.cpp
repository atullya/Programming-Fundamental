

#include <iostream>

using namespace std;
class Author{
  string name;
  string address;
  public:
  void getdata(){
      cout<<"Enter name of author:";
      cin>>name;
      cout<<"Enter the address of author:";
      cin>>address;
  }
  void putdata(){
      cout<<"The name of the author is "<<name<<" and his address is "<<address<<endl;
  }
  
};
class publication{
    string pname;
    public:
     void getdata(){
    cout<<"Enter the publication name:";
    cin>>pname;
  }
  void putdata(){
      cout<<"The name of the publication is "<<pname<<endl;
  }
    
};

class book: public Author, public publication{
    string title;
    public:
    void getdata(){
        cout<<"Enter the title of the book";
        cin>>title;
    }
    void putdata(){
        cout<<"The title of the book is "<<title<<endl;
    }
};

int main()
{
    
    book b1;
    b1.Author::getdata();
    b1.publication::getdata();
    b1.getdata();
    b1.Author::putdata();
    b1.publication::putdata();
    b1.putdata();

    return 0;
}
