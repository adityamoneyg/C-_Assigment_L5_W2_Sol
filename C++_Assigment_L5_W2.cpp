#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i+=2){
        cout<<i<<endl;
    }
}

//                            2 Solution

#include<iostream>
using namespace std;
int main(){
    for(int i=3;i<=100;i+=3){
        cout<<i<<endl;
    }
}

//                            3 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. for the table: ";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<i*n<<endl;
    }
}

//                            4 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of terms: ";
    cin>>n;
    int ap=4;
    for(int i=1;i<=n;i++){
        cout<<ap<<endl;
        ap+=3;
    }
}

//                            5 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of terms: ";
    cin>>n;
    int ap=3;
    for(int i=1;i<=n;i++){
        cout<<ap<<endl;
        ap*=4;
    }
}

//                            6 Solution

#include<iostream>
using namespace std;
int main(){
    int ascii=65;
    while(ascii<=90){
        cout<<"ASCII value of "<<char(ascii)<<" is "<<ascii<<endl;
        ascii++;
    }
}
