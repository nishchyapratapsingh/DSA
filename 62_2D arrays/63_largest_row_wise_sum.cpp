//Largest Row wise sum row
#include<iostream>
using namespace std;
int main(){
int twoDArray[4][4];
for (int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cin>>twoDArray[i][j];
    }
}
int largest_sum=INT_MIN;
int row_index=-1;
for (int i=0;i<4;i++){
    int sum=0;
    for(int j=0;j<4;j++){
        sum+=twoDArray[i][j];
    }
    if(sum>largest_sum){
        largest_sum=sum;
        row_index=i;
    }
}
cout<<row_index+1;
return 0;
}
