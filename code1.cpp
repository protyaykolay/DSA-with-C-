// ---------------------Lecture 3: Conditional Statements & Loops---------------------

#include <iostream>
using namespace std;
int main(){
    int n = 45;

    if (n >= 0){
        cout << "n is positive\n";
    }
    else{
        cout << "n is negative\n";
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int age = 20;
    if (age >= 18){
        cout << "You are eligible to vote\n";
    }else{
        cout << "You are not eligible to vote\n";
    }

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0){
        cout << n << " is even\n";
    }else{
        cout << n << " is odd\n";
    }

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter a marks: ";
    cin >> marks;
    
    if (marks >= 90){
        cout << "Grade A\n";
    }
    else if (marks >= 80 && marks < 90){
        cout << "Grade B\n";
    }
    else{
        cout << "Grade C\n";
    }

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z'){
        cout << ch << " is an uppercase letter\n";
    }
    else if (ch >= 'a' && ch <= 'z'){
        cout << ch << " is a lowercase letter\n";
    }
    else if (ch >= '0' && ch <= '9'){
        cout << ch << " is a digit\n";
    }
    else{
        cout << ch << " is a special character\n";
    }

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 65 && ch <= 90){
        cout << ch << " is an uppercase letter\n";
    }
    else {
        cout << ch << " is a lowercase letter\n";
    }
    return 0;
}    

#include <iostream>
using namespace std;
int main(){
    int n = 45;
    cout << (n >= 0 ? "positive" : "negative") << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 50;
    int count = 1;
    
    while(count <= n){
        cout << count << " ";
        count++;
    }

    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 3;

    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 50;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout <<"sum = "<< sum << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 50;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i;
        if (i == 5){
            break;
        }
    }

    cout <<"sum = "<< sum << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 5;

// Print odd numbers from 1 to n
    
    for(int i = 1; i <= n; i++){
        if (i%2 != 0){
            cout << i << " ";
        }
    }

    cout <<endl;

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int sum = 0;
    
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 10;
    int oddSum = 0;
    
    for(int i = 1; i <= n; i++){
        if(i%2 != 0) {
            oddSum += i;
        }
    }

    cout << "odd sum = " << oddSum << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    
    while(3 > 5){
        cout << "Hello World\n";
    }

    do {
        cout << "Hello World\n";
    } while(3 > 5);

    return 0;
}


#include <iostream>
using namespace std;
int main(){

    int n = 10;
    int i = 1;
    
    do {
        cout << i << " ";
        i++;
    } while(i <= n);

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 7;
    bool isPrime = true;

    for(int i=2; i<n; i++){
        if(n%i == 0){              // non prime number
            isPrime = false;
            break;
        }
    }

    if(isPrime  == true){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main(){

    for(int i=1; i<=5; i++){
        cout << "*****" << endl;
    }   

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 10;
    for(int i=1; i<=n; i++){
            cout << "*";
    }
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    
    for(int i=1; i<=5; i++){        //Line
        int m = 5;
        for(int i=1; i<=m; i++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
