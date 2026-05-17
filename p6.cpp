#include<iostream>
#include<string>
using namespace std;
int main (){
    string username,password;
    std :: cout << "Enter Username :";
    std :: cin >> username;
    std :: cout << "Enter Password :";
    std :: cin >> password;
    if(username == "admin" && password == "1234")
    cout <<"Login Succesfull";
     else
    cout << "Wrong Username and Password";
    return 0;



}