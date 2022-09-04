#include "itemnode.h"
#include <iostream>
#include <iomanip>
#include <fstream>

/* IF YOU EVER FORGET WHAT THE PROJECT IS CALLED ITS THE SALES MANAGEMENT SYSTEM
 * Contribution of profits      +?
 * Continuous growth            -?
 * Sales volume                 +?
 * Item entry                   +
 * Item Recording               +
 * Billing                      +
 * Customer Information !!!!    -
 */

using namespace std;

class Menu
{
public:
    Menu();
    ~Menu();
    static void showMenu();
    void showItems();
    void buyItem(itemnode* ,int);
    void showBillings();
    void setTotal(int);
    void setTotalProfit(double);
    void setTotalSold(int);
    void insertAtFront(const itemnode&);
    void insertAtBack(const itemnode&);



    bool inList(const string&);       //returning the itemnode so that it can be altered by other Functions
    int getTotalSold();
    double getTotalProfit();
    bool isEmpty() const;
    itemnode* getItem(const string&);



private:
    int totalItemSold;
    double totalProfit;
    itemnode *firstPtr;
    itemnode *lastPtr;

    itemnode *getNewNode(const itemnode&);
};





