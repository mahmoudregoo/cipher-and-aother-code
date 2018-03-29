#include <iostream>

using namespace std;

int main()
{
    char text[36] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0'};
    string code[36] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"};
    string arr="";
    string word;
    cout <<"1- Cipher a message"<<endl;
    cout <<"2- Decipher a message "<<endl;
    cout <<"3- End "<<endl;
    int n ;
    cout<<">>>";
    cin >> n ;
    if (n==1)
    {
        cout<<"enter the word you want to cipher it :";
        cin.ignore();
        getline(cin,word);
        for(int i=0 ; i<word.size() ; i++)
        {
            for (int j=0 ; j<37 ; j++)
            {
                if (word[i]== text[j])
                {
                    cout<<code[j]<<" ";
                }
            }
            if(word[i]==char(32))
            {
                cout<<"   ";
            }
        }
    }
    else if (n==2)
    {
        string letter, decryption;
        cout<<"enter the word you want to decippher it :";
        cin.ignore();
        getline(cin,word);
        for(int i=0; i< word.size(); i++)
        {
            while (word[i]!=32)
            {

                letter+=word[i];
                i++;
            }
            for(int j=0 ; j<26; ++j)
            {
                if(letter == code[j])
                {
                    decryption += text[j];
                    letter="";
                }
            }
            if (word[i]==32)
            {
                if ((word[i+1]==32 && word[i+2] == 32)||(word[i+1]==32))
                {
                    decryption+=" ";
                }
            }


        }
        cout<<decryption;
    }
    else{


    return 0;
    }
}
