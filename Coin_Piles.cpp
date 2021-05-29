#ifdef _WIN32
#include <bits/stdc++.h>
#else
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <unistd.h>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <set>
#include <iterator>
#include <stack>
#include <list>
#include <map>
#include <unordered_map>
#include <queue>
#include <deque>
#include <time.h>
#include <iomanip>
#include <ctype.h>
#include <assert.h>
#include <locale.h>
#include <signal.h>
#include <setjmp.h>
#include <stdarg.h>
#include <errno.h>
#include <fstream>
#include <numeric>
#endif
using namespace std;
#define ll long long int
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define pll pair<ll, ll>
#define vpll vector<pll>
#define cendl cout << endl
#define sz(x) x.size()
#define fo(i, n) for (ll i = 0; i < n; i++)
#define rfo(i, n) for (ll i = n - 1; i >= 0; i--)
#define ff(a, n) for (int i = a; i < n; i++)
#define rf(a, n) for (int i = n - 1; i >= a; i--)
#define imax INT_MAX
#define imin INT_MIN
#define lmax LONG_MAX
#define lmin LONG_MIN
#define pi 3.14159265358979323846264338327950288419716939937510582097494459230
#define mod 1000000007
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define tstart         \
    time_t strt, endt; \
    time(&strt);       \
    ios_base: :sync_with_stdio(false);
#define tend                                 \
    time(&endt);                             \
    double time_taken = double(endt - strt); \
    cout << endl                             \
         << fixed << time_taken << setprecision(5) << endl;

// Fuck Ratings, I'm in Love with Experience.
// Majanu life he . Or contest me cheating krne vale gandoo chee
int32_t main()
{
    fast;
    // 442 442
    // 442 443
    // 442 444
    // 442 445
    // 443 443
    // 443 444
    // 443 445
    // 444 444
    // 444 445
    // 445 445

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        int x = max(a, b);
        int y = min(a, b);
        if ((a + b) % 3 == 0)
        {
            // cout<<"KONCK"<<endl;
            if (x > y * 2)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout<<"YES"<<endl;
                // while (a > 0 && b > 0)
                // {
                //     if (a > b)
                //     {
                //         a = a - 2;
                //         b = b - 1;
                //     }
                //     else
                //     {
                //         b = b - 2;
                //         a = a - 1;
                //     }
                // }
                // if (a == 0 && b == 0)
                //     cout << "YES" << endl;
                // else
                //     cout << "NO" << endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
