#include <bits/stdc++.h>
using namespace std;

// 各桁の数字の和を返す
// exp) SummarizeDigit(12345) = 15
template <typename T>
T SummarizeDigit(T n)
{
    T sum = 0;
    T dig;
    while (n)
    {
        dig = n % 10;
        sum += dig;
        n /= 10;
    }
    return sum;
}

template <typename T>
vector<T> CalcDivisor(T n){
    vector<T> divisor;

    rep(i, 1, (T)sqrt(n)+1){
        if(n%i == 0){
            divisor.push_back(i);
            divisor.push_back(n / i);
        }
    }
    return divisor;
}


// 二分累乗法
// 下のコードよりも早い？わからん
// long long int MOD = 1000000007;
template <typename T>
T modpow(T a, T n)
{
    T res = 1;
    while (n > 0)
    {
        // if (n & 1) res = res * a % MOD;
        // a = a * a % MOD;
        if (n & 1)
            res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}

// 繰り返し二乗法
template <typename T>
T DoublingPow(T a, T p)
{
    if (p == 0)
        return 1;
    if (p % 2 == 0)
    {
        T half_p = p / 2;
        T half = DoublingPow(a, half_p);
        return half * half;
    }
    else
    {
        return a * DoublingPow(a, p - 1);
    }
}

// 繰り返し二乗法（MOD）
long long int MOD = 100000007;
template <typename T>
T DoublingPowMOD(T a, T p)
{
    if (p == 0)
        return 1;
    if (p % 2 == 0)
    {
        T half_p = p / 2;
        T half = DoublingPow(a, half_p) % MOD;
        return half * half;
    }
    else
    {
        return a * DoublingPow(a, p - 1) % MOD;
    }
}

// エラトステネスの篩
// bool ver.
std::vector<bool> IsPrime;
void sieve(size_t max)
{
    if (max + 1 > IsPrime.size())
    {                                  // resizeで要素数が減らないように
        IsPrime.resize(max + 1, true); // IsPrimeに必要な要素数を確保
    }
    IsPrime[0] = false; // 0は素数ではない
    IsPrime[1] = false; // 1は素数ではない

    for (size_t i = 2; i * i <= max; ++i)         // 0からsqrt(max)まで調べる
        if (IsPrime[i])                           // iが素数ならば
            for (size_t j = 2; i * j <= max; ++j) // (max以下の)iの倍数は
                IsPrime[i * j] = false;           // 素数ではない
}

// エラトステネスの篩
// 数字格納Ver.
std::vector<int> MakePrime(int n)
{
    std::vector<int> prime;
    prime.emplace_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        bool a = false;
        for (int j = 3; j <= std::sqrt(i); j += 2)
        {
            if (i % j == 0)
            {
                a = true;
            }
        }
        if (a == false)
        {
            prime.emplace_back(i);
        }
    }
    return prime;
}

// 素因数分解
// map<素因数, 乗数>
template <typename T>
map<T, T> PrimeFactorize(T n){

    map<T, T> primelist;
    T nrest = n;

    for (T i = 2; i * i <= nrest;++i){
        if(nrest %i == 0){
            T cnt = 0;
            // 同じ素因数で割り切れるだけ割り続ける（最低でも一度は割り切れる）
            while(nrest %i == 0){
                ++cnt;
                nrest /= i;
            }
            primelist[i] += cnt;
        }
    }
    if(nrest != 1){
        primelist[nrest] += 1;
    }
    return primelist;
}


// Bit全探索
void BitSearch()
{
    int L = 1;
    // 2^L - 1回の全探索
    for (int i = 0; i < 1 << L; ++i)
    {
        int r;
        for (r = 0; r < L; ++r)
        {
            // Bitが立っているときの処理
            if ((i & (1 << r)) != 0)
            {
            }
        }
    }
}