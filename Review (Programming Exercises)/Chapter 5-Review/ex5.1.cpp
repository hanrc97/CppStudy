#include <iostream>
#include<string>
using namespace std;
int main(){
    string month[12]={"Jan", "Feb", "Mar", "Apr"
        , "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"      
    };
    //此处用char数组太麻饭，学会变通使用string。
    //严格要求使用分号结尾 
    int sale[12];
    for(int i=0;i<12;i++) {
        cout<<"Please enter sales for "<<month[i]<<": ";
        cin>>sale[i];
    }
    int sum=0;
    for(int i=0;i<12;++i){
        sum+=sale[i];
    }
    cout<<"So,Annual sales is: "<<sum<<" ."<<endl;
    cout<<"Monthly sales are as follows:"<<endl;
    for(int i=0;i<12;++i){
        cout<<month[i]<<" : "<<sale[i]<<endl;
    }
}
