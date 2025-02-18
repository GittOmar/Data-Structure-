#include<iostream>
#include<string>

using namespace std;

int main()
{
    string nameS ;
    char   nameCh[10];

     /// get line
     cout<<"_____"<<"get line"<<endl;




    getline(cin,nameS); /// getline for string
    cin.getline(nameCh,4); /// getline for char array and it will take 3


    cout<<nameS<<"  "<<nameCh<<endl;

    /// string.length()
    cout<<"_____"<<"string.length()"<<endl;



    cout<<nameS.length()<<endl;


    /// Append string or concate.   (string.append)
    cout<<"_____"<<"Append string or concate.   (string.append)"<<endl;


    string a = "hi";
    string b = "bro";

    string c = a+" "+b; /// method 1 -> using addition operator
    cout<<c<<endl;

    c.append(" ohyaaa"); /// method 2 ->  using function
    cout<<c<<endl;


    /// sub string (string.substr)
     cout<<"_____"<<"sub string (string.substr)"<<endl;


    string A = "0123456789";
    cout<<A.substr(3,2)<<endl;  /// start from index 3 then count from '3' 2 char -> 34
    cout<<A.substr(4,5)<<endl; ///45678


  ///string.swap
  cout<<"_____"<<"string.swap"<<endl;


  string u = "uUu";
  string y = "yYy";

  u.swap(y);
  cout<<u<<"  "<<y<<endl;



  /// string.insert()
  cout<<"_____"<<"string.insert()"<<endl;

  string s = "abcdefg";
  s.insert(2,"***"); /// before index 2 add this string
  cout<<s<<endl;


  /// string.find()
  cout<<"_____"<<"string.find()"<<endl;

  string k ="i love cats and cars";
  cout<<k.find("ca")<<endl;
  cout<<k.find("ca",k.find("ca")+1)<<endl; /// start to search form index x
  cout<<k.find("q")<<endl; /// value of not find =  string::npos


  ///string.rfind()
  cout<<"_____"<<"string.rfind()"<<endl;
  cout<<k.rfind("ca")<<endl;


  //////////////////////////////////////////////////

  /// string compare
cout<<"_____"<<"string compare"<<endl;
  string aa ="abc";
  string bb ="abd";

  cout<<(aa>bb)<<endl; //0
  cout<<(aa==aa)<<endl;//1
  cout<<(aa<bb)<<endl;// 0




 /** string s1, s2, s3,s4,s5;
getline
(cin,s1); //enter s1="new c++c++"
getline
(cin,s2); // enter s2="
cout<<"s1 "<< endl <<"s2 "<< endl<<endl;
int k1=s1.length(); int k2= s2.length();
cout<<"length of s1= "<<k1<<" length of s2= "<< endl<<endl;
s3=s1.substr(4,3);
cout<<"substring s3 "<< endl<<endl;
if(s1==s2)
cout <<" endlendl";
else if(s1>s2)
cout <<"s1 is greater than endlendl";
else cout <<"s1 is smaller than endlendl";*/

}
