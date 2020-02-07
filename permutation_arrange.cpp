#include<iostream>
using namespace std;

void permute(char str[],int first,int end);

int main()
{
	int n;
    
    cout<<"Enter number of characters ";
    cin>>n;
    
	char *array=new char[n+1];
    char a='A';
	array[n]='\0';

    for(int i=0;i<n;i++)
    {
        array[i]=a++;
    }


    permute(array,0,n-1);
 
    return 0;
}


void permute(char str[],int first,int end)
{
    if(first==end)
    {
        
            cout<<str;
        
        cout<<"\n";

    }

    else
    {
        for(int i=first;i<=end;i++)
        {
            swap((str[first]),(str[i]));
            
            permute(str,first+1,end);	//recusion
            
            swap((str[first]),(str[i]));
        }


    }
}
