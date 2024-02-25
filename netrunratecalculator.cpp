#include <bits/stdc++.h>
using namespace std;

float nrr(int score1, int b1, int score2, int b2) {
    int o1=b1/6,o2=b2/6;
    float bo1=b1%6,bo2=b2%6;
    float nrr = ((float)score1 / (float)(o1+(bo1/6))) - ((float)score2 / (float)(o2+(bo2/6)));
    return nrr;
}

int main() {
    int s1 = 0, s2 = 0;
    int b1 = 0, b2 = 0;
    float ar1=0,ar2=0;
    float rate = 0;
    string name1,name2;
    cout<<"Name of winning team:";
    cin>>name1;
    cout << "score:";
    cin >> s1;
    cout << "Balls played:";
    cin >> b1;
     cout<<"runrate of "<<name1<<"(the runrate till now):";
    cin>>ar1;
     cout<<"Name of losing team:";
    cin>>name2;
    cout << "score:";
    cin >> s2;
    if(s2>s1){
        cout<<"I am not an idiot , How can a losing team have a high score?🤨";
        return 0;
    }
    cout << "Balls played:";
    cin >> b2;
    cout<<" runrate of "<<name2<<"(the runrate till now):";
    cin>>ar2;
    rate = nrr(s1, b1, s2, b2);
    cout << "Run rate of "<<name1<<" team:" << rate+ar1 << endl;
    cout << "Run rate of "<<name2<<" team:" << (-1 * rate)+ar2 << endl;
    return 0;
}
