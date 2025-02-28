#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
void Inventory(const std::map<std::string, int>&Products){
        std::cout<<"Inventory:"<<std::endl;
        for (const auto& item:Products){
            std::cout <<item.first<<":"<<item.second<< "\n";
        }
        std::cout<<std::endl;
}
int main (){
    std::map<std::string, int>Products;
    Products["Apples"]= 15;
    Products["Shirts"]= 10;
    Products["Laptops"]= 10;
    Products["Tv"]= 5;
    Inventory(Products);
 
    std::set<std::string> Category;
    Category.insert("Food");
    Category.insert("Electronics");
    Category.insert("Clothing");
    std::cout<<"Categories:\n";
    for(const auto&item:Category){
        std::cout<<item<<"\n";
    }
    
    std::queue<std::string> orders;

    orders.push("Order#1: Shirt");
    orders.push("Order#2: Laptop");
    orders.push("Order#3: Tv");

    while (!orders.empty()) {
        std::cout << "Processing " << orders.front() << std::endl;
        orders.pop();
    }

    std::stack<std::pair<std::string, int>> invent;

    invent.push({"Shirt", 10});
    invent.push({"Laptop", 20});
    invent.push({"Tv", 15});

    while (!invent.empty()) {
        auto product = invent.top();
        std::cout << "Adding " << product.second << " " << product.first << "s to stock" << std::endl;
        invent.pop();
    }
    std::vector<std::string> purchases;

    purchases.push_back("shirt");
    purchases.push_back("Laptop");
    purchases.push_back("Tv");

    std::cout << "Items selling:\n";
    for (const auto& item : purchases) {
        std::cout << "- " << item << "\n";
    }

    return 0;
}
