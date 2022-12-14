/************************************************************************************************************
 * Code For Obstacle Avoidance 
 * if we give input as "1", then it means Obstacle is detected (have to stop their).
 * if we give input as "0", then it means no Obstacle detected (have to move forward).
 * there are 2 function 
     1.for moving forward direction
     2.for check left right direction
 ************************************************************************************************************/

#include<iostream>
using namespace std;

int is_obstacle;

void forward();
void check_left_right();

int main()
{   
    forward();
    return  0;
}

void forward()
{
    
    while(is_obstacle != 2)
    {
        cout<<"--------------------------------------------------------------\n";
        cout<<"Give Input for Forward Direction :\n0 = Move Forward\t1 = !!Stop!! Obstacle Detected\n";
        cout<<"--------------------------------------------------------------\n";
        cout<<"Your Input is  : ";
        cin>>is_obstacle;
        
        if(is_obstacle == 1)
        {
            cout<<"Your Output is : Stop\n";
            cout<<"--------------------------------------------------------------\n";
            check_left_right() ;           
        }
        else
        {
            cout<<"Your Output is : Move Forward\n";
            cout<<"--------------------------------------------------------------\n";
        }
        
    }
}

void check_left_right()
{
    int is_obstacle_left,is_obstacle_right;
    cout<<"Give Input for Choose\nLeft   Right : Your Direction\n"; 
    cout<<"0\t0    : Move right \n0\t1    : Move left \n1\t0    : Move Right \n1\t1    : Move Back"<<endl;
    cout<<"--------------------------------------------------------------\n";
    cout<<"Your Left Input is  : ";
    cin>>is_obstacle_left;
    cout<<"Your Right Input is : ";
    cin>>is_obstacle_right;
    cout<<"--------------------------------------------------------------\n";
    cout<<"Left Input Received : "<<is_obstacle_left<<endl;
    cout<<"Right Input Received: "<<is_obstacle_right<<endl;
    cout<<endl;
    while(is_obstacle_left != 2 && is_obstacle_right !=2 )
    {
       
        if(is_obstacle_left == 0 && is_obstacle_right == 0)
        {
            cout<<"Your Output is : Move Right\n";
            forward();
        }
        else if(is_obstacle_left == 0 && is_obstacle_right == 1)
        {
            cout<<"Your Output is : Move left \n";
            forward();
        }
        else if(is_obstacle_left == 1 && is_obstacle_right == 0)
        {
            cout<<"Your Output is : Move Right\n";
            forward();
        }
        else if(is_obstacle_left == 1 && is_obstacle_right == 1)
        {
            cout<<"Your Output is :  Back\n";
            forward();
        }
        else
        {
            cout << "Stop";
        }
    }
}

