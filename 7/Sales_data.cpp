#include<bits/stdc++.h>
using namespace std;

class Sales_data{
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data);
    double avg_price()const ;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

double Sales_data::avg_price() const {
    if(units_sold) return revenue / units_sold;
    return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read(istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, Sales_data &item) const {
    os << item.isbn() << ' ' << item.units_sold << ' ' << item.revenue <<
     ' ' << item.avg_price()
    return os;
}

int main(){

    return 0;
}