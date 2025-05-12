#include<iostream>
using namespace std;

struct info {
    char name[10];
    int age;
    float len;
}s1;   /// never forget semi colon


typedef struct {} second; // u can use typedef and name be before semicolon

int main() {


     s1 = {{},18, 13.4};
    // when assign values directly when cant make this { leave empty ,18, 13.4}
    // in case of array put {}


    info s2 = {{},.age = 18, .len = 12.7 };   // .name = value
    // {  .len = 12.7 , .age = 18 } error arrangment is imp


    struct info s3 = {age : 20 };  // name : value


    info s4 ;
    cin>>s4.age;
    cin>>s4.len;
    cin.ignore(); // to ignore the enter press
    cin.getline(s4.name,10);

    cout<<s4.name<<" "<<s4.age<<" "<<s4.len<<endl;




    /////////////////important notes //////////////////////////


   // cout<<(s1 == s2 ? "y" : "N")<<endl;  struct cannot be compared


   s1 = s2 ; /// move the data from struct to another

}
