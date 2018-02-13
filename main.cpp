#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number=0;
    int sum=0;
    cout<<"WELCOME TO THE 100 GAME\n";
    cout<<"the rules are simple : \n";
    cout<<"1-choose a number from (1-10)\n";
    cout<<"2-the player to get the number 100 wins\n\n\n\n\n";
    char x;
    cout<<"press s to start : ";
    cin>>x;
    while (x!='s')
    cin>>x;
    int y;
    cout<<"for 1 player write 1 then press enter for 2 players write 2 then press enter key : \n";
    cin>>y;
   while (y!=(1||2))
      cin>>y;
       while (true){
        cin>>y;
    if ((y == 1) || (y == 2))
            break;
    }
//}

    if (y==1){
        int first;
        int pc;
        while (sum!=100 || sum<100){
            cout<<"YOUR TURN \N enter a number from (1-10) : ";
            cin>>number;
            while (number<=0 || number>10){
                cout<<"INVALID enter a number again : ";
            cin>>number;}
            sum=sum+number;
            cout<<"SUM = "<<sum<<endl;
            if (sum==100 || sum>100){
                cout<<"first person wins!!!";
                return 0;}
            cout<<"PC TURN \n";
            if (70-sum>10)
                pc=10;
                else if (70-sum>0)
                    pc=70-sum;
                else if ((78-sum<10)&&(78-sum>0))
                     pc=78-sum;
                else if ((89-sum<=10)&& (89-sum>0))
                    pc=89-sum;
                else if (100-sum<=10)
                    pc=100-sum;
                sum=sum+pc;
                cout<<"SUM = "<<sum<<endl;
            if (sum==100 || sum>100)
                cout<<"PC WINS";
        }

    } else{
        int first;
        int second;
        while (sum!=100){
            cout<<"FIRST PLAYER TURN";
            cout<<"ENTER A NUMBER (1-10) : ";
            cin>>first;
            while (first<=0 || first>10){
                cout<<"INVALID NUMBER enter a new one (1-10)";
                cin>>first;}
            sum=sum+first;
            if (sum==100 || sum>100){
                cout<<"FIRST PLAYER WINS!!!";
                return 0;
            }
            cout<<"sum = "<<sum<<endl;
            cout<<"SECOND PLAYER TURN";
            cout<<"ENTER A NUMBER (1-10) : ";
            cin>>second;
            while (second<=0 || second>10){
                cout<<"INVALID NUMBER enter a new one (1-10)";
                cin>>second;}
            sum=sum+second;
            if(sum==100 || sum >100){
                cout<<"SECOND PLAYER WINS!!!";
            }
            cout<<"sum = "<<sum<<endl;
            }





        }


}
