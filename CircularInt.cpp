#include <iostream>
#include <string>
#include "CircularInt.hpp"
using namespace std;

CircularInt :: CircularInt (int x1, int y1){
    this -> first = x1;
    this -> last = y1;
    num = first;
}
CircularInt CircularInt :: operator+ (const CircularInt &circ){
    CircularInt ans = *this;
    ans.add(circ.num);
    return ans;
}
CircularInt operator+ ( CircularInt &circ, const int &x){
    CircularInt ans = circ;
    ans.add(x);
    return ans;
}
CircularInt operator+ (const int &x ,const CircularInt &circ){
    CircularInt ans = circ;
    ans.add(x);
    return ans;
}
CircularInt operator- (const CircularInt &circ){
    CircularInt ans = circ;
    ans.num = -ans.num;
    ans.fix();
    return ans;
}
CircularInt operator- (const int &x ,const CircularInt &circ){
    CircularInt ans = circ;
    int y = ans.num;
    ans.num = x;
    ans.minus(y);
    return ans;
}
CircularInt CircularInt :: operator- (const int &x){
    CircularInt ans = *this;
    ans.minus(x);
    return ans;
}
CircularInt CircularInt :: operator* (const int &x){
    CircularInt ans = *this;
    ans.num *= x;
    ans.fix();
    return ans;
}
CircularInt& CircularInt :: operator*= (const int &x){
    *this = *this * x;
    fix();
    return *this;
}
// CircularInt CircularInt :: operator/ (const CircularInt &circ, const int &x){
// 	CircularInt ans = circ;
// 	if(ans.num % x == 0){
// 		ans.num = ans.num / x;
// 	}
// 	else {
// 		//"There is no number x in {1,12} such that x*3=10"
// 		string str = "There is no number x in {";
// 		string end = NumberToString(circ.last);
// 		string start = NumberToString(circ.first);
// 		string num = NumberToString(circ.num);
// 		string x = NumberToString(x);
// 		string message = str + start + "," + end + "} such that x*" + x + "=" + num ;
//         throw message;
//     }
// }
CircularInt& CircularInt :: operator+= (const int &x){
    CircularInt ans = *this;
    ans.add(x);
    return ans;
}
CircularInt& CircularInt :: operator++ (){
    (*this) += 1;
    return *this;
}
CircularInt CircularInt :: operator++ (int){
    CircularInt ans = *this;
    (*this) += 1;
    return ans;
}
// ostream &operator<<(ostream &ost){
//     ost << num;
//     return ost;
// }
std::ostream &operator<<(ostream &ost, CircularInt &m){
    ost << m.num;
    return ost;
}
std::ostream& operator<<(std::ostream& ost, CircularInt const& r){
    ost << r.num;
    return ost;
}	
void CircularInt :: add(int x){
    num += x;
    fix();
}
void CircularInt :: minus(int x){
    num -= x;
    fix();
}
void CircularInt :: fix(){
    while (num < first){
            num = num + (last - first + 1);
    }
    while (num > last){
            num = num - (last - first + 1);
    }
}
