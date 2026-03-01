#include<iostream>
using namespace std;
int main()
{
    int A[3][3];
    int B[3][3];
    //for A matrix input
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<"Enter the elements for A["<<row<<"]["<<col<<"]:";
            cin>>A[row][col];
        }
    }
    //for A matrix print
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<A[row][col]<<"\t";
        }
        
        cout<<endl;
    }
    //for B matrix input
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++)
        {cout<<"Enter the elements for B["<<row<<"]["<<col<<"]:";
            cin>>B[row][col];}
    }
    //for B matrix print
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<B[row][col]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}


 hiiiii
