#include <iostream>
using namespace std;

int main() {

    struct Sales_data {

      // constructors added
      Sales_data() = default;
      Sales_data(const string &s): bookNo(s) { }
      Sales_data(const string &s, unsigned n, double p):
      bookNo(s), units_sold(n), revenue(p*n) { }

      Sales_data(istream &);

      // other members as before
      string isbn() const { return bookNo; }
      Sales_data& combine(const Sales_data&);
      double avg_price() const;
      string bookNo;
      unsigned units_sold = 0;
      double revenue = 0.0;
      
    };

    class Sales_data {
        public: // access specifier added
            Sales_data() = default;
            Sales_data(const string &s, unsigned n, double p):
            bookNo(s), units_sold(n), revenue(p*n) { }
            Sales_data(const string &s): bookNo(s) { }
            Sales_data(istream&);
            string isbn() const { return bookNo; }
            Sales_data &combine(const Sales_data&);

        private: // access specifier added
            double avg_price() const { 
                return units_sold ? revenue/units_sold : 0; 
            }
            
            string bookNo;
            unsigned units_sold = 0;
            double revenue = 0.0;
    };

    

    return 0;
}