//Make custom item object to hold
//how many of this item there is
//name of the item
//and then you are going to put this in a vector so you can have as many items as needed

#include <iostream>
#include <vector>

using namespace std;


class itemnode
{
    friend class Menu;
public:
    itemnode (const itemnode&);
    itemnode(const string,const int, const double);
    void setName(string n);
    void setAmount(int a);
    void setPrice(double p);
    void setTotalSold(int t);
    void setidPlace(int);
    void setTotalProfit(double);


    string getName() const;
    double getPrice() const;
    int getAmount() const;
    int getTotalSold() const;
    int getidPlace() const;
    double getTotalProfit() const;

private:
  std::string name;
  int amount;
  double price;
  double totalProf;
  int totalSold;
  int idPlace;
  itemnode* nextPtr;
  itemnode* prevPtr;

};

