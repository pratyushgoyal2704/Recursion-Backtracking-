#include<iostream>
using namespace std;
void permute(char *a,int i){

    // Base case
    if(a[i]=='\0'){
        cout<<a<<",";
        return;
    }

    //Recursive case
    for(int j = i; a[j]!='\0' ; j++){
        swap(a[i],a[j]);
        permute(a,i+1);
        swap(a[i],a[j]); //Backtracking
    }


}
int main(){

    char a[100];
    cin>>a;

    permute(a,0);
    return 0;


}
