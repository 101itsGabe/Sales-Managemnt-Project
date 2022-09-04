#include <iostream>
#include <string>
#include "menu.h"

using namespace std;

int main()          //MAIN
{
    cout << "Welcome to the Krusty Krab now with delivery!" << endl;

    Menu menu;

    int ch;
    do{
        menu.showMenu();
        cout << "\n-> ";
        cin >> ch;
        cout << endl;
        switch(ch)
        {
            case 1: {
                string order;
                int amount;
                cout << "\nSquidward: What would you like to order? ->";
                cin.ignore();
                getline(cin,order);
                if(menu.inList(order))
                {
                    itemnode* curBuy = menu.getItem(order);
                    cout << "\nSquidward: Ok.....How many would you like to buy? -> ";
                    cin >> amount;
                    if(amount<= curBuy->getAmount()) {
                        menu.buyItem(curBuy, amount);
                        cout << "Squidward: Ok you bought " << amount << " " << curBuy->getName() << endl;
                        cout << "Squidward: Your total is: $" << curBuy->getPrice() * amount;
                    }
                    else
                    {
                        cout << "Squidward: Uh sir, we only have: " << curBuy->getAmount() << " left so please only buy what we have" << endl;
                    }
                }
                else
                    cout << "\nThat items is not on this menu.";
                break;
            }
            case 2:
                menu.showItems();
                break;
            case 3:
                cout << "\nSquidward: Mr.Krabs kick this fish out for asking about your money";
                break;
            case 4:
                menu.showBillings();
                break;
            case 5: {
                string itemName;
                int itemAmount;
                double itemPrice;

                cout << "\nSo you want to enter a new item?";
                cout << "\nWhats the name? -> ";
                cin.ignore();
                getline(cin,itemName);
                cout << "\n Alright so how many " << itemName << " you got? -> ";
                cin >> itemAmount;
                cout << "\nOk I see now how much is one gonna cost me? -> ";
                cin >> itemPrice;
                cout << "\nAlright ill add " << itemName << " to the list";

                itemnode newItem(itemName, itemAmount, itemPrice);
                menu.insertAtBack(newItem);
                break;
            }
                default:
                cout << "\nHol up there cowboy that aint a choice";

        }
    }while(ch != 0);
    cout << "\nThank you for coming to the krusty krab we hope to see you again";


    return 0;
}
