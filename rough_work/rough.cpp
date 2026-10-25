
#include <iostream>
using namespace std;
using ll = long long;

bool isPrime(ll x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;

    for (ll i = 3; i <= x / i; i += 2)
        if (x % i == 0) return false;

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll left = n - 1, right = n + 1;
    bool foundLeft = false, foundRight = false;

    while (!foundLeft || !foundRight) {
        if (!foundLeft && left >= 2) {
            if (isPrime(left)) foundLeft = true;
            else left--;
        }

        if (!foundRight) {
            if (isPrime(right)) foundRight = true;
            else right++;
        }
    }

    cout << left << ' ' << right << '\n';
}
