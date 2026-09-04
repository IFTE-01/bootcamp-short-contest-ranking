#include<bits/stdc++.h>
#include "bootcamp_student_info.cpp"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

using ll = long long int;
using ull = unsigned long long int;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> vset;
typedef tree<ll, null_type, greater_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> rvset;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> pset;
typedef tree<pair<ll,ll>, null_type, greater<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> rpset;
// *s.find_by_order(k) -> kth elemnet , order_of_key -> number of smaller elements
///less -> a, greater -> d, less_equal -> not unique
///vset s; if(s.find(value)!=s.end()) s.erase(s.find(value));
#define   endl       '\n'
#define   si(x)      (ll)(x).size()
#define   all(x)     x.begin(),x.end()
#define   rall(x)    x.rbegin(),x.rend()
#define   pq         priority_queue

///priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>q;
#define   mem(a, b)   memset(a, b, sizeof(a))
#define   pb          push_back
#define   yn          cout << "YES" << endl;else cout << "NO" << endl;
#define   mo          cout << -1 << endl
#define   ze          cout << 0 << endl
#define   on          cout << 1 << endl
#define   db1(x)      cout << #x << " = " << x << endl;
#define   db2(x,y)    cout << #x << '=' << x << "   " << #y << '=' << y << endl;
#define   db3(x,y,z)  cout << #x << '=' << x << "   " << #y << '=' << y << "   " << #z << '=' << z << endl;
#define   db4(x,y,z,zz)  cout << #x << '=' << x << "   " << #y << '=' << y << "   " << #z << '=' << z << "   " << #zz << '=' << zz << endl;
#define   ic(case)    int case; cin>> (case);for(int test_case=1 ; test_case<=case; test_case++)
#define   show(vec)          for(auto element : vec) {cout << element << ' ';} cout << endl;
#define   showp(Pair)        for(auto element : Pair) cout << element.first << ' ' << element.second << endl;
#define   show2(vec)         for(auto i : vec) {show(i);}
#define   fio             freopen("database.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define   afio            freopen("avg.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define   fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define   double      long double
#define   fix         cout.setf(ios::fixed)
#define   maxi        ((ll)1e9+7)
#define   mini        ((ll)-1e9+7)
#define   lmaxi       ((ll)1e18+7)
#define   lmini       ((ll)-1e18+7)
int main()
{
    fast;
    fio;
    fix;      

    vector<string>vjudge_rank;

    ll n;
    cin >> n;
    for(int i=0 ; i<n ;i++)
    {
        string handle; 
        cin >> handle  ; 
        vjudge_rank.pb(handle);
    }

    vector<vector<string>>beg,newc; 
    ll con = 1;
    for(auto i : vjudge_rank)
    {
        if(bootcamp.find(i)!=bootcamp.end())
        {
            if(bootcamp[i].back()[0]=='B' and beg.size()<3) 
            {
                vector<string>temp = bootcamp[i];
                temp.pb(i);
                temp.pb(to_string(con)); 
                beg.pb(temp); 
            }
            if(bootcamp[i].back()[0]=='N' and newc.size()<3) 
            {
                vector<string>temp = bootcamp[i];
                temp.pb(i);
                temp.pb(to_string(con)); 
                newc.pb(temp); 
            }
            
        }
        con++;
    }
    map<ll,string>place;
    place[1]="1st";
    place[2]="2nd";
    place[3]="3rd";
    cout << "BEGINNER CATEGORY" << endl;
    int in = 1;
    for(auto i : beg)
    {
        cout << place[in] << " place" << endl;
        cout << "Name : " << i[0] << endl;
        cout << "id : " << i[1] << endl;
        cout << "section : " << i[2] << endl;
        cout << "Vjudge : " << i[4] << endl;
        cout << "overall Rank : " << i.back() << endl; 
        cout << ".................................." << endl;
        in++;
    }
    cout << endl << endl;
    in = 1;
    cout << "NEWCOMER CATEGORY" << endl;
    for(auto i : newc)
    {
        cout << place[in] << " place" << endl;
        cout << "Name : " << i[0] << endl;
        cout << "id : " << i[1] << endl;
        cout << "section : " << i[2] << endl;
        cout << "Vjudge : " << i[4] << endl;
        cout << "overall Rank : " << i.back() << endl; 
        cout << ".................................." << endl;
        in++;
    }
}
