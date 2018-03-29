#include <iostream>
#include <string>
using namespace std;

int main()
{
        char asc [28] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char des [28] = {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
    string word;
    int x;
    cout<<"if you want to code a massege press (1)"<<endl;
    cout<<"if you want to code a massege press (2)"<<endl;
    cin>>x;
    while(x!=1 && x!=2){
        cout<<"wrong number"<<endl;
    cout<<"if you want to code a massege press (1)"<<endl;
    cout<<"if you want to code a massege press (2)"<<endl;
    cin>>x;
    }
    if (x==1){
    cout<<"enter the word you want to codeit:";
    cin.ignore();
    getline(cin, word);


        for(int j=0 ; j<=word.size() ; j++)
        {
            for(int i=0 ; i<=27 ; i++)
            {
                if(word[j]==' ')
                {
                    cout<<" ";
                }
                if(word[j]==asc[i])
                {
                    cout<<des[i];
                }
            }

        }
    }
    if (x==2)
    {
            cout<<"enter the word you want to decode it:";
            cin.ignore();
            getline(cin, word);


        for(int j=0 ; j<=word.size() ; j++)
        {
            for(int i=0 ; i<=27 ; i++)
            {
                if(word[j]==' ')
                {
                    cout<<" ";
                }
                if(word[j]==des[i])
                {
                    cout<<asc[i];
                }

            }
        }
    }
    return 0;
}
