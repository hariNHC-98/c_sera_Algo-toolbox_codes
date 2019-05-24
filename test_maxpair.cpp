#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    int n = numbers.size();
    int z=0;
    long long g=0,k=0,f=0;
    for (int o = 0; o < n; ++o) {
        if(numbers[o]>k)
       { k=numbers[o];
        f=o;
           
       }if(numbers[o]==0)
        z++;
    }
    for (int p = 0; p < n; ++p) {
        if(p==f)
        continue;
        if(numbers[p]>g && numbers[p]<=k)
        g=numbers[p];
    }
    
    if(g==0 && (z>(n-2)))
    g=0;
    else if (g==0)
    g=k;
    
    

    return k*g;
    //return z;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
        

    }
    std::cout << MaxPairwiseProduct(numbers);
    return 0;
}
