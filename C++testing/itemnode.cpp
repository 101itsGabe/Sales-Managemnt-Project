#ifndef ITEMNODE_H
#define ITEMNODE_H
#include "itemnode.h"

#include <utility>

 itemnode::itemnode(const itemnode& i): nextPtr(nullptr), prevPtr(nullptr){
    name = i.getName();
    price = i.getPrice();
    amount = i.getAmount();
    totalSold = i.getTotalSold();
    totalProf = i.getTotalProfit();
}

itemnode::itemnode(const string n, const int a, const double p)
{
    name = n;
    amount = a;
    price = p;
    totalSold = 0;
    totalProf = 0;
}


void itemnode::setTotalSold(int t) {
    totalSold = t;
}

string itemnode::getName() const{
    return name;
}

double itemnode::getPrice() const{
    return price;
}

int itemnode::getAmount() const{
    return amount;
}

int itemnode::getTotalSold() const{
    return totalSold;
}

int itemnode::getidPlace() const{
    return idPlace;
}

double itemnode::getTotalProfit() const{
    return totalProf;
}

void itemnode::setName(string n) {
    name = n;
}

void itemnode::setAmount(int a) {
    amount = a;
}

void itemnode::setPrice(double p) {
    price = p;
}


void itemnode::setidPlace(int n)
{
    idPlace = n;
}

void itemnode::setTotalProfit(double p) {
    totalProf = p;
}

#endif
