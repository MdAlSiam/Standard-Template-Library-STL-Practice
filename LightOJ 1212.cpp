#include <bits/stdc++.h>
using namespace std;

list<int> li;
int test, kase = 0;
int sz, op;

int main(){

    scanf("%d", &test);

    while(test--){
    printf("Case %d:\n", ++kase);
    li.clear();

    scanf("%d %d", &sz, &op);
    while(op--){
        string opcode;
        int operand;
        cin >> opcode;

        if(opcode == "pushLeft"){
            scanf("%d", &operand);
            if(li.size() < sz){
                li.push_front(operand);
                printf("Pushed in left: %d\n", operand);
            }
            else{
                printf("The queue is full\n");
            }
        }
        else if(opcode == "pushRight"){
            scanf("%d", &operand);
            if(li.size() < sz){
                li.push_back(operand);
                printf("Pushed in right: %d\n", operand);
            }
            else{
                printf("The queue is full\n");
            }
        }
        else if(opcode == "popLeft"){
            if(li.size() > 0){
                printf("Popped from left: %d\n", li.front());
                li.pop_front();
            }
            else{
                printf("The queue is empty\n");
            }
        }
        else if(opcode == "popRight"){
            if(li.size() > 0){
                printf("Popped from right: %d\n", li.back());
                li.pop_back();
            }
            else{
                printf("The queue is empty\n");
            }
        }
    }

    } //end of test
}
