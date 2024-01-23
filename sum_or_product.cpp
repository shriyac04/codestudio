const long long MOD = 1e9 + 7;

long long int sumOrProduct(long long int N, long long int Q) {
    if (Q == 1) {
        // Calculate sum of integers from 1 to N
        return (N * (N + 1) / 2) % MOD;
    } else if (Q == 2) {
        // Calculate product of integers from 1 to N
        long long int result = 1;
        for (int i = 1; i <= N; i++) {
            result = (result * i) % MOD;
        }
        return result;
    } else {
        // Invalid query
        return -1; // You can choose a suitable value to indicate an invalid query
    }
}
