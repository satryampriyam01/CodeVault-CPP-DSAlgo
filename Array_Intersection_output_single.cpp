// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
/*Given two random integer arrays, print their intersection. That is, print all the elements that are present in both the given arrays.
Input arrays can contain duplicate elements.
Note : Order of elements are not important
Input format :
Line 1 : Integer N, Array 1 Size
Line 2 : Array 1 elements (separated by space)
Line 3 : Integer M, Array 2 Size
Line 4 : Array 2 elements (separated by space)
Output format :
Print intersection elements in different lines
Constraints :
1 <= M, N <= 10^6
Sample Input 1 :
6
2 6 8 5 4 3
4
2 3 4 7
Sample Output 1 :
2
4
3*/

void intersection(int input1[], int input2[], int size1, int size2) {

     sort(input1,input1+size1);
    sort(input2,input2+size2);
    int n=(size1>size2)?size2:size1;
    int i=0,j=0;
    while(i<n || j<n)
    {
       if(input1[i]==input2[j])
       {
           cout<<input1[i]<<endl;
       i++;j++;
       }
        else if(input1[i]<input2[j])
        {
            i++;
        }
        else j++;
    }

}





int main() {

	int size1,size2;

	cin>>size1;
	int *input1=new int[1+size1];

	for(int i=0;i<size1;i++)
		cin>>input1[i];

	cin>>size2;
	int *input2=new int[1+size2];

	for(int i=0;i<size2;i++)
		cin>>input2[i];


	intersection(input1,input2,size1,size2);


	return 0;
}
