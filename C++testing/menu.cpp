#include "menu.h"

Menu::Menu(): firstPtr(nullptr), lastPtr(nullptr)
{
    totalItemSold = 0;
    totalProfit = 0.0;

    ifstream myfile;
    int index = 0;
    string docName;
    int docAmount;
    double docPrice = 0.0;
    string space;

    myfile.open("itemsdoc.txt");
    if(myfile.is_open())
    {
        while(myfile.good())
        {
            getline(myfile, docName, ',');
            //cout << "\ndocName: " << docName;

            if(!docName.empty()) {
                myfile >> docAmount;
                //cout << "\ndocAmount: " << docAmount;
                myfile >> docPrice >> std::ws;
                //cout << "\ndocPrice: " << docPrice;
            }
            //getline(myfile,space);
            itemnode newItem(docName,docAmount,docPrice);
            insertAtBack(newItem);
            if(index == 0)
                firstPtr = lastPtr;

            index++;
        }
        //cout << "File closes and index num at the end: " << index << endl;
        myfile.close();


    }
    else
        cout << "\nFile did not open" << endl;

    //cout << "\nindex: " << index;
}

Menu::~Menu()
{
    if(!isEmpty())
    {
        itemnode* curPtr = firstPtr;
        itemnode* tempPtr;

        while(curPtr != nullptr)
        {
            tempPtr = curPtr;
            cout << tempPtr->getName() << endl;

            curPtr = curPtr->nextPtr;
            delete tempPtr;
        }
    }
}

void Menu::showMenu()
{
    cout << "\n1. Buy Item";
    cout << "\n2. List Items";
    cout << "\n3. Edit Product Life?";
    cout << "\n4. Show Bills Report";
    cout << "\n5. Item Entry";
}



void Menu::insertAtFront(const itemnode &n)
{
    itemnode *newPtr = getNewNode(n);
    if(isEmpty())
      firstPtr = newPtr;
    else {
        firstPtr->prevPtr = newPtr;
        newPtr->nextPtr = firstPtr;
        firstPtr = newPtr;
    }
}

void Menu::insertAtBack(const itemnode &n)
{
    itemnode *newPtr = getNewNode(n);
    if(isEmpty())
        lastPtr = newPtr;
    else{
        cout << "\nOld Last Pointer: " << lastPtr->getName();
        newPtr->prevPtr = lastPtr;      //brand new pointer prev pointer points to last pointer
        lastPtr->nextPtr = newPtr;
        lastPtr = newPtr;
        cout << "\nNew Last Pointer: " << lastPtr->getName();

    }
}

void Menu::showItems()
{
    if(isEmpty()) {
        cout << "\nList Is Empty";
        return;
    }
        cout << left << setw(28) << "--Name-- " << setw(10) << "--Amount--" << "--Price--" << endl;

        itemnode *curPtr = firstPtr;

         while(curPtr != lastPtr)
        {
            cout << left << setw(30) << curPtr->getName() << setw(8) << curPtr->getAmount() << curPtr->getPrice() << endl;
            curPtr = curPtr->nextPtr;
        }
         cout << left << setw(30) << curPtr->getName() << setw(8) << curPtr->getAmount() << curPtr->getPrice() << endl;




}

bool Menu::isEmpty() const{
    return firstPtr == nullptr;
}

 bool Menu::inList(const string& name)         //Return the item to use on menu
{
    itemnode* cur = firstPtr;
    while(cur->nextPtr != nullptr)
    {
        if(cur->getName() == name) {
            return true;
        }
        cur = cur->nextPtr;
    }
       if(cur->getName() == name)
           return true;
    return false;
}



void Menu::buyItem(itemnode* item,int a)
{
        double thisProf = item->getPrice() * a;                         //int for total profit sold this buy
        item->setAmount(item->getAmount() - a);                         //changes the amount to - a
        item->setTotalProfit(
                item->getTotalProfit() + thisProf);        //changes the total profit item has brought in to price * a
        item->setTotalSold(item->getTotalSold() + a);
        setTotalSold(getTotalSold() + item->getTotalSold());               //changes total items sold
        setTotalProfit(getTotalProfit() + thisProf);                    //changes total profit to add thisProf

}

void Menu::showBillings()
{
    double temp;
    cout <<"=======================Billings======================" << endl;

    itemnode *curPtr = firstPtr;
    while(curPtr->nextPtr != nullptr)
    {
        if(curPtr->getTotalSold() != 0)
         cout << left << setw(28) << curPtr->getName() << setw(8) << curPtr->getTotalSold() << "$" << curPtr->getTotalProfit() << endl;

        curPtr = curPtr->nextPtr;
    }

    cout << "=========================Total=======================" << endl;
    cout << "Total Profit Made: $" << getTotalProfit() << endl;
    cout << "Total Items Sold: " << getTotalSold() << endl;
}

void Menu::setTotalSold(int t) {
    totalItemSold = t;
}

int Menu::getTotalSold() {
    return totalItemSold;
}

void Menu::setTotalProfit(double p) {
    totalProfit = p;
}

double Menu::getTotalProfit() {
    return totalProfit;
}

itemnode* Menu::getItem(const string& name)
{

    itemnode* cur = firstPtr;
    while(cur->nextPtr != nullptr)
    {
        if(cur->getName() == name)
            return cur;
        cur = cur->nextPtr;

    }
    return cur;
}


itemnode *Menu::getNewNode(const itemnode &i)
{
    return new itemnode(i);
}