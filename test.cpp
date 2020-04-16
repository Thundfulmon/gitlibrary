#include<iostream>
#include<string>
using namespace std;

class traveler{
   private:
       string name;
   public:
       traveler(string name)
       {
        this->name=name;
       }
       string getName()
       {
         return name;
       }
};
class hotel{
  private:
      traveler a;
      int price;
  public:
      hotel(traveler a,int price)
      {
    this->a=a;
    this->price=price;
    }
    void show()
    {
         cout<<"welcome!"<<endl<<"your name is:"<<static_cast<string>(a.getName())<<endl<<"you need to pay:"<<price<<endl;
    }
};

int main()
{
    string name="lql";
    traveler a(name);
    hotel t(a,325);
    t.show();
}

add 1；
