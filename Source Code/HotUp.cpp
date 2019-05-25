#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string r="";
    bool flag=true;
    cout<<"听 说 酱 紫 散 热 比 较 带 感 :  "<<endl;
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
        cout<<"------回车继续散热------";
        r="";
        getchar();
        system("cls");
        cout<<"听 说 酱 紫 散 热 比 较 带 感 :  "<<endl;
    }
    return 0;
}

