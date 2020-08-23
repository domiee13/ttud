#include <bits/stdc++.h>
using namespace std;

#define MAX 50005

bool isDigitPrime(long long i) {
    if (i == 0 || i == 1 || i == 4 ||
        i == 6 || i == 8 || i == 9)
            return false;
        
    return true;
}

bool checkNumber(long long n) {
    long long tmp, flag = 1;
    while (n != 0) {
        tmp = n % 10;
        n /= 10;
        if (!isDigitPrime(tmp)) {
            return false;
        }
    }
    return true;
}

long long main() {
    long long res[MAX], arr[MAX];
    long long count = 0;
    for (long long i = 0; i < MAX; i++) {
        count++;
        cin >> arr[i];
        if (cin.get() == -1)
            break;
    }
    
    memset(res, 0, sizeof(res));
    unordered_map<long long, long long> mp;
    long long j = 0;

    for (long long i = 0; i < count; i++) {
        if (checkNumber(arr[i])) {
            mp[arr[i]]++;
            if (find(res, res + j, arr[i]) == (res + j)) {
                res[j] = arr[i];
                j++;
            }
        }
    }

    for (long long i = 0; i < j; i++) {
        cout << res[i] << " " << mp.at(res[i]) << '\n';
    }

    return 0;
}