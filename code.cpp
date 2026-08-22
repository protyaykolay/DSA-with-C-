//-------------Lecture 2 : Variable, Data Types & Operators----------------

Boilerplate Code

#include <iostream>
using namespace std;

int main(){
    cout << "Hello World\nProtyay Kolay" << endl;
    return 0;
}


Primitive Data Types 

#include <iostream>
using namespace std;

int main(){
    int age = 20;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = true;
    double price = 100.50;

    cout << age << endl;
    cout << sizeof(age) << endl;
    cout << PI << endl;
    cout << isSafe << endl;      // 1 for true and 0 for false
    cout << price << endl;
    return 0;
}

Type Conversion & Type Casting

#include <iostream>
using namespace std;

int main(){
    char grade = 'A';
    int value = grade; // Implicit Type Conversion
    cout << value << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    double price = 100.98;
    int newprice = (int)price;
    cout << newprice << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    double price;
    cout << "Enter the price: ";
    cin >> price;
    cout << "The price is: " << price << endl;

    return 0;
}

Operators 
#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 5;

    cout << "Sum = " << (a + b) << endl;
    cout << "Difference = " << (a - b) << endl;
    cout << "Product = " << (a * b) << endl;
    cout << "Quotient = " << (a / b) << endl;   //2
    cout << "Remainder/Modulus = " << (a % b) << endl;    //0
    cout << (5/2) << endl;   //2
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int a = 5;
    double b = 2;

    cout << (a / b) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){

    cout << (5 / (double)2) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int ans = (5 / (double)2);

    cout << ans << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main(){

    cout << (3 < 5) << endl;      // true => 1
    cout << (3 > 5) << endl;     // false => 0
    cout << (3 <= 3) << endl;    // true => 1
    cout << (3 == 3) << endl;    // true => 1
    cout << (3 == 5) << endl;    // false => 0
    cout << (3 != 5) << endl;    // true => 1
    cout << (3 != 3) << endl;    // false => 0
    return 0;
}

#include <iostream>
using namespace std;

int main(){

    cout << !(3 > 1) << endl;      // false => 0
    cout << !(3 < 1) << endl;      // true => 1
    return 0;
}

#include <iostream>
using namespace std;

int main(){
      
    cout << ((3 < 1) || (3 < 5))<< endl;      // true => 1
    cout << ((3 < 1) && (3 < 5))<< endl;      // false => 0
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a: "; 
    cin >> a;
    
    cout << "Enter b: ";
    cin >> b;

    int sum = a + b;
    cout << "Sum = " << sum << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int a = 10; 

    int b = a++;    // Kaam, update, print
    cout <<"b = " << b << endl;   // 10
    cout <<"a = " << a << endl;   // 11
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int a = 10; 

    int b = ++a;    // update, kaam, print
    cout <<"b = " << b << endl;   // 11
    cout <<"a = " << a << endl;   // 11
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int a = 10; 

    int b = --a;    // update, kaam, print
    cout <<"b = " << b << endl;   // 9
    cout <<"a = " << a << endl;   // 9
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int a = 10; 

    int b = --a;    // update, kaam, print
    cout <<"b = " << b << endl;   // 10
    cout <<"a = " << a << endl;   //  9  
    return 0;
}




