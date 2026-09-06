bool isHappy(int n) {
    while(n != 1 && n != 4){
        int Sum = 0;

        while(n){
            int temp = n % 10;
            Sum += temp * temp;
            n /= 10;
        }

        n = Sum;
    }

    return n == 1;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna