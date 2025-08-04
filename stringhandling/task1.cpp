#include "stringhandling.h"
#include <iostream>
using namespace std;

int main()
{
    int n;
    char src[100];
    cin.getline(src, 100);
    int i = strlength(src);
    cout << i << endl;
    char dest[100];
    cin>>dest;
    int re = strcampare(dest,src);
if (re)
{
   cout<<"same"<<endl;
}else{
    cout<<"Not same  ";
}

    strcopy(dest,src);
    cout<<dest<<endl;

    strconcat(dest,src);
    cout<<dest<<endl;
    char a;
    cin >> a;
   int r = strchar(src,a);
   if(r == -1){
    cout<<"character in not found"<<endl;
   }else{
    cout<<"Character is on the "<<r<<endl;
   }

    int ra = strstre(src,dest);
    cout<<ra<<endl;
    reverse_inplace(src);
    cout<<src<<endl;

    if(is_palindrome(src)){
        cout<<"this is plaindrome";
    }else{
    cout<<"this is not plaindrome";
    }

     int count = count_words(src);
     cout<<count;
    return 0;
}