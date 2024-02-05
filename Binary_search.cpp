#include <iostream>

using namespace std;



int startsearch(int input[],int se,int en,int element)
{
    if(se>en)
        return -1;

    int mid=(se+en)/2;

        if(input[mid]==element)
        return mid;

    else if(input[mid]<element)
        return startsearch(input,mid+1,en,element);

    else
        return startsearch(input,se,mid-1,element);


}
int binarySearch(int input[], int size, int element) {

if(size==0)
    return -1;
   int se=0;

    int ans=startsearch(input,se,size-1,element);
return ans;
}


int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    {
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
