#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
int room[3][3],i,j;
cout<<"enter 0 for clean room and 1 for dirty room\n";
for(i=0;i<3;i++){
for(j=0;j<3;j++){
cin>>room[i][j];
}
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
cout<<room[i][j]<<"\t";
}
cout<<"\n";
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
if(room[i][j]==0){
cout<<"cleaning not required\n";
}
else{
cout<<"cleaning required apply vacuum\n";
room[i][j]=0;
cout<<"the room is set to 0\n";
}
}
}
cout<<" the data of the room after cleaning the room\n";
for(i=0;i<3;i++){
for(j=0;j<3;j++){
 cout<<room[i][j]<<"\t";
}
cout<<"\n";
}
return 0;
}