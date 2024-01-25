
#include <iostream>
using namespace std;

string stack, infix, postfix;
int i = 0, j = 0, k = 0, m = 0;
char ch;

void pop(char ch) {}

int precedence(char ch) {
  if (ch == '+' || ch == '-') {
    return 1;
  } else if (ch == '*' || ch == '/') {
    return 2;
  } else
    return 3;
}

int isOperator(char ch) {
    cout << ch<< "2" <<endl;
  if (ch == '/' || ch == '*' || ch == '-' || ch == '+') {
    return 1;
  } else
    return 0;
}

void infToPos(string infix) {
  while (infix[m] != '\0') {
       cout << m << "1" << endl;
    if (isOperator(infix[m]) == 0) {
    cout << isOperator(infix[m]) << "3" << endl;
      postfix[j] = infix[m];
    //   cout << postfix[j];
      j++;
    //   cout << postfix[j];
    cout << infix[m] << "4" <<endl;
    cout << m << "5" << endl;
     cout << "c6" << endl;
     cout << endl;
    }
    if (isOperator(infix[i]) == 1) {
        cout << "c" << endl;
      if (k > 0) {
        // stack[k] = ch;
        // k++;
        if (precedence(stack[k]) <= precedence(stack[k - 1])) {
          int temp;
          temp = k;
          do {
            pop(stack[k]);
            k--;
          } while (precedence(stack[k]) == 1);
        }
      }
      stack[k] = infix[m];
      cout<< stack[k];
    }
    m++;
  }
}

int main() {
  cout << "Enter infix  expression" << endl;
  cin >> infix;
  infToPos(infix);
  // cout << postfix << endl;

  return 0;
}
