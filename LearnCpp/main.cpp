//
//  main.cpp
//  LearnCpp
//
//  Created by admin on 2021/3/21.
//

#include <iostream> // a preprocess directive

int main(int argc, const char * argv[])
{
    using namespace std;
//    cout << "Come up and C++ me some time.";
//    cout << endl; // start a new line
//    cout << "You won't regret it!" << endl;
    
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are you more. ";
    carrots = carrots + 2;
    cout << "Now you have "
         << carrots
         << " carrots."
         << endl;
    return 0;
}

//original C style
//default return int
//main() {
//    return 0;
//}


