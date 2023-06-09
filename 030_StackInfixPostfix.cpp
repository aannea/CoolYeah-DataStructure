#include<iostream>
#include<stack>
using namespace std;

bool IsOperator(char c)
{
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' )
        return true;
    return false;
}

bool IsOperand(char c)
{
    if( c >= 'A' && c <= 'Z')
        return true;
    if (c >= 'a' && c <= 'z')
        return true;
    if(c >= '0' && c <= '9')
        return true;
    return false;
}


int precedence(char op)
{
    if(op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if(op == '^')
        return 3;
    return 0;
}

bool eqlOrhigher (char op1, char op2)
{
    int p1 = precedence(op1);
    int p2 = precedence(op2);
    if (p1 == p2)
    {
        if (op1 == '^' )
            return false;
        return true;
    }
    return  (p1>p2 ? true : false);
}

string convert(string infix)
{
    stack<char> S;
    string postfix = "";
    char ch;

    S.push( '(' );
    infix += ')';

    for(int i = 0; i<infix.length(); i++)
    {
        ch = infix[i];

        if(ch == ' ')
            continue;
        else if(ch == '(')
            S.push(ch);
        else if(IsOperand(ch))
            postfix += ch;
        else if(IsOperator(ch))
        {
            while(!S.empty() && eqlOrhigher(S.top(), ch))
            {
                postfix += S.top();
                S.pop();
            }
            S.push(ch);
        }
        else if(ch == ')')
        {
            while(!S.empty() && S.top() != '(')
            {
                postfix += S.top();
                S.pop();
            }
            S.pop();
        }
    }
    return postfix;
}

int main()
{
    string infix, postfix, prefix;
    char lagi;
    do
    {
        cout << " Masukkan Notasi Infix : ";
        cin >> infix;
        postfix = convert(infix);
        cout << "Notasi Infix : " << infix << endl;
        cout << "Notasi Postfix : " << postfix << endl;
        cout << "Mau memasukkan Notasi Infix lagi (y/t)? : ";
        cin >> lagi;
    }while(lagi == 'y');

return 0;
}
