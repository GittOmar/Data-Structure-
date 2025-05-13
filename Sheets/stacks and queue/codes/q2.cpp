#include<iostream>
#include"stackL.h"
using namespace std;


bool balance_ch(string word)
{
    stack<char> l;

    for(int i =0;word[i]!=0;i++)
    {
        if(word[i] == '{' || word[i] == '[' || word[i] == '<' || word[i] == '(')
            {
                l.push(word[i]);
            }

        else if(word[i] == '}' || word[i] == ']' || word[i] == '>' || word[i] == ')')
        {
            if(l.isEmpty())return 0;
            else if(word[i] == '}' && l.top()!= '{')return 0;
            else if(word[i] == ')' && l.top()!= '(')return 0;
            else if(word[i] == '>' && l.top()!= '<')return 0;
            else if(word[i] == ']' && l.top()!= '[')return 0;
            else l.pop();
        }
    }
    return l.isEmpty();
}

int main()
{
   string word;
   cin>> word;
   cout<<balance_ch(word);
}
