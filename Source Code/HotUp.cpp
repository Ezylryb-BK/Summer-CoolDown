#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string r="";
    bool flag=true;
    cout<<"�� ˵ �� �� ɢ �� �� �� �� �� : "<<endl;
    cout<<endl;
    while (getline(cin,s)){
        for(int i=0;i<s.length();i++){
            r+=s[i];
            if((s[i]&128)==0)
            {
                r+=" ~~~ ";
            }else{
                flag=!flag;
                if(flag){
                    r+=" ~~~ ";
                }
            }
        }
        cout<<endl;
        cout<<endl;
        printf("%s\n",r.c_str());
        cout<<endl;
        cout<<"------�س�����ɢ��------";
        r="";
        getchar();
        system("cls");
        cout<<"�� ˵ �� �� ɢ �� �� �� �� �� : "<<endl;
    }
    return 0;
}

