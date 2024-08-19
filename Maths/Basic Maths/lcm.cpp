// int gcd(int a, int b) {
//         while (b != 0) {
//             int temp = b;
//             b = a % b;
//             a = temp;
//         }
//         return a;
//     }

//     // Function to calculate the LCM
//     int lcm(int a, int b) {
//         return (a / gcd(a, b)) * b;
//     }