#include<iostream>
using namespace std;
int pow(int a, int b){
 int   answer=1;
 
    cin>>a>>b;
 
    for (int  i = 1; i <=b; i++)
    {
        answer=answer*a;
        
        /* code */
    }
    return answer;

}
int main(){
    int answer;
    cout<<"answer is"<<answer;
    return 0;

}