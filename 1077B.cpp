#include <iostream>

int main(void){
    int n;
    std::cin>>n;

    int arr[n];

    for (int i=0; i<n; i++){
        std::cin>>arr[i];
    }

    int ans = 0;

    for (int i=1; i<n-1; i++){
       if (arr[i] == 0){
        if (arr[i-1] == 1 && arr[i+1] == 1){
            arr[i+1] = 0;
            ans++;
        }
       }
    }

    std::cout<<ans;
}
