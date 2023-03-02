#include<iostream>
using namespace std;
float converter(){
     float ammount; 
    cout<<"++++++++++++++++++Enter the ammount you wants to convert in bitcoin+++++++++++++++++++"<<endl;
    cin>>ammount;
    float bit=ammount/24000;  
    cout<<"You Can Buy  Bitcoins   "<<bit<<"   With Much of Dollar "<<ammount;
    return bit;
}
int main(){
cout<<"++++++++++++++++++You Can Estimate How Much BitCoin YOu Can Buy In X Number Of Dollars+++++++++++++++++++"<<endl;
cout<<"+++++++++Press C to Start+++++++++++++"<<endl;
string ruun;
cin>>ruun;
if (ruun=="c" || ruun=="C")
{
    float value =converter();
   
}
else{
    cout<<"You Have Enter worng value";
};
return 0;

}


