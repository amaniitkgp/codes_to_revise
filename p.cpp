//# program to generate a sequence of length l from the elemnts in array A


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void generate_sequence(int * A, int n, int len,int *B,int k){
if(len==0)	{
for(int i=0;i<k;i++)
	cout<<B[i]<<" ";
cout<<endl;}
else{
int i=0;
	while(i<n){
	B[k-len]=A[i];
	generate_sequence(A,n,len-1,B,k);
	i++;
	}

}


}

int main()
{

	//n=size of array A;
	// Array A contains the integers which we are going to use to create sequence
	//len = the length of sequence you wish to create
	// B = the array where the created sequence will be stored
	// k= size of array B, k=len (inital value of len )
	
	
	
	
	int k,len,n;
	cin>>n>>len;
	k=len;
	int *A=(int *)malloc( n*sizeof(int));
	int *B=(int *)malloc( k*sizeof(int));
	cout<<"Enter "<<n <<" array elements \n";
	int i=0;
	for(i;i<n;i++)
		cin>>A[i];
	generate_sequence(A,n,len,B,k);
	
return 0;
}
